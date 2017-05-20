#include <iostream>
#pragma warning (disable:4996)
using namespace std;
void main()
{setlocale (LC_ALL, "Ukrainian");
system("color 0A");
int a,q=0,b,c;
cout<<"¬ведiть початок дiапазону: ";
cin>>a;
cout<<"¬ведiть кiнець дiaпазону: ";
cin>>b;
c=a%2;
if (c==0){
	a++;
	do {
		q=q+a;
		a=a+2;
	}while (a<=b);
	cout<<q<<"\n";
}
else { 
	do {
		q=q+a;
		a=a+2;
	}while (a<=b);
	cout<<q<<"\n";
}
}