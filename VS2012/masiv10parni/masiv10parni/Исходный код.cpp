#include <iostream>
#include <time.h>
using namespace std;
#pragma warning (disable:4996)
void main()
{
	setlocale(LC_ALL,"Ukrainian");
	system("color 0A");
	const int n=10;
	int ar[n],i=0;
	double b;
	srand(time(NULL));
	for(i=0;i<n;i++){
	ar[i]=rand()%100;
	b=ar[i]%2;
	if(b==0)
	{
	cout<<ar[i]<<" ";
	}
}
}