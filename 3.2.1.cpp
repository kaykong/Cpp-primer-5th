#include<iostream>

using std:: cin;
using std:: endl;
using std:: cout;
using std:: string;

int main ()
{
	string line;
	while ( getline(cin, line) )
		cout << line << endl;
	return 0;	
} 
