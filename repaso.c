#include <stdio.h>
int valor;
void main(){
    printf("Ejemplo de if de un numero: ");
    scanf("%d",&valor);

    /*Saber si es positivo, negativo o es un 0*/
    if(valor > 0){
        printf("El numero es positivo.\n");
    }

    if(valor < 0){
        printf("El numero es negativo.\n");
    }

    if(valor == 0){
        printf("El numero es Cero o neutro.\n");
    }

    /*Mismo ejemplo pero anidado*/    
    if(valor > 0){
        printf("+El numero es positivo.\n");
    }else{
        if(valor < 0){
            printf("+El numero es negativo.\n");
        }
        else{
            printf("+El numero es Cero o neutro.\n");
        }
    }

    /*Si el numero es una unidad, decena, centena, millar o si no es nada de eso*/
    if(valor >= 1){
        if(valor <= 9){
            printf("El numero es unidad\n");
        }
    }

    if(valor >= 10){
        if(valor <= 99){
            printf("El numero es decena\n");
        }
    }

    if(valor >= 100){
        if(valor <= 999){
            printf("El numero es centenas\n");
        }
    }

    if(valor >= 1000){
        if(valor <= 9999){
            printf("El numero es millares\n");
        }
    }

    if(valor > 9999){
        printf("no es nunguno de ellos\n");
    }
    
    if(valor < 1){
        printf("no es nunguno de ellos\n");
    }
    
    /*mismo pero anidado*/
    if(valor >= 1)
    {
        if(valor <= 9){
            printf("+El numero es unidad\n");
        }
        else{
                if(valor <= 99){
                    printf("+El numero es decena\n");
                }
                else{
                        if(valor <= 999){
                            printf("+El numero es centena\n");
                        }
                        else{
                                if(valor <= 9999){
                                    printf("+El numero es millar\n");
                                }
                                else{
                                    printf("+No es ninguno de ellos");
                                }
                        }
                    }
            }
    }
    else{
        printf("+No es ninguno de ellos");
    }
    getch();   
}