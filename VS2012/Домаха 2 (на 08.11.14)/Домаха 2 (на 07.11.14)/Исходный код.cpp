#include <iostream>                                       
#pragma warning (disable:4996)
using namespace std;
void main()
{setlocale (LC_ALL, "Ukrainian");
system("color 0A");
int s,q,n=50,m=-20;
double t,i;
i=m;
while(i<=n){
	t=i/3;
	s=t*10;
	q=s%10;
	if(q==0)
	{
		cout<<i<<"\n";
	}
	_sleep (100);
	i++;
}
}

