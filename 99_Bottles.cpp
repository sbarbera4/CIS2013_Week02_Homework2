#include <iostream>
using namespace std;

int main() 
	{
	int bottles = 99;
	
	while ( bottles > 2 )
	{
	cout << bottles << " bottles of beer on the wall," << endl;
	cout << bottles << " bottles of beer." << endl;
	cout << "take one down, pass it around," << endl;
	cout << --bottles << " bottles of beer on the wall." << endl;
	cout << " " << endl;
	}
	
	cout << bottles << " bottles of beer on the wall," << endl;
	cout << bottles << " bottles of beer." << endl;
	cout << "take one down, pass it around," << endl;
	cout << --bottles << " bottle of beer on the wall." << endl;
	cout << " " << endl;
	cout << bottles << " bottle of beer on the wall," << endl;
	cout << bottles << " bottle of beer." << endl;
	cout << "take one down, pass it around," << endl;
	cout << --bottles << " bottles of beer on the wall." << endl;
	
	
	return 0;
}
