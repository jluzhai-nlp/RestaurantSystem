#include "xkchange.h"
#include "food.h"
#include "temps.h"
#include "reading.h"
int Num=0;/*记录客户点的商品数量*/
void time_break()/*跳转等待2秒的函数*/
{
	time_t start,end;
	start=time(NULL);
	cout<<"载入中...";
	do
	{	 
		end=time(NULL);
	}while(difftime(end,start)<2);/*difftime函数返回: 时间差*/
	system("cls");
}

int Order_hamburger()/*汉堡*/
{
	time_break(); 
	ifstream read("KFCtxt文件\\KFC汉堡.txt");/*从txt中读取汉堡界面*/
	char temp[1000]={};/*定义temp临时字符数组再将数据从txt中读取出来*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;
    read.close();
	
	char c;
	cout<<"服务员V3：请输入需要的食物编号："; 
	cin>>c;
	switch(c)
		{
			case'1':
			{
				string s=KF[0].getName();
				double d=KF[0].getPrice();
				array[Num].get_information(s,d,1);/*将商品信息暂时存入array[]*/
				Num++;/*客户点的商品数量+1*/
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'2':
			{
				string s=KF[1].getName();
				double d=KF[1].getPrice();
				array[Num].get_information(s,d,2);
				Num++;
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'3':
			{
				string s=KF[2].getName();
				double d=KF[2].getPrice();
				array[Num].get_information(s,d,3);
				Num++;
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'0':
				time_break();
				Order_(); 
				break;
			default:
				cout<<"服务员V3：好像没有这个选项哦！";
				Order_hamburger();
		}
} 

int Order_snack()/*小吃*/
{
	time_break(); 
	ifstream read("KFCtxt文件\\KFC小吃.txt");/*从txt中读取小吃界面*/
	char temp[1000]={};/*定义temp临时字符数组再将数据从txt中读取出来*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;
	read.close();
	
	char c;
	cout<<"服务员V3：请输入需要的食物编号："<<endl; 
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
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}	
			break;
			case'2':
			{
				string s=KF[4].getName();
				double d=KF[4].getPrice();
				array[Num].get_information(s,d,5);
				Num++;
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'3':
			{
				string s=KF[5].getName();
				double d=KF[5].getPrice();
				array[Num].get_information(s,d,6);
				Num++;
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'0':
				time_break();
				Order_(); 
				break;
			default:
					cout<<"服务员V3：好像没有这个选项哦！";
					Order_snack();
		}
	
} 

int Order_beverage()/*饮料*/
{
	time_break(); 
	ifstream read("KFCtxt文件\\KFC饮料.txt");/*从txt中读取饮料界面*/ 
	char temp[1000]={};/*定义temp临时字符数组再将数据从txt中读取出来*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;
	
	char c;
	cout<<"服务员V3：请输入需要的食物编号："; 
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
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'2':
			{
				string s=KF[7].getName();
				double d=KF[7].getPrice();
				array[Num].get_information(s,d,8);
				Num++;
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'3':
			{
				string s=KF[8].getName();
				double d=KF[8].getPrice();
				array[Num].get_information(s,d,9);
				Num++;
				time_break();
				change_();/*跳转到选项界面*/
				Order_change();/*选择继续点餐or取消商品or结账*/ 
			}
			break;
			case'0':
				time_break();
				Order_(); 
				break;
			default:
				cout<<"服务员V3：好像没有这个选项哦！";
				Order_beverage();
		}
} 

void Order_()/*进入食物分类主界面选择*/
{
	ifstream read("KFCtxt文件\\点餐首页.txt");
	char temp[1000]={};/*定义temp临时字符数组再将数据从txt中读取出来*/
	read.getline(temp,1000,0);
	cout<<temp<<endl;/*将txt数据显示*/ 
	read.close(); 
	char a;
	cout<<"服务员V3：请输入选项编号："; 
	cin>>a;/*客户输入选择编号*/ 
	switch(a)
{
	case'1':Order_hamburger();/*读取汉堡界面*/ 
			break; 
	case'2':Order_snack(); /*读取小吃界面*/ 
			break;
	case'3':Order_beverage();/*读取饮料界面*/ 
			break;
	case'0':time_break();
			jiezhan();
			time_break();
			jiesu();
			break;
	default:
		cout<<"服务员V3：好像没有这个选项哦！请重新输入"<<endl;
		time_break();
		Order_();
}
	
}
void Order_change()/*中间选项*/ 
{
	char a;
	cout<<"请输入选择编号："; 
	cin>>a;/*客户输入选择编号*/ 
	switch(a)
{
	case'1':
		time_break(); 
		Order_();/*继续点餐*/ 
		break; 
	case'2':/*取消一个商品*/ 
		{
			for(int i=0;i<=Num;i++)
			{
				cout<<array[i].return_Name();
			} 
			int m,j,id;/*m记录点，记录输入即将取消的商品编号在array[]中的位置；id:输入即将删除的商品编号*/
			cout<<"服务员V3：请输入要取消的商品编号："<<endl;
			cin>>id;
			for(j=0;j<Num;j++)
			{
				if(array[j].return_Num()==id)
				{
					m=j;/*标记即将取消的商品编号在array[]中的位置*/ 
					for(j=m;j<Num;j++)
					{
						array[j]=array[j+1]; 
					}
					Num--;
					cout<<"服务员V3：取消成功！"<<endl;  
				}
				//if(j==Num)
				else cout<<"服务员V3：您好像没点这个商品！"<<endl; 
			}
			time_break();
			change_();/*跳转到选项界面*/
			Order_change();
		}
		break;
	case'3':
		jiezhan();
		jiesu();  /*结账*/ 
		break;
	default:
		cout<<"服务员V3：好像没有这个选项哦！请重新输入"<<endl;
		time_break();
		change_();/*跳转到选项界面*/
		Order_change();
}

}
void getFood()/*录入食物数据*/
{
	int x,y,z;/*规律读取食物数据x：名称，y：价格，z：数组*/ 
	for(int i=1;i<=9;i++)//i：食物编号 
	{
		x=2*i-1;/*1，3，5，7。。*/ 
		y=2*i;/*2，4，6，8。。*/ 
		z=i-1; /*0，1，2。。*/ 
		KF[z].set(reading_name(x),reading_price(y),i);
	}
}
int jiezhan()/*增加*/ 
{
	int i,j;/*i用于循环显示所点商品的价格和名称，j用于重置存储的商品的临时数组*/
	for(int i=0;i<Num;i++)
	{
		cout<<array[i].return_Name()<<array[i].return_getPrice()<<"元/份"<<endl;
	} 
	double sum=0;
	for(i=0;i<Num;i++) 
	{
		sum=sum+array[i].return_getPrice();
	}
	cout<<"总消费金额为"<<sum<<"元"<<endl;
	for(j=0;j<=Num;j++)/*重置存储的商品的临时数组*/ 
	{
		array[j]=array[j+1];			
	} 
	Num=0;/*重置客户点的商品数量*/
	system("pause");
	system("cls"); 
}
void jiesu()/*增加*/ 
{
	ifstream read("KFCtxt文件\\点餐结束.txt");/*定义temp临时字符数组再将数据从txt中读取出来*/
	char temp[1000]={};
	read.getline(temp,1000,0);
	cout<<temp<<endl;
    read.close();
	getch(); /*当用户按下某个字符时，函数自动读取，无需按回车*/ 
	time_break(); /*跳转等待2秒的函数*/
	Order_();
}

