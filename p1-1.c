#include <stdio.h>

int com(int a);

int main(void){
    int venta;
    int comision;
    
    printf("Ingrese el total de ventas: ");
    scanf("%d", &venta);
    comision = com(venta);
    if (comision < 0){
        printf("No hay comision");
    }else{
        printf("La comisión es %d\n", comision);
    }   
}

int com(int a){
    int comi;
    if (a > 0 && a <= 20000){
        comi = a*0.05; 
    }else if(a > 20000 && a <= 50000){
        comi = (a-20000)*0.07 + 1000;
    }else if (a > 50000){
        comi = (a-50000)*0.1 + 3100;
    }else if(a < 0){
        comi = -1;
    } 
    return comi;
}