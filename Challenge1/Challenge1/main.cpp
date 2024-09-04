#include <iostream>

/*

	HE HECHO EL EJERCICIO ALGO DIFERENTE, EN VEZ DE QUE CUANDO PONGAS UN NUMERO TE DIGA:
	Amazing!! That's my favorite number too!
	No really!!, 24 is my favorite number!
	EN MI CASO TIENES QUE ADIVINAR EL NUMERO CORRECTO PARA QUE TE DIGA SI ES MI NUMERO FAVORITO O NO

Section 4 Challenge
Create a C++ program that asks the user for their favorite number between 1 and 100 then read this number from the console.

Suppose the user enters 24.

Then display the following to the console:
Amazing!! That's my favorite number too!
No really!!, 24 is my favorite number!

Below are 2 sample runs of the program:
Enter your favorite number between 1 and 100: 24
Amazing!! That's my favorite number too!
No really!!, 24 is my favorite number!
*/


int main() {
	int favnum = 24;
	int num;

	std::cout << "Adivina mi numero favorito, es un numero entre el 1 y el 100" << std::endl;
	std::cin >> num;
	if (num < 1 || num > 100)
	{
		std::cout << "Tiene que ser un numero entre el 1 y el 100!" << std::endl;
		return 0;
	}
	if (num == favnum)
	{
		std::cout << "Correcto, mi numero favorito es 24!" << std::endl;
		return 0;
	}
	std::cout << "Mi numero favorito no es el " << num << std::endl;

	return 0;
}