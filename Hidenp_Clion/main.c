#include <stdio.h>
#include <unistd.h>
/*
 *
 * ./a.out padinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
 * ./a.out ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
 * ./a.out >/dev/null || echo “Exit status: $?”
 */
int main(int argc, char ** argv) {
    int a = 0;
    int b = 0;

    if(argv[1] == NULL){
        write(2,"Usage: ./hidenp needle haystack\n",33);
        return 84;
    }
    else {
        int j = 0;
        for (int i = 0; argv[2][i] != '\0'; i++) {
            if (argv[1][j] == argv[2][i]) {
                b++;
                j++;
            }
            if( argv[1][j] == '\0'){
                b = a;
            }
        }
        write(2, (b == a) ? "1" : "0", 2);
        return 0;
    }
}
