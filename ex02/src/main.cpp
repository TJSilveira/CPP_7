#include "../includes/Array.hpp"

void create_empty_array(void)
{
	Array<int> a;
	Array<char> b;
	Array<double> c;
	Array<std::string> d;

	std::cout << "This is the size of the array a: "<< a.size() << "\n";
	std::cout << "This is the size of the array b: "<< b.size() << "\n";
	std::cout << "This is the size of the array c: "<< c.size() << "\n";
	std::cout << "This is the size of the array d: "<< d.size() << "\n";
}

void create_int_array(void)
{
	Array<int> a(10);

	std::cout << a.size() << "\n";
	for (size_t i = 0; i < a.size(); i++)
		a[i] = static_cast<int> (i*12);
	for (size_t i = 0; i < a.size(); i++)
		std::cout << "["<< i << "]: "<<a[i] << "\n";
}

void create_char_array(void)
{
	Array<char> a(10);

	std::cout << a.size() << "\n";
	for (size_t i = 0; i < a.size(); i++)
		a[i] = static_cast<char>('a' + i);
	for (size_t i = 0; i < a.size(); i++)
		std::cout << "["<< i << "]: "<<a[i] << "\n";
}

void create_2_arrays(void)
{
	Array<int> a(10);

	std::cout << a.size() << "\n";
	for (size_t i = 0; i < a.size(); i++)
		a[i] = static_cast<char>('a' + i);
	for (size_t i = 0; i < a.size(); i++)
		std::cout << "Array a ["<< i << "]: "<<a[i] << "\n";

	Array<int> b = a;

	for (size_t i = 0; i < b.size(); i++)
		std::cout << "Array b ["<< i << "]: "<<b[i] << "\n";
	for (size_t i = 0; i < b.size(); i++)
		b[i] += 5; 
	for (size_t i = 0; i < b.size(); i++)
		std::cout << "Array b after += 5 ["<< i << "]: "<<b[i] << "\n";
	for (size_t i = 0; i < a.size(); i++)
		std::cout << "Array a ["<< i << "]: "<<a[i] << "\n";
}

int main( void )
{
	create_empty_array();
	create_int_array();
	create_char_array();
	create_2_arrays();
	return (0);
}