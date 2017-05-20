#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"Ukrainian");
    int a,b,c,d,e,r,t,y,u;
    cout << "enter your number: ";
    cin >> a;
    c=a%2;
    y=a/10;
    d=y%10;
    b=a/100;
    e=a%10;
    r=d+b+e;
    if ((999>=a)&&(a>=100)){
	}
    if((b>d)&&(e>d)&&(b>e))
    {
        cout << b <<">"<<d;
    }
    else if((b>e)&&(d>e)&&(b>d)){
        cout << b <<">"<<e;
    }
    else if((e>b)&&(e>d)&&(d>b)){
        cout << e <<">"<<b;
    }
	}