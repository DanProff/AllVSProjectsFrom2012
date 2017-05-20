#include <iostream>                     
using namespace std;
void main()
{setlocale(LC_ALL, "Ukrainian");
 int a,b,c,d,e,f;
 cin>>a;
 if((a>=100)&&(a<=999)){
 b=a/100;
 cout<<b<<"\n";
 c=a/10;
 d=c%10;
 cout<<d<<"\n";
 e=a%10;
 cout<<e<<"\n";
 }
if ((a>=10)&&(a<=100)){
	 cout<<"Це число - двохзначне""\n";
 }
 b=a%2;
if (b==0)
{
	  cout<<"Парне""\n";
}
else {
	  cout<<"Не парне""\n";
		
}
}