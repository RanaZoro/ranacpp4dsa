#include <iostream>
int main() {
	int n1;
	double n2 = 7.9;
	float n3 = 57.4f;
	char n4 = '@';
	std::cout << "Enter A Value = ";
	std::cin >> n1;
	float n5 = (n2 * n3) / n1;
	std::cout << "n5 is = " << n5 << std::endl;

	return 0;
}