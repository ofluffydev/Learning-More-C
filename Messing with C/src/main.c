#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    if(argc != 1) {
        printf("You have entered %d arguments\n", argc);
        for(int i = 0; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }
    return 0;
}