#include <iostream>


int main() 
{
	int num;

	std::cout << "Escribe un numero entre el 1 y el 100" << std::endl;
	std::cin >> num;
	if (num < 1 || num > 100)
	{
		std::cout << "Tiene que ser un numero entre el 1 y el 100!" << std::endl;
		return 0;
	}
	std::cout << "Increible! Has escogido mi numero favorito" << std::endl;

	return 0;
}