#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void checkElf(Elf64_Ehdr *header);
void printHeaderInfo(Elf64_Ehdr *header);
void closeFile(int fd);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error");
        return 1;
    }

    Elf64_Ehdr header;
    ssize_t bytesRead = read(fd, &header, sizeof(header));
    if (bytesRead != sizeof(header))
    {
        perror("Error");
        closeFile(fd);
        return 1;
    }

    checkElf(&header);
    printHeaderInfo(&header);
    closeFile(fd);

    return 0;
}

void checkElf(Elf64_Ehdr *header)
{
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(1);
    }
}

void printHeaderInfo(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", header->e_ident[i]);
        if (i < EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");

    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS])
    {
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
    }

    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA])
    {
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
    }

    printf("  Version:                           %d", header->e_ident[EI_VERSION]);
    switch (header->e_ident[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
    }

    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
    }

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type)
    {
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_type);
    }

    printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

void closeFile(int fd)
{
    if (close(fd) == -1)
        perror("Error: Can't close file");
}

