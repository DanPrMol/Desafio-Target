#include <stdio.h>

int main(void){
    char str[100];
    scanf("%s", str);
    int tam = 0;
    char temp = str[tam];
    while (temp || tam < 100){
        tam++;
        if (tam < 100){
            temp = str[tam];
        }
    }
    char res[tam];
    for (int i = 0; i < tam; i++){
        res[i] = str[tam - (i+1)];
    }
    for (int i = 0; i < tam; i++){
        str[i] == res[i];
    }
    return 0;
}