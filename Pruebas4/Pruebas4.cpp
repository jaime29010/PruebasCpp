// Pruebas4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

void info(int* ptr)
{
	std::cout << "Value: " << *ptr << std::endl;
	std::cout << "Pointer: " << ptr << std::endl;
	std::cout << std::endl;
}

int main()
{
	int a = 5; //initialization of first pointer
	int* ptr = &a;
	info(ptr);

	int* b = ptr; //copy pointer
	int** c = &ptr; //get pointer to pointer

	int d = 10; //initialization of second pointer
	int* e = &d;

	*c = e; //setting second pointer to pointer of pointer
	info(ptr);

	*c = b; //setting pointer of pointer back to b
	info(ptr);

    return 0;
}

