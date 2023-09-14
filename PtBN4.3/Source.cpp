#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int MAX = 80;
	char st[MAX] = "";
	//char ch;
	int num = 0;

	fstream fin;

	fin.open("Input.txt");

	if (!fin.is_open())
	{
		cout << "Mistake with opening file";
		return 0;
	}
	else
		cout << "Your input file opened" << endl;

	/*while (fin.get(ch))
	{
		st[num] = ch;
		num++;
	}*/

	while (!fin.eof())
	{
		fin.getline(st, MAX);
	}

	fin.close();


	char words[MAX] = "";
	char oneword[MAX] = "";

	int kolgl = 0, kolsogl = 0;
	int sizewords = 0;

	//cin.getline(st, MAX);



	int size = strlen(st);

	st[size] = ' ';

	for (int i = 0; i <= size; i++)
	{
		if (
			st[i] == ' ' ||
			st[i] == ',' ||
			st[i] == '-' ||
			st[i] == ';' ||
			st[i] == ':' ||
			st[i] == '.' ||
			st[i] == '!' ||
			st[i] == '?' ||
			st[i] == '(' ||
			st[i] == ')'
			)
		{
			if (kolgl > kolsogl)
			{
				for (int j = 0; j < kolgl + kolsogl; j++)
				{
					words[sizewords + j] = oneword[j];
					oneword[j] = '\0';
				}

				words[sizewords + kolgl + kolsogl] = ' ';

				sizewords += kolgl + kolsogl + 1;


				kolgl = 0;
				kolsogl = 0;

			}
			else
			{
				for (int j = 0; j < kolgl + kolsogl; j++)
				{
					oneword[j] = '\0';
				}

				kolgl = 0;
				kolsogl = 0;

			}
		}
		else {


			oneword[kolgl + kolsogl] = st[i];

			

			if (st[i] == 'a' ||
				st[i] == 'e' ||
				st[i] == 'i' ||
				st[i] == 'o' ||
				st[i] == 'u' ||
				st[i] == 'y'
				)
				kolgl++;
			else
				kolsogl++;
		}

	}


	ofstream fout;

	fout.open("Output.txt");

	if (!fout.is_open())
	{
		cout << "Problem with your file";
		return 0;
	}
	else
		cout << "Your output file opened" << endl;

	fout << words;

	fout.close();




	/*for (int i = 0; i < sizewords; i++)
		cout << words[i];*/

	cout << "Program done!";
	
	return 0;
}

