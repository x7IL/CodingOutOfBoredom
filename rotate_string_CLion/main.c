#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 *  ./a.out "abc " | cat -e
 *  ./a.out "Let there be more light" | cat -e
 *  ./a.out "$(echo -ne '\tAkjhZ \tzLKIJz , 23y')" | cat -e
 * */
void putcharr(char c){
    write(1,&c,1);
}

int main(int ac, char ** ag) {

    int b = 0;
    int c = 0;
    for(int i = 0; ag[1][i] != '\0';i++){
        if(b == 0 && ag[1][i] != ' '){
            //write(2,&ag[1][i],1);
            c++;
        }
        else{
            b=1;
            putcharr(ag[1][i]);
        }

    }

    for( int i = 0; i<c ;i ++){
        putcharr(ag[1][i]);
    }


    //free(tab);

    return 0;
}
