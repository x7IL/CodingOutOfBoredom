#include <stdio.h>

int main() {
    char tab[] = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
    char tab2[] = "ddf6ewg64f";
    int a = 0;
    int b = 0;
    int j = 0;

    for(int i = 0; tab2[i] != '\0'; i++){
        a++;
    }
    for(int i = 0 ; tab[i] != '\0' ; i++){
        if(tab2[j] == tab[i]){
            b++;
            i=0;
            j++;
        }
    }
    (b == a)?printf("il s'y trouve"):printf("il ne s'y trouve pas");
}
