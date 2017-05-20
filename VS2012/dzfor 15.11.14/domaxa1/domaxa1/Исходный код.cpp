#include <iostream>
using namespace std;
void main()
{setlocale(LC_ALL, "Ukrainian");
system ("color 0A");
int a,b,c,i=0;
cout<<"Який символ вивести?\n";
cout<<"1- *\n";
cout<<"2- +\n";
cout<<"3- -\n";
cin>>a;
cout<<"Скiльки має бути символiв?\n";
cin>>b;
cout<<"В стовпчик чи в рядок?\n";
cout<<"1- Стовпчик\n";
cout<<"2- Рядок\n";
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