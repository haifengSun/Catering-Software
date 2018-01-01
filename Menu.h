#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Dish {
	int number;//序号
	double price;//价格
	int time;//最短上菜时间
	string name;//菜名
	string cate;//类别：中式套餐；汤类：粥类;汤面类;酒水饮料类
}Dish1, Dish2, Dish3, Dish4, Dish5, Dish6, Dish7, Dish8, Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16,Dish17,Dish18，Dish19, Dish20, Dish21, Dish22, Dish23;

Dish1={1,18.0,20,"黑椒牛肉烩饭","中式套餐"};
Dish2={2,18.0,15,"鸡腿饭套餐","中式套餐"};
Dish3={3,15.0,18,"糖醋排骨饭","中式套餐"};
Dish4={4,15.0,20,"猪脚饭套餐","中式套餐"};
Dish5={5,10.0,15,"台式卤肉饭","中式套餐"};
Dish6={6,8.0,6,"花蛤豆腐汤","汤"};
Dish7={7,12.0,15,"鱼头豆腐汤","汤"};
Dish8={8,15.0,20,"干贝冬瓜汤","汤"};
Dish9={9,15.0,20,"七彩干贝羹","汤"};
Dish10={10,6.0,5,"皮蛋瘦肉粥","粥"};
Dish11={11,7.0,8,"香菇鸡丝粥","粥"};
Dish12={12,8.0,10,"海鲜粥","粥"};
Dish13={13,8.0,10,"香滑田鸡粥","粥"};
Dish14={14,5.0,5,"鸡汁汤面","汤面"};
Dish15={15,8.0,12,"排骨面","汤面"};
Dish16={16,10,10,"海鲜汤面","汤面"};
Dish17={17,12,8,"特色卤面","汤面"};
Dish18={18,12,15,"海鲜乌冬面","汤面"};
Dish19={19,10,1,"哈尔滨禀尊纯生","酒水饮料"};
Dish20={20,7,1,"果粒橙","酒水饮料"};
Dish21={21,8,1,"雪碧（2L）","酒水饮料"};
Dish22={22,8,1,"可乐（2L）","酒水饮料"};
Dish23={23,20,1,"江小白（100mL）","酒水饮料"};

struct Select {
	int  index;
	int remark;//评分
};

class Menu {

public:
	Menu()//初始化
	{
		choose = new Select[];
		alldishes = new Dish[23];


	}
	~Menu()//析构
	{
		delete []choose;
		delete[]alldishes;
	}

	void DisplayDish()
	{
		cout << "序号"<<"\t"<<"类别"<<"\t"<<"菜名" << "\t" << "价格 rmb" << "\t" << "上菜时间 min" << "\t" << endl;
		for (int i = 1; i < 24; i++)
			cout << alldishes[i].number<<"\t"<<alldishes[i].name << "\t" << alldishes[i].price << "\t" << alldishes[i].time << "\t"<<endl;

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
		choose[count]=-1;

		cout << "您当前所选的菜请确认" << endl;

		DisplayChoose();

		cout << "您当前所选的菜所耗费的总时间，请确认" << endl;

		cout << CaculateTime();


	}//选菜

	void DisplayChoose()//所选的菜及总金额
	{
		double SumPrice=0.0;
		cout << "序号"<<"\t"<<"类别"<<"\t"<<"菜名" << "\t" << "价格 rmb" << "\t" << endl;
		for(int i=0;choose[i]!=-1;i++)
		{
			cout<< alldishes[choose[i].index].number<<"\t"<<alldishes[choose[i].index].name << "\t" << alldishes[choose[i].index].price << "\t" <<endl;
			SumPrice+=alldishes[choose[i].index].price;
		}
		cout<<"总消费额为："<<SumPrice<<"\t"<<"请确认"<<endl;
	
	}

	int CaculateTime()
	{
		int SumTime=0;
		for(int i=0;choose[i]!=-1;i++)
			SumTime+= alldishes[choose[i].time;
		return SumTime;

	}

	void Remark()
	{
		cout << "本次消费结束，请打分(1-5)：" << endl;
		int n;
		for(int i=0;choose[i]!=-1;i++)
		{
			cin>>n;
			choose[i].remark=n;
		}
	}


private:
	Dish *alldishes;
	Select * choose;

};