#include <iostream>
#include <string.h>
#include <cctype>
#include <sstream>
#include <fstream>

using namespace std;

int prov = 0;

int spec[1000];

const int N = 100;

char pass[N];
char passincode[N];

int a[100000];

stringstream cont;

int tomorze(char st, int numb)
{
	if (st == 'a') return 410;
	if (st == 'b') return 14445;                      //.== 4
	if (st == 'c') return 14143;                     //_==1
	if (st == 'd') return 1442;                      //last number is random but <= 5
	if (st == 'e') return 45;
	if (st == 'f') return 44143;
	if (st == 'g') return 1140;
	if (st == 'h') return 44442;
	if (st == 'i') return 441;
	if (st == 'j') return 41111;
	if (st == 'k') return 1410;
	if (st == 'l') return 41444;
	if (st == 'm') return 113;
	if (st == 'n') return 142;
	if (st == 'o') return 1115;
	if (st == 'p') return 41143;
	if (st == 'q') return 11410;
	if (st == 'r') return 4141;
	if (st == 's') return 4443;
	if (st == 't') return 14;
	if (st == 'u') return 4412;
	if (st == 'v') return 44411;
	if (st == 'w') return 4114;
	if (st == 'x') return 14411;
	if (st == 'y') return 14113;
	if (st == 'z') return 11440;

	if (st == '1') return 144447;                                   //.==1
	if (st == '2') return 114448;                                      //_==4
	if (st == '3') return 111449;                                            //last symb is random but > then 5
	if (st == '4') return 111146;
	if (st == '5') return 111117;
	if (st == '6') return 411119;
	if (st == '7') return 441116;
	if (st == '8') return 444119;
	if (st == '9') return 444417;
	if (st == '0') return 444446;

	spec[numb] = 1;

	return st - 6;                                 //if symb == 0 that means that symbol is special and it's equal is this symbol number -6
}

char frommorzewithoutspec(int num)
{
	//char out;

	cont.clear();
	cont << num;
	cont >> passincode;

	int count = 0;
	bool flag = 0;

	int size = 0;

	size = strlen(passincode);

	if (passincode[0] == '4')
		flag = 1;

	if (passincode[size-1] > '5' && passincode[size-1] <= '9')
	{

		for (int i = 0; i < size; i++)
			if (passincode[i] == '1') count++;


		if (count == 1 && flag == 0)
			return '1';
		else
			if (count == 1)
				return '9';

		if (count == 2 && flag == 0)
			return '2';
		else
			if (count == 2)
				return '8';

		if (count == 3 && flag == 0)
			return '3';
		else
			if (count == 3)
				return '7';

		if (count == 4 && flag == 0)
			return '4';
		else
			if (count == 4)
				return '6';

		if (flag == 1) return '0';

	
		return '5';
	}
	
	count = 0;

	int countsp = 0;

	//passincode[size-1] = '\0';

	//return passincode[size-1];

	num /= 10;

	if (num == 41) return 'a';
	if (num == 1444) return 'b';
	if (num == 1414) return 'c';
	if (num == 144) return 'd';
	if (num == 4) return 'e';
	if (num == 4414) return 'f';
	if (num == 114) return 'g';
	if (num == 4444) return 'h';
	if (num == 44) return 'i';
	if (num == 4111) return 'k';
	if (num == 4144) return 'l';
	if (num == 11) return 'm';
	if (num == 14) return 'n';
	if (num == 111) return 'o';
	if (num == 4114) return 'p';
	if (num == 1141) return 'q';
	if (num == 414) return 'r';
	if (num == 444) return 's';
	if (num == 1) return 't';
	if (num == 441) return 'u';
	if (num == 4441) return 'v';
	if (num == 411) return 'w';
	if (num == 1441) return 'x';
	if (num == 1411) return 'y';
	if (num == 1144) return 'z';

	//return passincode[0] + 6;
}

char frommorzespec(int num)
{
	return char(num + 6);
}


int main()
{
	int size;
	int flag = 0;
	int k = 0;

	//cin >> pass;

	fstream fin;

	fin.open("Input.txt");

	if (!fin.is_open())
	{
		cout << "Mistake with opening the Input file" << endl;
		return 0;
	}
	else
	{
		cout << "Your Input file was opened" << endl;
	}

	while (!fin.eof())
	{
		fin.getline(pass, N);
	}

	fin.close();


	ofstream fout;

	fout.open("Output.txt");

	if (!fout.is_open())
	{
		cout << "Mistake with opening the Output file" << endl;;
		return 0;
	}
	else
	{
		cout << "Your Output file was opened" << endl;
	}

	size = strlen(pass);

	if (size < 8)
	{
		cout << "Your password size is too low";
		return 0;
	}

	fout << "Your password: " << endl << pass << endl;

	int fllett = 0, flspec = 0, flnum = 0;

	for (int i = 0; i < size; i++)
	{


		if (isalpha(pass[i]) != 0)
			fllett = 1;
		else
			if (isalnum(pass[i]) != 0)
				flnum = 1;
			else 
				flspec = 1;

		if (fllett == 1 && flspec == 1 && flnum == 1)
		{
			flag = 1;

			for (int j = 0; j < size; j++)
			 a[size-1-j] = tomorze(pass[j], size-1-j);

			fout << "Your encrypted password:" << endl;

			for (int j = 0; j < size; j++)   // Out of encrypted password
			fout << a[j];

			
			fout << endl;

			fout << "Your decrypted passwrod: " << endl;

			for (int j = size-1; j >= 0; j--)
			{

				if (spec[j] != 1)
					fout << frommorzewithoutspec(a[j]);
				else
					fout << frommorzespec(a[j]);

			}

	        cout << "Programm done";

			return 0;

		}

	}

	if (flag == 0)
	{
		cout << "Your password haven't a letter, number or a spec symbol. Please try again";
	}
	

	return 0;
}