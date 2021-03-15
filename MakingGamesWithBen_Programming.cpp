#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;
int main()
{

	default_random_engine randomGenerator(time(0));
	uniform_int_distribution<int> diceroll (1,6);

	std::cout << "I am rolling a " << diceroll(randomGenerator) << endl;
	std::cout << "I am rolling a " << diceroll(randomGenerator) << endl;
	std::cout << "I am rolling a " << diceroll(randomGenerator) << endl;
	std::cout << "I am rolling a " << diceroll(randomGenerator) << endl;
	std::cout << "I am rolling a " << diceroll(randomGenerator) << endl;

	system("Pause");
	return 0;
}

