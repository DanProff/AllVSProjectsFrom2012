#include <iostream>
#include <time.h>
using namespace std;
void main () {
	srand (time (0));
	system ("color 0A");
	setlocale(LC_ALL,"Ukrainian");
	const int n=100;
	int fin[n], m,sum=0,k,temp=-555,g,j=0,i=0;
	do{
		cout<<"����� ����� ���i���: ";
		cin>>m;
		cout<<endl;
		if (m<1||m>100){
			system ("cls");
			cout<<"����� �� ���, � ���� ��i �i�i ����!"<<endl;
		}
	}while (m<1||m>100);
	for (int i=0;i<m;i++){
		fin[i]=rand()%100;
		cout<<fin[i]<<" ";
	}
	int min=0;
	min=fin[0];
	for (int i=0; i<m; i++){
		if (fin[i]>min){
			min=fin[i];
			k=i;
		}
		sum=sum+fin[i];
	}
	cout<<"����i���� �����: "<<min<<" � "<<k+1<<" ������� "<<endl;
	cout<<"���� ��i� �����: "<<sum<<endl;
	cout<<"��� ����� ������?: ";
	cin>>temp;
	int t=0;
	for(int i=0;i<m;i++){
		g=i+1;
		if(temp==fin[i]){
			t=1;
			cout<<temp<<"-� �����i� "<<g<<endl;
		}
	}
	if(t==0){
		cout<<"Error \n";
	}
}
