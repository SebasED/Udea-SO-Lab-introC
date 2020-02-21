# include<stdio.h>
#include<math.h>

int sumPolinomial(int a, int b);

int main(void){
    int x, n, sum;

    printf("Ingrese la variable para el polinomio: ");
    scanf("%d", &x);
    printf("Ingrese la variable para el grado del polinomio: ");
    scanf("%d", &n);
    
    sum = sumPolinomial(x, n);
    printf("El resultado de la suma polinomial es: %d", sum);
}

int sumPolinomial(int a, int b){
    int suma = 0;

    for (int i = 0; i <= b; i++)
    {
        suma = suma + pow(a,i); 
    }
    return suma;
}