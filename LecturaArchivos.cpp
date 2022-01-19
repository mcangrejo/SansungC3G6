/*programa de lectura de archivos */
/* creado por: Martha Cano*/
/* fecha: 19 de enero 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nombre[100]={0}; //arreglo para almacenar cadenas de caracteres
	char edad[20]={0};
	char pasatiempo[100]={0};
	int edad_int=0, contador=0, promedioEdad=0;
	char cmd[100]={0};
	
	
	FILE *p=fopen("pasatiempos.txt","r");//"r" abre un archivo en modo de solo lectura
	
	while(1)// 1 equivale a verdadero. While(1) es un bucle infinito por que la condicion siempre es verdadera
	{
		fscanf(p,"%s %s %s",nombre, edad, pasatiempo); //adquiere una cadena de caracteres desde el archivo y lo almacena en el arrgelo nombre
		printf("%s	%s	%s\n",nombre,edad,pasatiempo); //imprime por consola lo adquirido	
		edad_int=atoi(edad); //convierte la cadena de caracteres en un entero		
		contador++; //lleva el conteo de los registros que hay en el archivo
		promedioEdad+=edad_int;  //va acumulando las edades
		
		sprintf(cmd,"start https://www.google.com/search?q=%s^&tbm=isch",pasatiempo);
		system(cmd);
				
		if(feof(p))   //feof:file end of file, retorna verdadero si se llego al final del archivo 
		{
			break; //rompe el bucle que lo contiene
		}
	}
	promedioEdad/=(contador-1); //a contador se le resta 1 debido al encabezado "Nombre edad pastaiempo"
	printf("el promedio de edad es: %d",promedioEdad);
	
	fclose(p);
	return 1;
}
