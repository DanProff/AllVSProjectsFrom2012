#include <iostream>
#pragma warning(disable:4996)
#include <time.h>
using namespace std;
void main()
{	
	setlocale (LC_ALL, "Ukrainian");
	system("color 0A");
	int a,b,c,d,x,y,z,i;
	cout<<"Введiть рiк вашого народження: ";
	cin>>a;
	cout<<"Введiть мiсяць вашого народження: ";
	cin>>b;
	cout<<"Введiть день вашого народження: ";
	cin>>c;
	x=2014-a;
	y=12-b;
	if(b==4||6||9||11){
		z=31-c;
	}
	else{
		z=30-c;
	}
	for(i=0;i<4;i++){
		cout<<"Processing..";
		_sleep (500);
		system ("cls");
	}
	if(b==1){
		cout<<"По знаку зодiаку ви - Козерiг"<<endl;
	}
	if(b==2){
		cout<<"По знаку зодiаку ви - Водолiй"<<endl;
	}
	if(b==3){
		cout<<"По знаку зодiаку ви - Риби"<<endl;
	}
	if(b==4){
		cout<<"По знаку зодiаку ви - Овен"<<endl;
	}
	if(b==5){
		cout<<"По знаку зодiаку ви - Телець"<<endl;
	}
	if(b==6){
		cout<<"По знаку зодiаку ви - Близнята"<<endl;
	}
	if(b==7){
		cout<<"По знаку зодiаку ви - Рак"<<endl;
	}
	if(b==8){
		cout<<"По знаку зодiаку ви - Лев"<<endl;
	}
	if(b==9){
		cout<<"По знаку зодiаку ви - Дiва"<<endl;
	}
	if(b==10){
		cout<<"По знаку зодiаку ви - Терези"<<endl;
	}
	if(b==11){
		cout<<"По знаку зодiаку ви - Скорпiон"<<endl;
	}
	if(b==12){
		cout<<"По знаку зодiаку ви - Стрiлець"<<endl;
	}
	cout<<"Вам "<<x<<" рокiв"<<endl;
	cout<<"Вам "<<y<<" мiсяцiв"<<endl;
	cout<<"Вам "<<z<<" днiв"<<endl;
}
