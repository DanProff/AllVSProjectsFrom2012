#include <iostream>
using namespace std;
void main()
{setlocale(LC_ALL, "Ukrainian");
system ("color 0A");
int a,b,c,i=0;
cout<<"���� ������ �������?\n";
cout<<"1- *\n";
cout<<"2- +\n";
cout<<"3- -\n";
cin>>a;
cout<<"��i���� �� ���� ������i�?\n";
cin>>b;
cout<<"� �������� �� � �����?\n";
cout<<"1- ��������\n";
cout<<"2- �����\n";
cin>>c;
if (a==1&&c==2){
	do {
		cout<<"*";
		i++;
	}while (i<b);
}
if (a==1&&c==1){
	do {
		cout<<"*\n";
		i++;
	}while (i<b);
}
if (a==2&&c==2){
	do {
		cout<<"+";
		i++;
	}while (i<b);
}
if (a==2&&c==1){
	do {
		cout<<"+\n";
		i++;
	}while (i<b);
}
if (a==3&&c==2){
	do {
		cout<<"-";
		i++;
	}while (i<b);
}
if (a==3&&c==1){
	do {
		cout<<"-\n";
		i++;
	}while (i<b);
}
cout<<"\n";
}