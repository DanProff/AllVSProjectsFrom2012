#include <iostream>
using namespace std;
void main()
{setlocale(LC_ALL, "Ukrainian");
system("color 0A");
float a,b,q,v,n,m,t;
int c,d,r,s,i,w;
cout<<"����i�� �i�� �������: ";
cin>>a;
cout<<"����i�� �i�� �����: ";
cin>>b;
cout<<"����i�� �i���i��� ������i�: ";
cin>>c;
cout<<"����i�� �i���i��� ������: ";
cin>>d;
cout<<"����i�� �i���i��� ���i���: ";
cin>>q;
v=a*c+b*d;
n=q-v;
m=v-q;
t=m/a;
r=t*10; 
s=r%10;
i=r/10;
w=i+1;
if(s>=0){t=w;
}              
if(q>v){
	cout<<"���� �����: "<<n<<"\n";
}
else {if(t<c){cout<<"����������� ����� �� "<<t<<" ������i� �����""\n";
}
}
if (t>c){
	cout<<"����������� ����������� ����������.\n";
}
}