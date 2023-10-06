/*function that allocates memory using malloc*/
void *malloc_checked(unsigned int b);

/*function that concatenates two strings*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/*function that allocates memory for an array*/
void *_calloc(unsigned int nmemb, unsigned int size);

/*function that creates an array of integers*/
int *array_range(int min, int max);

/*function that reallocates a memory block using malloc ande free*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int);

/*function that prints_putchar*/
int _putchar(char c);
