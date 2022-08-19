#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	system("color 04");
	char b=' ';char d[33]={'9','.','.','.','8','.','.','.','7','.','.','.','6','.','.','.','5','.','.','.','3','.','.','.','2','.','.','.','1'};
	cout << "\n\n\n\t\t\t\tLoading....";
	cout <<"\n\n\n"<<"\t\t\t\t\t";
		//cout<<d;
		cout<<"\a\r"<<"\t\t\t\t\t";
	for(int i=0 ; i<=32 ; i++)
	{
		cout<<d[i];
		Sleep(100);
	}
	system("pause>0");
	return 0;
}
