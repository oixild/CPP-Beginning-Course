#include <iostream>


static void arrays()
{
	// Para inicializar una array: TipoDeElemento NombreDeLaArray [Numero de los elementos] {elementos inicializados}

	int				testScore [5] { 100, 95, 99, 87, 88 }; // init all elements
	int				highScorePerLevel [10] { 3, 5 }; // init 3, 5 and remaining to 0
	int				anotherArray[] { 1, 2, 3, 4, 5 }; // size automatically calculated
	double			hiTemperatures [5] { 0 }; // init all to zero 
}

static void multiDimensionalArrays() 
{
	// Para inicializar una array: TipoDeElemento NombreDeLaArray [dim1_size][dim2_size]
	// Se puede ver como una hoja de excel/hoja de calculos
	
	const int	rows { 3 };
	const int	cols { 4 };
	int			movieRating[rows][cols]
	{
		{0, 4, 7, 5},
		{2, 6, 3, 5},
		{1, 9, 8, 5}
	}; // Esto es una manera mas visual para entender como funciona
	std::cout << "\nEl contenido del elemento escogido es: " << movieRating[2][2] << std::endl;
}

int main()
{
	std::cout << "Arrays And Vectors\n\n" << std::endl;
	

	std::cout << "Arrays:" << std::endl;

	char vocales[]{ 'a', 'e', 'i', 'o', 'u' };
	std::cout << "\nLa primera vocal es: " << vocales[0] << std::endl;
	std::cout << "\nLa ultima vocal es: " << vocales[4] << std::endl;

	double hiTemps[]{ 90.1, 89.8, 55.4, 43.2 };
	std::cout << "\nThe first high temperature is: " << hiTemps[0] << std::endl;

	hiTemps[0] = 100.7; // cambiamos el valor del primer elemento

	std::cout << "The first high temperature is now: " << hiTemps[0] << std::endl;

	multiDimensionalArrays();


	std::cout << "\n\nVectors:" << std::endl;

	return 0;
}