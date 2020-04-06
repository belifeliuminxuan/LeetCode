#include <iostream>
using namespace std;
#include <string>

void delStr()
{
	string Str_1, Str_2;
	getline(cin, Str_1);
	getline(cin, Str_2);
	int strlen= Str_1.length()-Str_2.length();
	for (size_t i=0;i<Str_1.length();i++)
	{
		for (size_t j = 0; j < Str_2.length(); j++)
		{
			if (Str_1[i] == Str_2[j])
			{
				for (size_t k = i; k < Str_1.length()&&Str_1[k]!='\0'; k++)
				{
					Str_1[k] = Str_1[k + 1];
				}
			}
		}
	}
	cout << Str_1 << Str_1.length();
}

int main()
{
	delStr();
	return 0;
}