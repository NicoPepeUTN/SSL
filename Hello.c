#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *salida;

    salida= fopen("output.txt", "w+");
    if(salida == NULL){
        printf("No se puede abrir archivo");
    }

    fprintf(salida, "hello world\n");

    fclose(salida);

    return 0;

}