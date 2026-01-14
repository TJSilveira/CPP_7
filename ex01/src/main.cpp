#include "../includes/iter.hpp"

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template< typename T >
void print( T & x ) { std::cout << x << std::endl; return; }


template<typename T>
void	add_one(T& elem)
{
	elem += 1;
}

int main( void )
{
	const int	intArray1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "Displaying int Array that CANNOT be changed\n" << std::endl;
	iter(intArray1, 10, print);

	int	intArray2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "Displaying int Array\n" << std::endl;
	iter(intArray2, 10, print);

	std::cout << "\nAdding one to each element\n" << std::endl;
	iter(intArray2, 10, add_one);

	std::cout << "\nDisplaying int Array with add_one values\n" << std::endl;
	iter(intArray2, 10, print);

	char	charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

	std::cout << "Displaying char Array\n" << std::endl;
	iter(charArray, 10, print);

	std::cout << "\nAdding one to each element\n" << std::endl;
	iter(charArray, 10, add_one);

	std::cout << "\nDisplaying char Array with add_one values\n" << std::endl;
	iter(charArray, 10, print);

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print);
	iter( tab2, 5, print);
	return 0;

	return (0);
}