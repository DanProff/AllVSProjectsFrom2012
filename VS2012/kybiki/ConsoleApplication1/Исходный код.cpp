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

	cout <<"Привiт, зiграємо в кубики? Правилa достатньо простi: " <<endl;
	cout <<"Виграє той, у кого сума 5 кидкiв кубикiв бiльша!" <<endl;
	cout <<"Поїхали...\n\n" <<endl;

	char kudok;
	int total_lud=0;
	int total_comp=0;

	do
	{
		cout <<"Розiграємо почерговiсть кидкiв? Тисни * для кидка...Кидай! " <<endl;
		cin >> kudok;
	}
	while (kudok!='*');

	int rez_lud, rez_comp;
	do
	{
		rez_lud=rez();
		cout <<"Ваш результат: " <<rez_lud <<endl;

		cout <<"\nТепер я..." <<endl;

		rez_comp=rez();
		cout <<"\nМiй результат: " <<rez_comp <<endl;
	}
	while (rez_lud==rez_comp);

	if (rez_lud>rez_comp)
	{
		cout <<"\nТи починаєш першим! " <<endl;
		for (int i=1; i<=5; i++)
		{
			do
			{
				cout <<"Кидай! (тисни *)" <<endl;
				cin >> kudok;
			}
			while (kudok!='*');
			total_lud+=rez();

			total_comp+=rez();

		}
		cout << "Ваш загальний результат (сума балiв за 5 кидкiв): "<<total_lud <<endl;
		cout << "\nМiй загальний результат (сума балiв за 5 кидкiв): "<<total_comp <<endl;
	}
	else
	{
		cout <<"\nУра!!! Я кидаю першим. " <<endl;
		for (int i=1; i<=5; i++)
		{
			total_comp+=rez();

			do
			{
				cout <<"Кидай! (тисни *)" <<endl;
				cin >> kudok;
			}
			while (kudok!='*');
			total_lud+=rez();

		}
		cout << "Ваш загальний результат (сума балiв за 5 кидкiв): " <<total_lud <<endl;
		cout << "Мiй загальний результат (сума балiв за 5 кидкiв): " <<total_comp <<endl;
	}

	if (total_lud==total_comp)
	{
		cout <<"\n\nХм..нiчия!\n\n" <<endl;
	}
	else
	{
		if (total_lud>total_comp)
		{
			cout <<"\n\nВи виграли!!! Вiтаю!!!\n\n" <<endl;
		}

		if(total_lud<total_comp)
		{
			cout <<"\n\nЯ виграв! Це i не дивно :) \n\n" <<endl;
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
	cout <<"Результат: " <<rezult <<"\n\n";

	return rezult;
}