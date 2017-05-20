#include <iostream>
#include <time.h>
using namespace std;
void main () {
	srand (time (0));
	system ("color 0A");
	setlocale(LC_ALL,"Ukrainian");
	const int x=20, y=20;
	int a,b,br[x][y],i,j;
	cout<<"¬веди к≥льк≥сть р€дк≥в матриц≥ (в≥д 1 до 20): ";
	cin>>a;
	cout<<"¬веди к≥льк≥сть стовпчик≥в матриц≥ (в≥д 1 до 20): ";
	cin>>b;
	for(j=0;j<a;j++){
		for(i=0;i<b;i++){
			br[i][j]=rand()%100;
			cout<<br[i][j]<<" ";
		}
		cout<<endl;
	}
}