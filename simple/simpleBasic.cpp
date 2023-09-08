#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int a{ 0 };
	int b = 1;
	int& ra = a;
	int* pb = &b;
	string chars = "carrier";
	string deltha = "data";
	string eko{"endpoint"};
	cout << "a    = " << a        << "\n";
	cout << "ra   = " << ra       << "\n"; 
	cout << "pb   = " << pb       << "\n";
	cout << "b    = " << b        << "\n";
	cout << "*pb  = " << *pb      << "\n";
	cout << "chars  \t" << chars  << "\n";
	cout << "deltha \t" << deltha << "\n";
	cout << "eko    \t" << eko    << "\n";

	bool cont = true;
	while (cont) {
		string answer{};
		cout << "\n\n\n Enter the try word \t: ";
		cin >> answer;
		if (answer == chars)
			a += 2;
		cout << "a    = " << a << "\n";
		cout << "b    = " << b << "\n";
		if (answer == deltha)
			b *= 3;
		else
			b *= 5;
		cout << "a    = " << a << "\n";
		cout << "b    = " << b << "\n";
		if (answer == eko) {
			a += 8;
			b *= 2;
			cont = false;
		}
		else {
			a += 4;
			b *= 10;
		}
		cout << "a    = " << a << "\n";
		cout << "b    = " << b << "\n";

		cin.get();
	}
	
	cin.get();

}