#include "xkchange.h"
#include "food.h"
#include "temps.h"
#include "reading.h"
int Num=0;/*��¼�ͻ������Ʒ����*/
void time_break()/*��ת�ȴ�2��ĺ���*/
{
	time_t start,end;
	start=time(NULL);
	cout<<"������...";
	do
	{	 
		end=time(NULL);
	}while(difftime(end,start)<2);/*difftime��������: ʱ���*/
	system("cls");
}

int Order_hamburger()/*����*/
{
	time_break(); 
	ifstream read("KFCtxt�ļ�\\KFC����.txt");/*��txt�ж�ȡ��������*/
	char temp[1000]={};/*����temp��ʱ�ַ������ٽ����ݴ�txt�ж�ȡ����*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;
    read.close();
	
	char c;
	cout<<"����ԱV3����������Ҫ��ʳ���ţ�"; 
	cin>>c;
	switch(c)
		{
			case'1':
			{
				string s=KF[0].getName();
				double d=KF[0].getPrice();
				array[Num].get_information(s,d,1);/*����Ʒ��Ϣ��ʱ����array[]*/
				Num++;/*�ͻ������Ʒ����+1*/
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'2':
			{
				string s=KF[1].getName();
				double d=KF[1].getPrice();
				array[Num].get_information(s,d,2);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'3':
			{
				string s=KF[2].getName();
				double d=KF[2].getPrice();
				array[Num].get_information(s,d,3);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'0':
				time_break();
				Order_(); 
				break;
			default:
				cout<<"����ԱV3������û�����ѡ��Ŷ��";
				Order_hamburger();
		}
} 

int Order_snack()/*С��*/
{
	time_break(); 
	ifstream read("KFCtxt�ļ�\\KFCС��.txt");/*��txt�ж�ȡС�Խ���*/
	char temp[1000]={};/*����temp��ʱ�ַ������ٽ����ݴ�txt�ж�ȡ����*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;
	read.close();
	
	char c;
	cout<<"����ԱV3����������Ҫ��ʳ���ţ�"<<endl; 
	cin>>c;
	switch(c)
		{
			case'1':
			{
				string s=KF[3].getName();
				double d=KF[3].getPrice();
				array[Num].get_information(s,d,4);
				Num++;
				time_break(); 
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}	
			break;
			case'2':
			{
				string s=KF[4].getName();
				double d=KF[4].getPrice();
				array[Num].get_information(s,d,5);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'3':
			{
				string s=KF[5].getName();
				double d=KF[5].getPrice();
				array[Num].get_information(s,d,6);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'0':
				time_break();
				Order_(); 
				break;
			default:
					cout<<"����ԱV3������û�����ѡ��Ŷ��";
					Order_snack();
		}
	
} 

int Order_beverage()/*����*/
{
	time_break(); 
	ifstream read("KFCtxt�ļ�\\KFC����.txt");/*��txt�ж�ȡ���Ͻ���*/ 
	char temp[1000]={};/*����temp��ʱ�ַ������ٽ����ݴ�txt�ж�ȡ����*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;
	
	char c;
	cout<<"����ԱV3����������Ҫ��ʳ���ţ�"; 
	cin>>c;
	switch(c)
		{
			case'1':
			{
				string s=KF[6].getName();
				double d=KF[6].getPrice();
				array[Num].get_information(s,d,7);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'2':
			{
				string s=KF[7].getName();
				double d=KF[7].getPrice();
				array[Num].get_information(s,d,8);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'3':
			{
				string s=KF[8].getName();
				double d=KF[8].getPrice();
				array[Num].get_information(s,d,9);
				Num++;
				time_break();
				change_();/*��ת��ѡ�����*/
				Order_change();/*ѡ��������orȡ����Ʒor����*/ 
			}
			break;
			case'0':
				time_break();
				Order_(); 
				break;
			default:
				cout<<"����ԱV3������û�����ѡ��Ŷ��";
				Order_beverage();
		}
} 

void Order_()/*����ʳ�����������ѡ��*/
{
	ifstream read("KFCtxt�ļ�\\�����ҳ.txt");
	char temp[1000]={};/*����temp��ʱ�ַ������ٽ����ݴ�txt�ж�ȡ����*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;/*��txt������ʾ*/ 
	read.close(); 
	char a;
	cout<<"����ԱV3��������ѡ���ţ�"; 
	cin>>a;/*�ͻ�����ѡ����*/ 
	switch(a)
{
	case'1':Order_hamburger();/*��ȡ��������*/ 
			break; 
	case'2':Order_snack(); /*��ȡС�Խ���*/ 
			break;
	case'3':Order_beverage();/*��ȡ���Ͻ���*/ 
			break;
	case'0':time_break();
			jiezhan();
			time_break();
			jiesu();
			break;
	default:
		cout<<"����ԱV3������û�����ѡ��Ŷ������������"<<endl;
		time_break();
		Order_();
}
	
}
void Order_change()/*�м�ѡ��*/ 
{
	char a;
	cout<<"������ѡ���ţ�"; 
	cin>>a;/*�ͻ�����ѡ����*/ 
	switch(a)
{
	case'1':
		time_break(); 
		Order_();/*�������*/ 
		break; 
	case'2':/*ȡ��һ����Ʒ*/ 
		{
			for(int i=0;i<=Num;i++)
			{
				cout<<array[i].return_Name();
			} 
			int m,j,id;/*m��¼�㣬��¼���뼴��ȡ������Ʒ�����array[]�е�λ�ã�id:���뼴��ɾ������Ʒ���*/
			cout<<"����ԱV3��������Ҫȡ������Ʒ��ţ�"<<endl;
			cin>>id;
			for(j=0;j<Num;j++)
			{
				if(array[j].return_Num()==id)
				{
					m=j;/*��Ǽ���ȡ������Ʒ�����array[]�е�λ��*/ 
					for(j=m;j<Num;j++)
					{
						array[j]=array[j+1]; 
					}
					Num--;
					cout<<"����ԱV3��ȡ���ɹ���"<<endl;  
				}
				//if(j==Num)
				else cout<<"����ԱV3��������û�������Ʒ��"<<endl; 
			}
			time_break();
			change_();/*��ת��ѡ�����*/
			Order_change();
		}
		break;
	case'3':
		jiezhan();
		jiesu();  /*����*/ 
		break;
	default:
		cout<<"����ԱV3������û�����ѡ��Ŷ������������"<<endl;
		time_break();
		change_();/*��ת��ѡ�����*/
		Order_change();
}

}
void getFood()/*¼��ʳ������*/
{
	int x,y,z;/*���ɶ�ȡʳ������x�����ƣ�y���۸�z������*/ 
	for(int i=1;i<=9;i++)//i��ʳ���� 
	{
		x=2*i-1;/*1��3��5��7����*/ 
		y=2*i;/*2��4��6��8����*/ 
		z=i-1; /*0��1��2����*/ 
		KF[z].set(reading_name(x),reading_price(y),i);
	}
}
int jiezhan()/*����*/ 
{
	int i,j;/*i����ѭ����ʾ������Ʒ�ļ۸�����ƣ�j�������ô洢����Ʒ����ʱ����*/
	for(int i=0;i<Num;i++)
	{
		cout<<array[i].return_Name()<<array[i].return_getPrice()<<"Ԫ/��"<<endl;
	} 
	double sum=0;
	for(i=0;i<Num;i++) 
	{
		sum=sum+array[i].return_getPrice();
	}
	cout<<"�����ѽ��Ϊ"<<sum<<"Ԫ"<<endl;
	for(j=0;j<=Num;j++)/*���ô洢����Ʒ����ʱ����*/ 
	{
		array[j]=array[j+1];			
	} 
	Num=0;/*���ÿͻ������Ʒ����*/
	system("pause");
	system("cls"); 
}
void jiesu()/*����*/ 
{
	ifstream read("KFCtxt�ļ�\\��ͽ���.txt");/*����temp��ʱ�ַ������ٽ����ݴ�txt�ж�ȡ����*/
	char temp[1000]={};
	read.getline(temp,1000,0);
	cout<<temp<<endl;
    read.close();
	getch(); /*���û�����ĳ���ַ�ʱ�������Զ���ȡ�����谴�س�*/ 
	time_break(); /*��ת�ȴ�2��ĺ���*/
	Order_();
}

