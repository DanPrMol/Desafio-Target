#include <stdio.h>

int fib_rec(int x, int a1, int a2){
    if (x != a1 && x != a2 && x < a1 + a2) return 0;
    if (x == a1 || x == a2 || x == a1 + a2) return 1;
    return fib_rec(x, a2, a1+a2);
}

int main(void){
    int x;
    scanf("%d", x);
    if (fib_rec(x, 0, 1)){
        printf("o número faz parte da sequência de fibonacci");
    }else printf("o número NÃo faz parte da sequência de fibonacci");
    return 0;
}