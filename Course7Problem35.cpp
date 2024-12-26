#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter a string:\n";
	getline(cin, UserString);
	return UserString;
}

void PrintEachWord(string  UserString)
{

	short Pos = 0;
	string Delem = " ";
	string Sword ;

	while ((Pos = UserString.find(Delem)) != std::string::npos)
	{

		Sword = UserString.substr(0 , Pos);

		if (Sword != "")
		{
			cout << Sword << endl;
		}

		UserString.erase(0 , Pos + Delem.length());
	}

	if (UserString != "")
	{
		cout << UserString << "\n";
	}
	
}

int main()
{

	PrintEachWord(ReadString());
	
	return 0;
}