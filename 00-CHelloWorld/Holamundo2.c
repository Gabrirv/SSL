#include <stdio.h>

int main(){
    FILE*archivo;
    archivo = fopen("Output.txt", "w");
    fwrite("Hola Mundo", sizeof("Hola Mundo"),1,archivo);
    fclose(archivo);
}