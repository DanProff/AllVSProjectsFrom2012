#include <iostream>
#include <time.h>
using namespace std;
void main () {
	srand (time (0));
	system ("color 0A");
	setlocale(LC_ALL,"Ukrainian");
	const int n=100;
	int r[n],m,i,ind,a;
	do{
		cout<<"¬веди число комiрок: ";
		cin>>m;
		cout<<endl;
		if (m<1||m>100){
			system ("cls");
			cout<<"¬веди ще раз, у тебе двi лiвi руки!"<<endl;
		}
	}while (m<1||m>100);
	for (i=0;i<m;i++){
		r[i]=rand()%100;
		cout<<r[i]<<" ";
	}
	cout<<endl;
	do{
		ind=0;
		for (i=0;i<m-1;i++){
			if(r[i]>r[i+1]){
				a=r[i];
				r[i]=r[i+1];
				r[i+1]=a;
				ind=1;
			}
			//cout<<r[i]<<" ";
		}
		//cout<<r[m-1]<<" "<<endl;
	}while(ind!=0);
	for(i=0;i<m;i++){
		cout<<r[i]<<" ";
	}
	cout<<endl;
}