#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Ukrainian");
	system("color 0A");
	char c[10],k[10];                  
	bool t=false, help=false; 
	cout<<"����������� �����: ";
	cin>>c;
	for (int i=0; i<strlen(c); i++) 
		k[i]='*'; 
	char s;                             
	while (t==false)                  
	{
		help=false;
		cout<<"�������� �����: ";
		cin>>s;
		for (int i=0; i<strlen(c); i++) 

			if (c[i]==s)
			{
				k[i]=s;                          
				help=true; 
			}
			if (help==true)                       
			{
				cout<<endl;
			}
			else {
				cout<<"���� ����� ����!";
				cout<<endl;
			}
			for (int i=0; i<strlen(c); i++)
				cout<<k[i];
			cout<<endl;
			for (int i=0; i<strlen(c); i++) 
			{                             
				if (k[i]=='*')
				{
					t=false;
					break;
				}
				else
					t=true;
				break;
			}
			cout<<endl;
	}
	cout<<"�i����, �� �������!\n";
}