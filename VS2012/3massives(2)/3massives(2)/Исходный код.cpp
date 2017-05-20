#include <iostream>
#include <time.h>
using namespace std;
void main ()
{
	srand (time (0));
	system ("color 0A");
	setlocale(LC_ALL,"Ukrainian");
	const int n=100;
	int a,b,i,r[n],j,s[n],rs[n];
	cout<<"¬веди довжину 1-го масиву: ";
	cin>>a;
	cout<<"¬веди довжину 2-го масиву: ";
	cin>>b;
	for (int i=0;i<a;i++){
		r[i]=rand()%100;
		cout<<r[i]<<" ";
	}
	cout<<endl;
	for (int j=0;j<b;j++){
		s[j]=rand()%100;
		cout<<s[j]<<" ";
	}
	cout<<endl;
	if(a<b){
		for(i=0;i<a;i++){
			rs[i]=s[i]+r[i];
			cout<<rs[i]<<" ";
		}
			for(j=a;j<b;j++){
				cout<<s[j]<<" ";
		}
		cout<<endl;
	}
	else{
		for(i=0;i<b;i++){
			rs[i]=s[i]+r[i];
			cout<<rs[i]<<" ";
		}
		for(j=b;j<a;j++){
			cout<<r[j]<<" ";
		}
		cout<<endl;
	}
}
