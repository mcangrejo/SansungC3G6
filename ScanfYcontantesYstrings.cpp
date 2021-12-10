/*Scanf, constantes y Strings
realizado por: Martha Cano  */


#include <stdio.h>    
#include <stdlib.h>
#include <math.h>

#define pi 3.1415926  //definicion de una constante

int main()
{
    int miInt=456;
    float miFlotante=4.563;
    float radio=0, area; //se pueden declarar varias variables del mismo tipo de dato en una misma linea, separandolas por comas
    //las variables se pueden inicializar, pero tambien se pueden dejar sin inicializar
    char nombre[]={"Martha Lucia"}; //String - arreglo de caracteres sin limitacion de espacio 
    char nombreJugador[100]={0};
    char apellidosJugador[100]={0};
    char busqueda[50]={0};
	char comand[100]={0};
	
	
	nombre[9]='\0';  //ingresa un simbolo null (\0) en la posicion 9, reemplazando la C
	
	printf("miInt tiene el valor %d y se encuentra en la direccion %d \n", miInt, &miInt );
    printf("miFlotante tiene el valor %f y se encuentra en la direccion %d \n", miFlotante, &miFlotante );
    
    printf("Hola soy %s, ingresa tu nombre:\n", nombre);
    scanf("%s",nombreJugador);  //al hacer scanf f para almacenar en un arreglo, no se usa el &. scanf con %f solo sirve para una palabra
    
    printf("ingresa tus apellidos: \n");
    getchar();  //este getchar "desecha" el \n del printf anterior para que el scanf no se "confunda"
    scanf("%[^\n]",apellidosJugador);   //con el especificador %[^\n] se pueden capturar varias palabras hasta tener un enter  
    
    printf("Hola %s %s, Ingresa el valor del radio: \n", nombreJugador, apellidosJugador); //imprime hasta encontrar un Null 
    
	scanf("%f", &radio); //con la funcion scanf capturo un valor ingresado por el usuario. & se usa para dar la direccion de la variable
    printf("el valor ingresado es %f \n", radio);
    
    area= pi * pow(radio,2);  //usamos la contante pi definidia al inicio del codigo
    printf("el area es %f \n", area);
    
    printf("ingresa tu busqueda de youtube separando las palabras con un +: \n");
    scanf("%s",busqueda);
    
    sprintf(comand,"start https://www.youtube.com/results?search_query=%s",busqueda); //arma el comando para enviarlo al sistema, usando la busqueda del usuario
    
    system(comand);
        
    system("pause");
	
	return 0;

}


