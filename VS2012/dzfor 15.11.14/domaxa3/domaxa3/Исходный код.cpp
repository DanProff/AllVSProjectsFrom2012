#include <iostream>
#pragma warning (disable:4996)
using namespace std;
void main()
{setlocale (LC_ALL, "Ukrainian");
system("color 0A");
int n,f,r,v,q=1,s=1;
cout<<"Введiть число n: ";
cin>>n;
if (n<0){
	cout<<"Помилка! Попробуйте ввести iнше число!\n";
}
else {
	r=n*10;
	v=r%10;
	if (v==0){
		do { 
			s=s*q;
			q++;
		}while (q<=n);
		cout<<"n!="<<s<<"\n";
	}
}
}