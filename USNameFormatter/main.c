#include <unistd.h>
//./a.out "pJ HARVEY" | cat -e
//./a.out “MiCkAeL j FoX” | cat -e
//./a.outk

//not finisehd

void putcharr(char n){
    write(1,&n,1);
}

int main(int argc, char ** argv) {
    int a =  0;
    for(int i = 0; argv[1][i]!='\0';i++){
        if(i==0 & argv[1][i] >=97 & argv[1][i] <=122){
            putcharr(argv[1][i]-32);
        }
        else if(argv[1][i] >=65 & argv[1][i] <=97){
            putcharr(argv[1][i]);
        }
    }
    return 0;
}
