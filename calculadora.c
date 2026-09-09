#include<stdio.h>
int main (){
    const float PI=3.14159;

    //variables
    int num1, num2;
    float resultado;
    printf("--- CALCULADORA BASICA ---\n");
    printf("Ingrese dos numeros enteros \n");
    //entrada de numeros
    printf("Primer numero: \n");
    scanf("%d",&num1); //leer entero

    printf("Segundo numero: \n");
    scanf("%d",&num2);
    
    //operaciones
    printf("\n --- RESULTADOS ---\n");
    printf("%d + %d = %d\n", num1,num2,num1+num2);
    printf("%d - %d = %d\n", num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    //division con resultado flotante
    resultado=(float)num1/num2; //casting
    printf("%d / %d = %.2f\n",num1,num2,resultado);

    //modulo (resto)
    printf("%d %% %d= %d\n",num1,num2,num1 % num2);

    //Operadores de incremento
    printf("\n --- OPERADORES ESPECIALES ---\n");
    int x=num1;
    printf("x= %d\n",x);
    printf("x++ =   %d\n",x++);//post-incremento
    printf("Despues de  x++: x = %d\n",x);
    printf("++x=%d\n", ++x); //Pre incremento
    

    return 0;
}