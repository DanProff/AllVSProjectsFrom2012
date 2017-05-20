#include <iostream>
#include <time.h>
using namespace std;
void main(){
	setlocale(LC_ALL,"Ukrainian");
	system ("color 0A");
	int r,k=5,i=0,suma=0;
	cout<<"Кiлькiсть ходiв (в межах вiд 1 до 20): ";
	cin>>r;
	const int n=20;
	int ar[n];
	ar[i]=k;
	suma=suma+k;
	for 
		(int i=1;i<r;i++)
	{
		k=k*2;
		ar[i]=k;
		suma=suma+k;
	}
	cout<<suma<<" шашечок з'їв Горинич..\n";
} 
