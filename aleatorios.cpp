#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int aleatorio;
	char i;
	srand(time(NULL)); //funcion que cambia la semilla con la que inicia el calculo "aleatorio" la funcion rand. 
	//para asegurar que la semilla siempre es diferente, se usa la funcion time(NULL) que devuelve los sgeundos que han pasado desde 01/01/1970
	for(i=0;i<10;i++)
	{
		aleatorio=rand() %10;    //para obtener numeros aleatorios entre 0 y N. se hace %N+1. En este caso se quiere numero entre 0 y 9 
		printf("%i\n",aleatorio);
	}
	
	
}
