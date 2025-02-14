#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc <2){
        return 0;
    }
    for(int i = 1;i<argc;i++){
        long num = strtol(argv[i], NULL, 0);
        printf("%d 0x%02lX %3ld\n",i, num & 0xFF, num&0xFF);
    }
    return 0;
}
