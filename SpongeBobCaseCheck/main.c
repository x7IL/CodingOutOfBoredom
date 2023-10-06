#include <unistd.h>
#include <stdio.h>
//./a.out " wHY dO YoU CRaSh? " | cat -e
//./a.out "WELCOME MR. KRABS" | cat -e
//./a.out "thiS IS = verY TOuchY! (BUt stILL valID)"
//./a.out "H U#G==O"
//./a.out ""
//./a.out ; echo $?
int main(int argc, char ** argv) {
    if(argv[1] == NULL){
        return 84;
    }
    int a = 0;
    int b = 0;
    for(int i = 0; argv[1][i]!='\0';i++){
        (argv[1][i]>=65 & argv[1][i]<=90) ? a++: (argv[1][i]>=97 & argv[1][i]<=122) ? (a=0) : 0 ;
        (a>3)?b=1:0;
    }
    (b==0)?write(2,"OK",2):write(2, "INVALID", 7);
    return (b==0)? 0:84;
}
