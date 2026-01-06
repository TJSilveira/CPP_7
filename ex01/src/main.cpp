#include "../includes/iter.hpp"

template<typename T>
void	display(T& elem)
{
	std::cout << "Variable's value is: " << elem << std::endl;
}

template<typename T>
void	add_one(T& elem)
{
	elem += 1;
}

int main( void )
{
	const int	intArray1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "Displaying int Array that CANNOT be changed\n" << std::endl;
	iter(intArray1, 10, display<const int>);

	int	intArray2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "Displaying int Array\n" << std::endl;
	::iter(intArray2, 10, display<int>);

	std::cout << "\nAdding one to each element\n" << std::endl;
	::iter(intArray2, 10, add_one<int>);

	std::cout << "\nDisplaying int Array with add_one values\n" << std::endl;
	::iter(intArray2, 10, display<int>);

	char	charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

	std::cout << "Displaying char Array\n" << std::endl;
	iter(charArray, 10, display<char>);

	std::cout << "\nAdding one to each element\n" << std::endl;
	::iter(charArray, 10, add_one<char>);

	std::cout << "\nDisplaying char Array with add_one values\n" << std::endl;
	::iter(charArray, 10, display<char>);

	return (0);
}