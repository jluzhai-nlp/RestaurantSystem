#include <cstring>
#include <iostream>
using namespace std;

class Food
{
	private:
		string Fname;/*����*/
		double Fprice;/*�۸�*/
		int Fnum;/*���*/
	public:
		
		void set(string name,double price,int num);/*��ȡ��Ʒ�����ƣ��۸񣬱��*/
		
		string getName();/*����ʳ������*/
		
		double getPrice();/*����ʳ��۸�*/
		
		void showMessage();/*�鿴ʳ������ƺͼ۸�*/
		
};
void Food::set(string name=NULL,double price=0,int num=0)/*��ȡ��Ʒ�����ƣ��۸񣬱��*/
{
		Fname=name;
		Fprice=price;
		Fnum=num;
}

string Food::getName()/*����ʳ������*/
{
	return Fname;
}

double Food::getPrice()/*����ʳ��۸�*/
{
	return Fprice;
}
		
void Food::showMessage()/*�鿴ʳ������ƺͼ۸�*/
{
	cout<<Fname<<Fprice<<"Ԫ/�� "<<Fnum<<endl;
}
Food KF[9];/*���ö���*/

