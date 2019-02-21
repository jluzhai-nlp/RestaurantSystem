#include <cstring>
#include <iostream>
using namespace std;

class Food
{
	private:
		string Fname;/*名称*/
		double Fprice;/*价格*/
		int Fnum;/*编号*/
	public:
		
		void set(string name,double price,int num);/*获取商品的名称，价格，编号*/
		
		string getName();/*返回食物名称*/
		
		double getPrice();/*返回食物价格*/
		
		void showMessage();/*查看食物的名称和价格*/
		
};
void Food::set(string name=NULL,double price=0,int num=0)/*获取商品的名称，价格，编号*/
{
		Fname=name;
		Fprice=price;
		Fnum=num;
}

string Food::getName()/*返回食物名称*/
{
	return Fname;
}

double Food::getPrice()/*返回食物价格*/
{
	return Fprice;
}
		
void Food::showMessage()/*查看食物的名称和价格*/
{
	cout<<Fname<<Fprice<<"元/份 "<<Fnum<<endl;
}
Food KF[9];/*设置对象*/

