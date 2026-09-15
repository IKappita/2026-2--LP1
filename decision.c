#include<stdio.h>
int main (void){
    printf("Ingresa 2 enteros y te dire: \n");
    printf("Las relaciones que se cumplen entre ellos: \n");
    
    int number1 = 0;
    int number2 = 0;

    scanf("%d %d",&number1, &number2 );
    if(number1==number2){
        printf("%d es igual a %d\n",number1,number2);
    }
    if(number1!=number2){
        printf("%d no es igual a %d\n", number1,number2);
    }
    if(number1<number2){
        printf("%d es menor que %d \n",number1,number2);
    }
    if(number1>number2){
        printf("%d is mayor que %d\n",number1,number2);
    }    
    if(number1<=number2){
        printf("%d es menor o igual a %d\n",number1, number2);
    }
    if(number1>=number2){
        printf("%d es mayor o igual a %d\n", number1, number2);
    }



    return 0;
}