/*programa de creacion, modificacion y lectura de archivos */
/* creado por: Martha Cano*/
/* fecha: 19 de enero 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *miarchivo=fopen("mipagina.html","w");  //se crea un apuntador de tipo FILE al archivo que se va a crear. "w" crea un nuevo archivo o sobreescribe el archivo que tenga el mismo nombre
	fprintf(miarchivo, "Hola mundo");
	fclose(miarchivo); //siempre se debe cerrar el archivo antes de terminar el programa, para que no quede bloqueado para otros usos
	
	FILE *f=fopen("mipagina.html", "a"); //"a" crea un nuevao archivo, pero si el archivo ya existe, no lo reemplaza si no que le agrega el contenido
	fprintf(f,"<html>");
	fprintf(f,"<marquee direction=UP>");
	fprintf(f,"Samsung");
	fprintf(f,"</marquee>");
	fprintf(f,"</html>");
	
	fclose(f); //se cierra el archivo
	
	system("mipagina.html");	//despues de cerrar el archivo se abre desde el explorador usando la funcion system
	
	return 1;
}
