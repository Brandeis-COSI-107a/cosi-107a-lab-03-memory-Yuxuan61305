#include <stdio.h>

int x;
char word[] = "hello";

int function(){
    return 10;
}

int main(){
printf("%p\n", &x);
printf("%p\n", &word);
printf("%p\n", &function);
  
}
