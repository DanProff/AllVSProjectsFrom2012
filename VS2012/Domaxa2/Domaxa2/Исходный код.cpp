#include <iostream>
using namespace std;
void main()
{setlocale (LC_ALL, "Ukrainian");
system("color 0A");
float a;
int b,c,q,v;
cout<<"¬ведiть число: ";
cin>>a;
b=a*10;
c=b%10;
q=b/10;
v=q+1;
if(c>=0&&c<=4){
	cout<<q<<"\n";
}
else {cout<<v<<"\n";
}
}
