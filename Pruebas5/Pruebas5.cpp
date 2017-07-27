// Pruebas5.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << sizeof(uint32_t) << endl; //4 bytes (32 bits)
	void* buf = malloc(sizeof(uint32_t));
	*(uint32_t *)buf = 0;
	cout << *(uint32_t *)buf << endl;
	return 0;
}

