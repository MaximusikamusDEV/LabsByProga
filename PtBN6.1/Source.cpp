#include <iostream>
#include <cstring>
#include <conio.h>
#include <fstream>

using namespace std;


const int sizename = 50, studsize = 50, gendsize = 2;

struct Students
{
	char name[sizename];
	int age;
	int course;
	char gender[gendsize];
	int mark;
};

void enter(int& n, int& size)
{
	cout << "Enter a course: ";
	cin >> n;
	cout << endl;
	cout << "Enter a num of people: ";
	cin >> size;
	cout << endl;
}


void enter_str(Students st[], int n)
{
	fstream fin;
	fin.open("Info.txt");
	int i = 0;
	while (!fin.eof())
	{
		fin >> st[i].name;
		fin >> st[i].age;
		fin >> st[i].course;
		fin >> st[i].gender;
		fin >> st[i].mark;
		i++;
	}
	fin.close();
}

void out_str(Students st[], int n)
{
	ofstream fout;
	fout.open("Base.txt");

	for (int i = 0; i < n; i++)
	{
		fout << i + 1 << " Name: ";
		fout << st[i].name << endl;

		fout << i + 1 << " Age: ";
		fout << st[i].age << endl;

		fout << i + 1 << " Course: ";
		fout << st[i].course << endl;

		fout << i + 1 << " Gender: ";
		fout << st[i].gender << endl;

		fout << i + 1 << " Mark: ";
		fout << st[i].mark << endl;
		fout << endl;
	}
	fout.close();
}

void srb(Students st[], int course, int size)
{
	double sr = 0;
	double num = 0;

	for (int i = 0; i < size; i++)
	{
		if (st[i].course == course)
		{
			sr += st[i].mark;
			num++;
		}
	}

	ofstream fout;
	fout.open("Ans.txt");

	if (num == 0)
	{
		fout << "We havent people at this course";
		fout.close();
		return;
	}
	fout << "Your course students average score: " << sr / num;
	fout.close();
}


int main()
{
	Students Student[studsize];
	int Course, size;
	enter(Course, size);
	enter_str(Student, size);
	out_str(Student, size);
	srb(Student, Course, size);







	return 0;
}
