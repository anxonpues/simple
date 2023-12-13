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
		std::cin >> answer;
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
	
		string pkte{ "press any key to continue" };
		string pkteb{ "" };
		string pkte32{ "" };
		int pktel = pkte.length();
		for (int i = 0; i < pktel; i++) {
			pkteb.push_back('\b');
			pkte32.push_back(' ');
		}
		
		cout << pkte;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
	
		cout << pkteb;
		cout << pkte32;
	}
	
	std::cin.get();
}