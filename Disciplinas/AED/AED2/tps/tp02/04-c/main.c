#include <stdio.h>
#include <string.h>

int somaDigitos(char* s, int n, int i) {
    int soma = 0;
    char c = s[i];
    if(i >= n) soma = 0;
    else soma += c-48 + somaDigitos(s, n, i+1);     //'1' = 49 -> '1'- 48 = 1

    return soma;
}

int main(void) {
    char s[1000];

    do{
        fgets(s,1000,stdin);
        s[strcspn(s,"\n")] = '\0';

        if(strcmp(s,"FIM") != 0) {
            printf("%d\n", somaDigitos(s, strlen(s), 0));
        }
    
    }while(strcmp(s,"FIM") != 0);

    return 0;
}