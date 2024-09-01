#include <iostream>
using namespace std;

int main() {
	int n1;
	double n2 = 7.9;
	float n3 = 57.4f;
	char n4 = '@';
	std::cout << "Enter A Value = ";
	std::cin >> n1;
	float n5 = (n2 * n3) / n1;
	std::cout << "n5 is = " << n5 << std::endl;
	double n6,n7;
	std::cout << "Enter Two Doubles = ";
	std::cin >> n6 >> n7;
	std::cout << "n6 is = " << n6 << endl << "n7 is = " << n7;
	

	return 0;
}