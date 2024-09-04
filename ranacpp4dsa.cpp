#include <iostream>
using namespace std;

int main() {
	int n1;
	double n2 = 7.9;
	float n3 = 57.4f;
	char n4 = '@';
	double n8 = 9.4;
	n2 = n8;
	std::cout << "Enter A Value = ";
	std::cin >> n1;
	float n5 = (n2 * n3) / n1;
	std::cout << "n5 is = " << n5 << std::endl;
	double n6,n7;
	std::cout << "Enter Two Doubles = ";
	std::cin >> n6 >> n7;
	std::cout << "n6 is = " << n6 << endl << "n7 is = " << n7;
	std::cout << endl << (n6 + n7);
//  double%double = error
// expresion must have integral or unscoped enum type occurs when i apply mod to doubles or floats 
	int n9 = n6, n10 = n7; //type conversion
	std::cout << n9 % n10;
	n6 += n7;
	float n11 = 9.8 , n12 = 3.14;
	int n13 = (int)n11; //better method for t.c
	int n14 = (int)n12;
	cout << n13 << n14;

	//TUTORIAL PROJECTS

	// FLOAT MULTIPLICATION
	cout << endl << "FLOAT MULTIPLICATION!!" << endl;
	float a, b, c;
	cout << "Enter A Float = ";
	cin >> a;
	cout << "And = ";
	cin >> b;
	c = a * b;
	cout << "The Product Of Two Floats Is = " << c << endl;

	//FIND SIZE OF VAR
	cout << "Size of int = " << sizeof(int) << " bytes" << endl;

	//SWAPPING VARS
	int n15 = 10;
	int n16 = 20,temp;
	cout << "First Number = " << n15 << endl << "Second Number = " << n16 << endl;
	temp = n15;
	n15 = n16;
	n16 = temp;
	cout << "Swapped First Number = " << n15 << endl << "Swapped Second Number = " << n16 << endl;
	

	return 0;
}