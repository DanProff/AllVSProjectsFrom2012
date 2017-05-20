#include <iostream>
using namespace std;
#pragma warning (disable:4996)
void main()
{
	setlocale(LC_ALL,"Ukrainian");
	system("color 0A");
	const int n=10;
	int ar[n],i=0;
	for(i=0;i<n;i++){
	ar[i]=rand()%100;
	cout<<ar[i]<<" ";
	}
}