#include <iostream>
#pragma warning (disable:4996)
#include <time.h>
using namespace std;
void main ()
{
	setlocale(LC_ALL,"Ukrainian");
	system("color 0A");
	srand (time(0));
	int a=rand()%10,b;

	do{		
		system("cls");
		cout<<"� ������� ����� ���?\n";
		cin>>b;
		if(b==a){
			cout<<"������, �� ������!\n";
		}
		else if(b<a){
			cout<<"�� ����� ����� �i����!\n";}
		else if(b>a){
			cout<<"�� ����� ����� ������!\n";}
		_sleep(1500);
	}while (1);


}