#include<stdio.h>

int main(void){
    int n;
    int i = 1;

    printf("ingrese cantidad de renglones: ");
    scanf("%d", &n);

    while (i <= n)
    {
        for (int j = 0; j < i; j++)
        {
            if ((i + j)%2 == 0){
                printf("0");
            }else
            {
                printf("1");
            }
        }
        printf("\n");
        i++;
    }
}