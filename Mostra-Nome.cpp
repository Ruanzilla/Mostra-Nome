#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cout << "Digite o seu nome: ";
	getline(cin, input);
	cout << "Boas vindas " << input << endl;
}