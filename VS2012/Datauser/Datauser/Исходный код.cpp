#include <iostream>
#pragma warning(disable:4996)
#include <time.h>
using namespace std;
void main()
{	
	setlocale (LC_ALL, "Ukrainian");
	system("color 0A");
	int a,b,c,d,x,y,z,i;
	cout<<"����i�� �i� ������ ����������: ";
	cin>>a;
	cout<<"����i�� �i���� ������ ����������: ";
	cin>>b;
	cout<<"����i�� ���� ������ ����������: ";
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
		cout<<"�� ����� ���i��� �� - �����i�"<<endl;
	}
	if(b==2){
		cout<<"�� ����� ���i��� �� - �����i�"<<endl;
	}
	if(b==3){
		cout<<"�� ����� ���i��� �� - ����"<<endl;
	}
	if(b==4){
		cout<<"�� ����� ���i��� �� - ����"<<endl;
	}
	if(b==5){
		cout<<"�� ����� ���i��� �� - ������"<<endl;
	}
	if(b==6){
		cout<<"�� ����� ���i��� �� - ��������"<<endl;
	}
	if(b==7){
		cout<<"�� ����� ���i��� �� - ���"<<endl;
	}
	if(b==8){
		cout<<"�� ����� ���i��� �� - ���"<<endl;
	}
	if(b==9){
		cout<<"�� ����� ���i��� �� - �i��"<<endl;
	}
	if(b==10){
		cout<<"�� ����� ���i��� �� - ������"<<endl;
	}
	if(b==11){
		cout<<"�� ����� ���i��� �� - �����i��"<<endl;
	}
	if(b==12){
		cout<<"�� ����� ���i��� �� - ���i����"<<endl;
	}
	cout<<"��� "<<x<<" ���i�"<<endl;
	cout<<"��� "<<y<<" �i���i�"<<endl;
	cout<<"��� "<<z<<" ��i�"<<endl;
}
