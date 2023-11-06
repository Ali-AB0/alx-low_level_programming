#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char *argv[]);
int check_for_digits(char **av);
void init(char *str, int l);
void _print(char *str, int l);
int _putchar(char c);
#endif
