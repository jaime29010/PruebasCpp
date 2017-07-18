// Pruebas2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

char* text_sample();

int main()
{
	std::cout << typeid("asd").name() << std::endl;
	std::cout << text_sample() << std::endl;
    return 0;
}

