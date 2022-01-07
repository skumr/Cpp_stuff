#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(string str1, int i);

int main()
{

	Print("aaaaa", "bbbb");


	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;

}

void Print(string str1, string str2)
{
	cout << str1 << endl;
	cout << str2 << endl;

}

void Print(string str1, int i)
{

	cout << "My string: " << str1 << endl;
	cout << "My int: " << i << endl;
}