#include <iostream>
#include <string>
using namespace std;

string trimme(string s)
{
	string resultat = "";
	int anfangplus = 0 ;
	int endplus = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s.at(i) != '+')
		{
			break;
		}
		anfangplus++;
	}

	for (int i = s.size()-1; i >=0; i--)
	{
		if (s.at(i) != '+')
		{
			break;
		}
		endplus++;
	}

	for (int i = anfangplus; i < s.size()-endplus; i++)
	{
		resultat += s.at(i);
	}
	return resultat;
}

int main() {
	string s = "";          
	cout << "Bitte geben Sie die Textzeile ein: ? ";     
	getline(cin, s);          
	cout << "Vorher: " << s << endl;     
	cout << "Nachher: " << trimme(s) << endl;

	system("PAUSE");     
	return 0;
}