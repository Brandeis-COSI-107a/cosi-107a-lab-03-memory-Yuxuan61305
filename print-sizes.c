#include <stdio.h>

int main(){
int x = 978;
int *p ;
char array[200];
char *pointer;
printf("size of char is %zu\n", sizeof(char));
printf("size of short is %zu\n", sizeof(short));
printf("size of int is %zu\n", sizeof(int));
printf("size of long is %zu\n", sizeof(long));
printf("size of long long is %zu\n", sizeof(long long));
printf("size of float is %zu\n", sizeof(float));
printf("size of double is %zu\n", sizeof(double));
printf("size of char * is %zu\n", sizeof(char*));
printf("size of int * is %zu\n", sizeof(int*));
printf("size of long * is %zu\n", sizeof(long*));
printf("The size of my character array is %zu\n", sizeof(array));
pointer = array;
printf("The size of my character pointer is %zu\n", sizeof(pointer));
p = &x;
printf("The size of my int pointer is %zu\n", sizeof(p));
printf("The size of my int pointer points at is %zu\n", sizeof(*p));
}
