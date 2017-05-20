#include <iostream>
using namespace std;
void main()
{setlocale(LC_ALL, "Ukrainian");
system("color 0A");
float a,b,q,v,n,m,t;
int c,d,r,s,i,w;
cout<<"¬ведiть цiну журналу: ";
cin>>a;
cout<<"¬ведiть цiну книги: ";
cin>>b;
cout<<"¬ведiть кiлькiсть журналiв: ";
cin>>c;
cout<<"¬ведiть кiлькiсть книжок: ";
cin>>d;
cout<<"¬ведiть кiлькiсть готiвки: ";
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
	cout<<"¬аша решта: "<<n<<"\n";
}
else {if(t<c){cout<<"–екомендуЇмо вз€ти на "<<t<<" журналiв менше""\n";
}
}
if (t>c){
	cout<<"–екомендуЇмо перегл€нути замовленн€.\n";
}
}