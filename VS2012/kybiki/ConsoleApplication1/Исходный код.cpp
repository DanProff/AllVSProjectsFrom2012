#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void kudk(int kubik);
int rez();

void main()
{
	setlocale (LC_ALL,"Ukrainian");
	system ("color 0A");
	srand(time(0));

	cout <<"����i�, �i����� � ������? ������a ��������� �����i: " <<endl;
	cout <<"����� ���, � ���� ���� 5 ����i� �����i� �i����!" <<endl;
	cout <<"������...\n\n" <<endl;

	char kudok;
	int total_lud=0;
	int total_comp=0;

	do
	{
		cout <<"���i����� ��������i��� ����i�? ����� * ��� �����...�����! " <<endl;
		cin >> kudok;
	}
	while (kudok!='*');

	int rez_lud, rez_comp;
	do
	{
		rez_lud=rez();
		cout <<"��� ���������: " <<rez_lud <<endl;

		cout <<"\n����� �..." <<endl;

		rez_comp=rez();
		cout <<"\n�i� ���������: " <<rez_comp <<endl;
	}
	while (rez_lud==rez_comp);

	if (rez_lud>rez_comp)
	{
		cout <<"\n�� ������� ������! " <<endl;
		for (int i=1; i<=5; i++)
		{
			do
			{
				cout <<"�����! (����� *)" <<endl;
				cin >> kudok;
			}
			while (kudok!='*');
			total_lud+=rez();

			total_comp+=rez();

		}
		cout << "��� ��������� ��������� (���� ���i� �� 5 ����i�): "<<total_lud <<endl;
		cout << "\n�i� ��������� ��������� (���� ���i� �� 5 ����i�): "<<total_comp <<endl;
	}
	else
	{
		cout <<"\n���!!! � ����� ������. " <<endl;
		for (int i=1; i<=5; i++)
		{
			total_comp+=rez();

			do
			{
				cout <<"�����! (����� *)" <<endl;
				cin >> kudok;
			}
			while (kudok!='*');
			total_lud+=rez();

		}
		cout << "��� ��������� ��������� (���� ���i� �� 5 ����i�): " <<total_lud <<endl;
		cout << "�i� ��������� ��������� (���� ���i� �� 5 ����i�): " <<total_comp <<endl;
	}

	if (total_lud==total_comp)
	{
		cout <<"\n\n��..�i���!\n\n" <<endl;
	}
	else
	{
		if (total_lud>total_comp)
		{
			cout <<"\n\n�� �������!!! �i���!!!\n\n" <<endl;
		}

		if(total_lud<total_comp)
		{
			cout <<"\n\n� ������! �� i �� ����� :) \n\n" <<endl;
		}
	}

}

void kudk(int kubik)
{
	switch (kubik)
	{
	case 1:
		cout <<"***********" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*    *    *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"***********" <<endl;
		break;
	case 2:
		cout <<"***********" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*    *    *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*    *    *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"***********" <<endl;
		break;
	case 3:
		cout <<"***********" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*  *      *" <<endl;
		cout <<"*    *    *" <<endl;
		cout <<"*      *  *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"***********" <<endl;
		break;
	case 4:
		cout <<"***********" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"***********" <<endl;
		break;
	case 5:
		cout <<"***********" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*    *    *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"***********" <<endl;
		break;
	case 6:
		cout <<"***********" <<endl;
		cout <<"*         *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*  *   *  *" <<endl;
		cout <<"*         *" <<endl;
		cout <<"***********" <<endl;
		break;
	}
}
int rez()
{
	int kubik_1=rand()%5+1;
	kudk(kubik_1);

	int kubik_2=rand()%5+1;
	kudk(kubik_2);

	int rezult;
	rezult=kubik_1+kubik_2;
	cout <<"���������: " <<rezult <<"\n\n";

	return rezult;
}