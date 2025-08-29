#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vogal(char* s, int n) {
    int vog = 1;
    for(int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            vog = 0;
            i = n;
        }
    }

    return vog;
}

int consoante(char* s, int n) {
    int cons = 1;
    for(int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        if((c < 97 || c > 122) || (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {     //não ser letra ou não ser vogal
            cons = 0;
            i = n;
        }
    }

    return cons;
}

int inteiro(char* s, int n) {
    int in = 1;
    for(int i = 0; i < n; i++) {
        char c = s[i];
        if(c < 47 || c > 58) {
            in = 0;
            i = n;
        }
    }

    return in;
}

int real(char* s, int n) {
    int r = 1, qt = 0;
    for(int i = 0; i < n; i++) {
        char c = s[i];
        if(c == ',' || c == '.') qt +=1;
        else if(qt > 1 || c < 48 || c > 57) {       //mais de um ./, ou não for numero
            r = 0; i = n;
        }
        
    }

    return r;
}


int main(void) {
    char s[1000];

    do {
        fgets(s, 1000, stdin);
        s[strcspn((s),"\n")] = '\0';

        if(strcmp(s,"FIM") != 0) {

            if(vogal(s, strlen(s))) printf("SIM ");
            else printf("NAO ");
            
            if(consoante(s, strlen(s))) printf("SIM ");
            else printf("NAO ");
            
            if(inteiro(s, strlen(s))) printf("SIM ");
            else printf("NAO ");
            
            if(real(s, strlen(s))) printf("SIM\n");
            else printf("NAO\n");
        }

    } while(strcmp(s,"FIM") != 0);
}