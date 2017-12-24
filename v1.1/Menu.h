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
		cout << "序号"<<"\t"<<"菜名" << "\t" << "价格 rmb" << "\t" << "上菜时间 min" << "\t" << endl;
		for (int i = 0; i < 10; i++)
			cout << i<<"\t"<<alldishes[i].name << "\t" << alldishes[i].price << "\t" << alldishes[i].time << "\t"<<endl;

		cout << "请选菜" << endl;

	}
	void ChooseDish()
	{
		while (1)
		{
			int count = 0;
			int c;
			cout << "请输入你要选择的菜的序号: -1 退出" << endl;
			cin >> c;
			if (c != -1)
				choose[count].index = c;
			else
				break;

			count++;

		}

		cout << "您当前所选的菜及总金额，请确认" << endl;

		DisplayChoose();

		cout << "您当前所选的菜所耗费的总时间，请确认" << endl;

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
		cout << ".......吃完了，请打分" << endl;
		Remark();
	}


private:
	Dish *alldishes;
	Select * choose;

};