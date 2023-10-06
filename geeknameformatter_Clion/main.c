#include <stdio.h>
#include <unistd.h>

//      ./a.out >/dev/null || echo "Exit status: $?"
//      ./a.out 'santa Tomato!KETCHUP/' | cat -e

void my_putchar(char c){
    write(1,&c,1);
}

int main(int argc, char ** tab) {

    if(tab[1] == NULL){
        write(2,"Usage: ./hidenp needle haystack\n",33);
        return 84;
    }
    for(int i = 0; tab[1][i] != '\0' ; i++) {
        (tab[1][i] == 121 || tab[1][i] == 89)?my_putchar('5'):
        (tab[1][i] == 97 || tab[1][i] == 65)?my_putchar('4'):
        (tab[1][i] == 101 || tab[1][i] == 69)?my_putchar('3'):
        (tab[1][i] == 117 || tab[1][i] == 85)?my_putchar('2'):
        (tab[1][i] == 105 || tab[1][i] == 73)?my_putchar('1'):
        (tab[1][i] == 111 || tab[1][i] == 79)?my_putchar('0'):
        (i%2 == 0) ? (tab[1][i] >= 97 && tab[1][i] <= 122) ? my_putchar((tab[1][i] - 32)):
        my_putchar(tab[1][i]):
        (tab[1][i] >= 65 && tab[1][i] <= 90)?
        my_putchar((tab[1][i]+32)):
        my_putchar(tab[1][i]);
    }
    return 0;
}
