// Pruebas.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

int last = 0;

struct BookInfoStruct {
	int id;
	int type;
};

BookInfoStruct getBookInfoStruct() {
	BookInfoStruct* res = new BookInfoStruct();
	res->id = ++last;
	res->type = rand();
	return *res;
}

int main()
{
	BookInfoStruct x = getBookInfoStruct();
	BookInfoStruct y = getBookInfoStruct();
	BookInfoStruct z = getBookInfoStruct();

	std::cout << x.id << std::endl;
	std::cout << x.type << std::endl;

	std::cout << y.id << std::endl;
	std::cout << y.type << std::endl;

	std::cout << z.id << std::endl;
	std::cout << z.type << std::endl;

	std::cout << "Pointer stuff from this point" << std::endl;

	BookInfoStruct* ptr = &x;
	std::cout << ptr->id << std::endl;
	std::cout << (*ptr).id << std::endl;
	
	ptr->id = -1;

	std::cout << x.id << std::endl;
	return 0;
}