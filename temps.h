#include <iostream>
#include <cstring>
using namespace std;

class Temps/*��ʱ�洢��Ʒ��Ϣ����ȡ�����*/
{
	private:
		string Name;/*����*/
		double Price;/*�۸�*/
		int Num;/*���*/
	public:
		
		void get_information(string name,double price,int num);/*��ȡ��Ʒ�����ƣ��۸񣬱��*/
		
		string return_Name();/*����ʳ������*/
		
		double return_getPrice();/*����ʳ��۸�*/
		
		int return_Num();/*���ر��*/ 
		
};
void Temps::get_information(string name=NULL,double price=0,int num=0)/*��ʱ��ȡ��Ʒ�����ƣ��۸񣬱��*/
{
		Name=name;
		Price=price;
		Num=num;
}

string Temps::return_Name()/*����ʳ������*/
{
	return Name;
}

double Temps::return_getPrice()/*����ʳ��۸�*/
{
	return Price;
}

int Temps::return_Num()
{
	return Num;
}
Temps array[20];/*�洢����Ʒ����ʱ����*/

