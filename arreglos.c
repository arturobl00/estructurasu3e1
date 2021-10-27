#include <stdio.h>
#include <conio.h>
//Definir variable arreglo Globales
//El programa original trabaja con 20 posiciones
int datospila[3];
int datoscola[3];
int x, interruptor, opc, metodo;
int posincremento, posdecremento;
void main(){
    printf("Unidad 3 Trabajando con estructuras lineales - Arreglo");
    printf("\nEste programa trabaja con un arreglo de 20 posisicones de tipo numerico\n");
    printf("Instrucciones precione una tecla para iniciar un ciclo donde tendra como opciones: Agregar, Mostrar y Terminar programa\n");
    getch();
    interruptor = 1;
    posincremento = 0;
    posdecremento = 2;
    do{
        printf("Menu de opciones\n");
        printf("1.- Agregar Datos\n");
        printf("2.- Mostrar Datos\n");
        printf("3.- Eliminar Datos\n");
        printf("4.- Terminar el Programa\n");
        printf("Que opcion quiere: ");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1:
            printf("Proceso para agregar datos al arreglo: \n");
            printf("Que metodo desea 1 pila o 2 cola:");
            scanf("%d",&metodo);
            agregaregistro(metodo);
            break;
        case 2:
            printf("Proceso para motrar datos al arreglo: \n");
            printf("Que metodo desea 1 pila o 2 cola:");
            scanf("%d",&metodo);
            if(metodo == 1){
                if(datospila[2] != NULL){
                    mostrardatos(metodo);
                }
                else{
                    printf("El Arreglo no tienen datos\n");
                    getch();
                }
            }
            else{
                if(metodo == 2){
                    if(datoscola[0] != NULL){
                        mostrardatos(metodo);
                    }
                    else{
                        printf("El Arreglo no tienen datos\n");
                        getch();
                    }
                }
                else{
                    printf("Opc no valida el proceso se reanudara...");
                    getch();
                }   
            }
            break;
        
        case 3:
            printf("Proceso para eliminar datos al arreglo: \n");
            printf("Que Arreglo desea 1 pila o 2 cola:");
            scanf("%d",&metodo);
            break;

        case 4:
            interruptor = 0;
            break;
            
        default:
            printf("Esa opcion no esta en el menu intente de nuevo\n");
            getch();
            break;
        }
    }while(interruptor!=0);
    printf("Programa Terminado Press Any Key to Continue...");
    getch();
}


int agregaregistro (int dato){
    if(dato == 1){
                if(posdecremento < 0){
                    printf("El arreglo esta lleno...");
                    getch();
                }
                else{
                    printf("Proporcione el dato: ");
                    scanf("%d",&datospila[posdecremento]);
                    posdecremento--;
                }
            }
            else{
                if(dato == 2){
                    if(posincremento > 2){
                    printf("El arreglo esta lleno...");
                    getch();
                }
                else{
                    printf("Proporcione el dato: ");
                    scanf("%d",&datoscola[posincremento]);
                    posincremento++;
                }
                }
                else{
                    printf("Opc no valida el proceso se reanudara...");
                    getch();
                }
            }
}

int mostrardatos(int dato){
    switch (dato)
    {
        case 1:
            printf("\nLos datos de la pila son:\n");
            for(x=2; x >= 0; x--){
                printf("Dato en la pos %d: %d\n",x, datospila[x]);    
            }
            break;
        case 2:
            printf("\nLos datos de la cola son:\n");
            for(x=0; x <= 2; x++){
                printf("Dato en la pos %d: %d\n",x, datoscola[x]);    
            }
            break;
    }
    getch();
}