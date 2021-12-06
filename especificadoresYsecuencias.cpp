/*Especificadores de formato y secuencias
realizado por: Martha Cano  */


#include <stdio.h>    
#include <stdlib.h>

int main()
{
    //secuencias:
	printf("para hacer un salto de linea se hace: \n\n\n"); //\n hace un salto de linea
	printf("esta es la siguiente l\xA1nea \a \n");// \a reproduce el sonido por defecto de windows
	
	printf("las tabulaciones sirven para hacer figuras:\n");
	printf("xxx\txxx\nxx\txx\nx\tx\n\n"); //\t realiza una tabulacion 
	printf("xxx\txxx\nxx\txx\nx\tx\bo\n\n"); //ctrl+e duplica la instruccion \b hace un retroceso de un caracter
	
	printf("la \"gramatica\" de c es compleja \n"); //\" imprime las ", sin terminar el argumento de printf
	
	printf("\\n sirve para hacer un salto de linea \n \n"); //para imprimir el \ y que no lo interprete como secuencia le agrego otro backslash
	
	
	//especificadores de formato y tipos de datos
	
	char variableChar=64;
	short int variableShort=64*5;
	int variableInt=64*1100;
	float variableFloat=64*5*3.14;
	
	printf("variableChar, como entero %d, \n como caracter %c, \n como flotante %f,\n como entero sin signo %u \n",variableChar, variableChar,variableChar,variableChar); 
	//%d especificador de formato de entero
	//%c como caracter de tabla ascii
	//%f como flotante
	//%u como entero sin signo
	
	printf("variableShort, como entero %d, \n como caracter %c, \n como flotante %f,\n como entero sin signo %u \n",variableShort, variableShort,variableShort,variableShort);
	printf("variableInt, como entero %d, \n como caracter %c, \n como flotante %f,\n como entero sin signo %u \n",variableInt,variableInt,variableInt,variableInt);
	printf("variableFloat, como entero %d, \n como caracter %c, \n como flotante %f,\n como entero sin signo %u \n",variableFloat, variableFloat,variableFloat,variableFloat);
	
	//la intepretacion es correcta si es acorde al tipo de dato, de lo contrario la interpretacion es incorrecta
	
	
	system("pause");
	
	
	
	return 0;

}


