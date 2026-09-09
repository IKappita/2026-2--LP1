#include <stdio.h>
#define MAX_ESTUDIANTES 5 //constante procesador    

int main (){
    //variables
    char nombre[50];
    float nota1, nota2, nota3, promedio;
    int i;

    printf("=== SISTEMA DE CALIFICACIONES ===  \n\n");
    //bucle for para procesar estudiantes
    for (int i=0; i< MAX_ESTUDIANTES; i++){
        printf("\n --- Estudiante %d --- \n",i+1);

        //limpiar buffer de entrada 
        while(getchar() != '\n');
        printf("Nombre: ");

        fgets(nombre, sizeof(nombre),stdin);

        //Eliminar el '\n' del final
        for(int j=0; nombre[j]!='\0';j++){
            if(nombre[j]=='\n'){
                nombre[j]='\0';
                break;
            }
        }
        //entrada de notas con validación
        do{
            printf("Nota 1 (0-100): ");
            scanf("%f",&nota1);
        } while(nota1<0 || nota1>100);

        do{
            printf("Nota 2 (0-100): ");
            scanf("%f",&nota2);
        } while(nota2<0 || nota2>100);
        do{
            printf("Nota 3 (0-100): ");
            scanf("%f",&nota3);
        } while(nota3<0 || nota3>100);
       //calcular promedio
       promedio= (nota1 + nota2+ nota3)/3;
       //determinar estado
       char* estado;
       if(promedio>=70){
        estado = "APROBADO";
       } else if(promedio>=50){
        estado = "RECUPERACIÓN";
       } else {
        estado="REPROBADO";
       }

       //Salida formateadaa
       printf("\n --- Resultados --- \n");
       printf("Estudiante: %s \n",nombre);
       printf("Notas: %1.f, %1.f,%1.f\n",nota1,nota2,nota3);
       printf("Promedio: %.2f\n",promedio);
       printf("Estado:%s\n",estado);
       //Operador ternario para línea de separación
       printf ("%s\n", (i<MAX_ESTUDIANTES -1)?"------------" : "===============");

       
    }

    printf("\n!Procesamiento completado!\n");
    return 0;
}