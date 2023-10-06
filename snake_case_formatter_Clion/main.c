#include <stdio.h>
#include <unistd.h>
/*
 *gcc main.c
 * ./a.out "Nau Man's Land"
 * ./a.out " Andrey-lgun42 is a GORILLA " | cat -e
 * ./a.out "" | cat -e
 * ./a.out ; echo $?
 */

int my_strlen(char **tab){
    int a= 0;
    for(int i = 0; tab[1][i]!='\0';i++){
        a++;
    }
    return a;
}


void putcchar(char c){
    write(1,&c,1);
}

void putcchar2(char c){
    write(1,"_",1);
    write(1,&c,1);
}

int main(int argc, char ** tab) {
    if(argc == 1)return 84;
    int a=my_strlen(tab);
    switch (a) {
        case 0:
            write(1,"\n",1);
            break;
        default:
            for (int i = 0;tab[1][i] != '\0'; i++) {  //
                (i == 0 && tab[1][i] == ' ' || (a - 1 == i && tab[1][a - 1] == ' '))? 0:(tab[1][i] >= 65 && tab[1][i] <= 90) ? putcchar(tab[1][i]+32):(tab[1][i] >= 97 && tab[1][i] <= 122)? putcchar(tab[1][i]):((tab[1][i - 1] >= 97 &&tab[1][i - 1] <= 122) || (tab[1][i - 1] >= 65 &&tab[1][i - 1] <= 90)) &&(tab[1][i] >= 48 &&tab[1][i] <= 57)? putcchar2(tab[1][i]):((tab[1][i - 1] >= 97 &&tab[1][i] <= 122) ||(tab[1][i - 1] >= 65 &&tab[1][i] <= 90) || (tab[1][i - 1] >= 48 &&tab[1][i - 1] <=57)) && (tab[1][i] >= 48 && tab[1][i] <= 57) ? putcchar(tab[1][i]):write(1,"_",1);
               }
            break;
    }
    return 0;
}

