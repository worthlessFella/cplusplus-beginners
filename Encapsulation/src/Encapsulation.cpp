//============================================================================
// Name        : Encapsulation.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Frog {
private:
	string number;

private:
	string getName() { return number; }

public:
	Frog(string name): number(name) {}

	void info() { cout << "My name is: " << getName() << endl; }
};

int main() {

	Frog frog("Freddy");

	frog.info();

	return 0;
}
