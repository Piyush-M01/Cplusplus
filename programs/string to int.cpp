// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string s = "38272299275037314530";

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value 12345 and stream
	// it to the integer x
	long long x = 0;
	geek >> x;

	// Now the variable x holds the value 12345
	cout << "Value of x : " << x;
	//cout<<to_string(stol(s));
	return 0;
}
