#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Dish {
	double price;
	int time;
	string name;
	int cate;
};

struct Select {
	int  index;
	int remark;
};

class Menu {

public:
	Menu()
	{
		choose = new Select[10];
		alldishes = new Dish[10];


	}
	~Menu()
	{
		delete []choose;
		delete[]alldishes;
	}

	void DisplayDish()
	{
		cout << "���"<<"\t"<<"����" << "\t" << "�۸� rmb" << "\t" << "�ϲ�ʱ�� min" << "\t" << endl;
		for (int i = 0; i < 10; i++)
			cout << i<<"\t"<<alldishes[i].name << "\t" << alldishes[i].price << "\t" << alldishes[i].time << "\t"<<endl;

		cout << "��ѡ��" << endl;

	}
	void ChooseDish()
	{
		while (1)
		{
			int count = 0;
			int c;
			cout << "��������Ҫѡ��Ĳ˵����: -1 �˳�" << endl;
			cin >> c;
			if (c != -1)
				choose[count].index = c;
			else
				break;

			count++;

		}

		cout << "����ǰ��ѡ�Ĳ˼��ܽ���ȷ��" << endl;

		DisplayChoose();

		cout << "����ǰ��ѡ�Ĳ����ķѵ���ʱ�䣬��ȷ��" << endl;

		cout << CaculateTime();


	}

	void DisplayChoose()
	{
	
	}

	int CaculateTime()
	{
	
	}

	void Remark()
	{
		cout << ".......�����ˣ�����" << endl;
		Remark();
	}


private:
	Dish *alldishes;
	Select * choose;

};