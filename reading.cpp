#include "reading.h"
double reading_price(int x)/*��ȡ��x+1��*/
{
    char a[25],str[25];/*a[ ]��ʾ��Ʒ����;str[ ]��ʱ�洢*/ 
    FILE *fp;/*����ΪFILE ���͵�ָ�����*/ 
    fp=fopen( "ʳ����Ϣ.txt", "r");/*fopen������*/ 
    if(fp==NULL)/*�����Ƿ�򿪳ɹ�*/
    {
		cout<<"�ļ���ʧ��"<<endl;
        return -1;
    }
    fgets(str,sizeof(str),fp);/*fgetsÿ�ζ�ȡһ�У���ȡ��sizeof(str)-1���ַ�*/ 
    while(fgets(str,sizeof(str),fp))
    {
        x--;
        if(x==0)
		{
			strncpy(a,str,sizeof(a));/*��str���Ƹ�a*/ 
        }
    }
    fclose(fp);/*�ͷſռ�*/
    
	return atof(a);/*���ַ�ת���ɸ����Ͳ�return*/
   
}
string reading_name(int x)/*��ȡ��x+1��*/
{
	char a[25],str[25];/*a[ ]��ʾ��Ʒ����;str[ ]��ʱ�洢*/ 
    FILE *fp;/*����ΪFILE ���͵�ָ�����*/ 
    fp=fopen( "ʳ����Ϣ.txt", "r");/*fopen���ļ�*/ 
    fgets(str,sizeof(str),fp);/*fgetsÿ�ζ�ȡһ�У���ȡ��sizeof(str)-1���ַ�*/
    while(fgets(str,sizeof(str),fp))
    {
        x--;
        if(x==0)
		{
			strncpy(a,str,sizeof(a));/*��str���Ƹ�a*/ 
        }
    }
    fclose(fp);/*�ͷſռ�*/
	string b=a; 
    return b; 
}

void change_()/*�ÿͻ�ѡ���Ǽ������orȡ�����or����*/ 
{
	ifstream read("ѡ�����.txt");
	char temp[1000]={};
	read.getline(temp,1000,0);
	cout<<temp<<endl;
    read.close();
} 

