#ifndef main_h
#define main_h
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _puchar(char c);
#endif
