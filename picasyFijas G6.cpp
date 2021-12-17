#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //Esta libreria se necesita para el calculo de los aleatorios

int clave[3]={0}, usuario[3]={0};
short int intentos=0, picas=0, fijas=0;

void obtenerclave(void);  //prototipo de una funci[on. C lo exige. La presentacion en sociedad de la funcion
void verificarfijas(void); 
void verificarpicas(void);

int main()
{
   obtenerclave();	//paso 1
   while(fijas!=3)  //paso 2
   {
        printf("Ingrese tres cifras diferentes, separadas por un enter: \n");  //paso 2a
        scanf("%i%i%i",&usuario[0],&usuario[1],&usuario[2]); //paso 2b, ojo: los %i no deben tener espacios entre ellos
        system("cls");  //esta instruccion limpia la pantalla
        system("color 75"); //esta instruccion cambia el color
		verificarfijas(); //paso 2c
        verificarpicas(); //paso 2d
        intentos++; // paso 2e oprador de incremento. suma 1 a la variable
        printf("El numero ingresado es:%i%i%i \n",usuario[0],usuario[1],usuario[2]); //paso agregado durante el codigo
        printf("Picas: %i  Fijas:%i  Intentos:%i\n",picas,fijas,intentos); //paso 2f
        
        if(intentos==10)  //paso 2g
        {
        	printf("Lo siento has llegado al limite de intentos \n");
        	break;   //se rompe el bucle while a pesar de que fijas sigue siendo diferente de 3
		}
    }
	if(fijas==3)  //paso 4. Se pasó al paso 3 por facilidad de codificacion
	{
		printf("felicitaciones has ganado en %i \n", intentos);
	}		
	else    //paso 3. Se pasó al 4 por facilidad
	{
		printf("has perdido \n");
	}

	system("pause");
	return 1;
}

void obtenerclave()
{
	char i;
	srand(time(NULL));
	for(i=0;i<3;i++)
	{
		clave[i]=rand()%10;
		if(i==1)
		{
			while(clave[1]==clave[0])
			{
				clave[1]=rand()%10;
			}
		}
		if(i==2)
		{
			while((clave[2]==clave[1])||(clave[2]==clave[0])) //  or a la antigua es ||
			{
				clave[2]=rand()%10;
			}
		}
		
	}
	printf("%i%i%i\n",clave[0],clave[1],clave[2]);
	return;
}

void verificarfijas()
{
	char j;
	fijas=0; //se debe inciializar fijas al llamar la funcion para evitar que se acumulen de los turnos anteriores 
	for(j=0;j<3;j++)
	{
		if(usuario[j]==clave[j])
		{
			fijas+=1;
		}
	}
	return;
}

void verificarpicas()
{
	char u,c;
	picas=0;   //se debe inicializar al llamar la funcion para evitar que se acumulen picas de los turnos anteriores
	for(u=0;u<3;u++)
	{
		for(c=0;c<3;c++) //el for anidado permite recorrer el arrgleo de usuario y compararlo contra cada posicion del arreglo clave
		{
			if((usuario[u]==clave[c]) && (u!=c))
			{
				picas++;
			}
		}
	}
	
	return;
}
