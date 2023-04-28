#include <stdio.h>
int main(){
   FILE *archivo = fopen("output.txt","w");
   fprintf(archivo, "Hola mundo""\n");
   fclose(archivo);
    puts("Contenido escrito correctamente");
    return 0;
}
