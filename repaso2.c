#include <stdio.h>
int pila[5], cola[5];
int incrementocola = 0, decrementopila= 4;
int x, opc, opc2;

void main(){
    do{
        printf("Programa de repaso de arreglos\n");
        printf("Opc 1 Agregar\n");
        printf("Opc 2 Mostrar\n");
        printf("Opc 3 Eliminar\n");
        printf("Opc 4 Salir\n");
        printf("Opc: ");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1:
            printf("Estas en la seccion Agregar.\n");
            printf("Si desea agregar una pila opc 1, Si desea agregar una cola opc 2: ");
            scanf("%d",&opc2);
            switch (opc2)
            {
            case 1:
                printf("Base de datos Pila\n");
                if(decrementopila < 0){
                    printf("La base de datos de pila esta llena... Precione una tecla para regresar.");
                }
                else{
                    agregar(1);
                }
                break;

            case 2:
                printf("Base de datos Cola\n");
                if(incrementocola > 4){
                    printf("La base de datos de cola esta llena... Precione una tecla para regresar.");
                }
                else{
                    agregar(2);
                }
                break;
            
            default:
                printf("Esa Opcion no existe sera regresado al menu principal.\n");
                break;
            }
            getch();
            break;

        case 2:
            printf("Estas en la seccion Mostrar.\n");
            getch();
            break;
        case 3:
            printf("Estas en la seccion Eliminar.\n");
            getch();
            break;
        case 4:
            printf("Termino el programa.\n");
            getch();
            break;
        default:
            printf("Esa opcion no existe.");
            getch();
            break;
        }
        //Hacer mientas la condicion sea verdadera
    }while(opc!=4);
}


int agregar(int metodo){
    switch (metodo)
    {
    case 1:
        printf("Ingrese el dato para la pos %d:", decrementopila);
        scanf("%d",&pila[decrementopila]);  
        decrementopila--;
        break;
    case 2:
        printf("Ingrese el dato para la pos %d:", incrementocola);
        scanf("%d",&cola[incrementocola]);  
        incrementocola++;
        break;
    }
}