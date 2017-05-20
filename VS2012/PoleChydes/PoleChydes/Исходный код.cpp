#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Ukrainian");
	system("color 0A");
	char c[10],k[10];                  
	bool t=false, help=false; 
	cout<<"Зашифроване слово: ";
	cin>>c;
	for (int i=0; i<strlen(c); i++) 
		k[i]='*'; 
	char s;                             
	while (t==false)                  
	{
		help=false;
		cout<<"Вгадуйте букву: ";
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
				cout<<"Такої букви немає!";
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
	cout<<"Вiтаємо, ви виграли!\n";
}