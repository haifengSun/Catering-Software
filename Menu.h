#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Dish {
	int number;//���
	double price;//�۸�
	int time;//����ϲ�ʱ��
	string name;//����
	string cate;//�����ʽ�ײͣ����ࣺ����;������;��ˮ������
}Dish1, Dish2, Dish3, Dish4, Dish5, Dish6, Dish7, Dish8, Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16,Dish17,Dish18��Dish19, Dish20, Dish21, Dish22, Dish23;

Dish1={1,18.0,20,"�ڽ�ţ��ⷹ","��ʽ�ײ�"};
Dish2={2,18.0,15,"���ȷ��ײ�","��ʽ�ײ�"};
Dish3={3,15.0,18,"�Ǵ��ŹǷ�","��ʽ�ײ�"};
Dish4={4,15.0,20,"��ŷ��ײ�","��ʽ�ײ�"};
Dish5={5,10.0,15,"̨ʽ±�ⷹ","��ʽ�ײ�"};
Dish6={6,8.0,6,"���򶹸���","��"};
Dish7={7,12.0,15,"��ͷ������","��"};
Dish8={8,15.0,20,"�ɱ�������","��"};
Dish9={9,15.0,20,"�߲ʸɱ���","��"};
Dish10={10,6.0,5,"Ƥ��������","��"};
Dish11={11,7.0,8,"�㹽��˿��","��"};
Dish12={12,8.0,10,"������","��"};
Dish13={13,8.0,10,"�㻬�Ｆ��","��"};
Dish14={14,5.0,5,"��֭����","����"};
Dish15={15,8.0,12,"�Ź���","����"};
Dish16={16,10,10,"��������","����"};
Dish17={17,12,8,"��ɫ±��","����"};
Dish18={18,12,15,"�����ڶ���","����"};
Dish19={19,10,1,"������������","��ˮ����"};
Dish20={20,7,1,"������","��ˮ����"};
Dish21={21,8,1,"ѩ�̣�2L��","��ˮ����"};
Dish22={22,8,1,"���֣�2L��","��ˮ����"};
Dish23={23,20,1,"��С�ף�100mL��","��ˮ����"};

struct Select {
	int  index;
	int remark;//����
};

class Menu {

public:
	Menu()//��ʼ��
	{
		choose = new Select[];
		alldishes = new Dish[23];


	}
	~Menu()//����
	{
		delete []choose;
		delete[]alldishes;
	}

	void DisplayDish()
	{
		cout << "���"<<"\t"<<"���"<<"\t"<<"����" << "\t" << "�۸� rmb" << "\t" << "�ϲ�ʱ�� min" << "\t" << endl;
		for (int i = 1; i < 24; i++)
			cout << alldishes[i].number<<"\t"<<alldishes[i].name << "\t" << alldishes[i].price << "\t" << alldishes[i].time << "\t"<<endl;

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
		choose[count]=-1;

		cout << "����ǰ��ѡ�Ĳ���ȷ��" << endl;

		DisplayChoose();

		cout << "����ǰ��ѡ�Ĳ����ķѵ���ʱ�䣬��ȷ��" << endl;

		cout << CaculateTime();


	}//ѡ��

	void DisplayChoose()//��ѡ�Ĳ˼��ܽ��
	{
		double SumPrice=0.0;
		cout << "���"<<"\t"<<"���"<<"\t"<<"����" << "\t" << "�۸� rmb" << "\t" << endl;
		for(int i=0;choose[i]!=-1;i++)
		{
			cout<< alldishes[choose[i].index].number<<"\t"<<alldishes[choose[i].index].name << "\t" << alldishes[choose[i].index].price << "\t" <<endl;
			SumPrice+=alldishes[choose[i].index].price;
		}
		cout<<"�����Ѷ�Ϊ��"<<SumPrice<<"\t"<<"��ȷ��"<<endl;
	
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
		cout << "�������ѽ���������(1-5)��" << endl;
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