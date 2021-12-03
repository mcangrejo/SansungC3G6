/*Especificadores de formato y secuencias
realizado por: Martha Cano  */


#include <stdio.h>    
#include <stdlib.h>

int main()
{
    printf("para hacer un salto de linea se hace: \n\n\n"); //\n hace un salto de linea
	printf("esta es la siguiente linea \a \n");// \a reproduce el sonido por defecto de windows
	
	printf("las tabulaciones sirven para hacer figuras:\n");
	printf("xxx\txxx\nxx\txx\nx\tx\n\n"); //\t realiza una tabulacion 
	printf("xxx\txxx\nxx\txx\nx\tx\bo\n\n"); //ctrl+e duplica la instruccion \b hace un retroceso de un caracter
	
	printf("la \"gramatica\" de c es compleja \n"); //\" imprime las ", sin terminar el argumento de printf
	
	printf("\\n sirve para hacer un salto de linea \n"); //para imprimir el \ y que no lo interprete como secuencia le agrego otro backslash
	system("pause");
	return 0;

}


