#include <iostream>
#include <cstring>
using namespace std;

class Temps/*临时存储商品信息方便取消金额*/
{
	private:
		string Name;/*名称*/
		double Price;/*价格*/
		int Num;/*编号*/
	public:
		
		void get_information(string name,double price,int num);/*获取商品的名称，价格，编号*/
		
		string return_Name();/*返回食物名称*/
		
		double return_getPrice();/*返回食物价格*/
		
		int return_Num();/*返回编号*/ 
		
};
void Temps::get_information(string name=NULL,double price=0,int num=0)/*临时获取商品的名称，价格，编号*/
{
		Name=name;
		Price=price;
		Num=num;
}

string Temps::return_Name()/*返回食物名称*/
{
	return Name;
}

double Temps::return_getPrice()/*返回食物价格*/
{
	return Price;
}

int Temps::return_Num()
{
	return Num;
}
Temps array[20];/*存储的商品的临时数组*/

