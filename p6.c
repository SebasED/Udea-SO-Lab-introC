#include<stdio.h>

int invertir(int a);

int main(void){
    int num;
    int numinv;

    printf("ingrese el numero: ");
    scanf("%d", &num);

    numinv = invertir(num);
    printf("el numero invertido es: %d", numinv);
}

int invertir(int a){
    int inv = 0;
    int mod;

    while (a != 0)
    {
        mod = a%10;
        inv = (inv*10) + mod;
        a = a/10;
    }
    return inv;
}

