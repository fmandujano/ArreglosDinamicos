// ArreglosDinamicos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void formaCmasmas(int n)
{
	int* arreglo = new int[n];
	for (int i = 0; i < n; i++)
	{
		arreglo[i] = i;
		std::cout << "arreglo[" << i << "] = " << i << std::endl;
	}

}

void formaC(int  n)
{
	//crear arreglo de apuntadores de tamanio n
	int * arreglo = (int*)malloc(sizeof(int) * n);


	for (int i = 0; i < n; i++)
	{
		arreglo[i] = i;
		std::cout << "arregloC[" << i << "] = " << arreglo[ i ] << std::endl;
	}
	puts("");

	*arreglo = 100;
	*(arreglo + 5) = 200;

	for (int i = 0; i < n; i++)
	{
		std::cout << "arregloC[" << i << "] = " << arreglo[ i ] << std::endl;
	}


}


int main()
{
	//formaCmasmas(21);
	formaC(10);



	getchar();
    return 0;
}

