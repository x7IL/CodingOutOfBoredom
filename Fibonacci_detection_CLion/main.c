#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    int a = 0;
    if(argc < 4){
        printf("Not a Fibonaci sequence\n");
    }
    else {
        for (int i = 0; i < argc-3; i++) {
            if (atoi(argv[i + 1]) + atoi(argv[i + 2]) != atoi(argv[i + 3])) {
                printf("Not a Fibonaci sequence\n");
                a = 1;
                break;
            }
        }
        if(a == 0){
            printf("OK\n");
        }
    }
}
