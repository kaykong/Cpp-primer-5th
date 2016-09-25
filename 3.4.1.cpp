#include<iostream>

using std:: cin;
using std:: endl;
using std:: cout;
using std:: string;

int main ()
{
	string s1, s2;
	cin >> s1 >> s2;
	if( s1.size() == s2.size() )
		cout << "Á½×Ö·û´®µÈ³¤" << endl;
	else
	{
		if ( s1.size() > s2.size() )
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}
	return 0;	
} 
