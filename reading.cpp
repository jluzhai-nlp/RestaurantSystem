#include "reading.h"
double reading_price(int x)/*读取第x+1行*/
{
    char a[25],str[25];/*a[ ]显示商品名称;str[ ]暂时存储*/ 
    FILE *fp;/*声明为FILE 类型的指针变量*/ 
    fp=fopen( "食物信息.txt", "r");/*fopen打开文文*/ 
    if(fp==NULL)/*测试是否打开成功*/
    {
		cout<<"文件打开失败"<<endl;
        return -1;
    }
    fgets(str,sizeof(str),fp);/*fgets每次读取一行，读取了sizeof(str)-1个字符*/ 
    while(fgets(str,sizeof(str),fp))
    {
        x--;
        if(x==0)
		{
			strncpy(a,str,sizeof(a));/*将str复制给a*/ 
        }
    }
    fclose(fp);/*释放空间*/
    
	return atof(a);/*将字符转换成浮点型并return*/
   
}
string reading_name(int x)/*读取第x+1行*/
{
	char a[25],str[25];/*a[ ]显示商品名称;str[ ]暂时存储*/ 
    FILE *fp;/*声明为FILE 类型的指针变量*/ 
    fp=fopen( "食物信息.txt", "r");/*fopen打开文件*/ 
    fgets(str,sizeof(str),fp);/*fgets每次读取一行，读取了sizeof(str)-1个字符*/
    while(fgets(str,sizeof(str),fp))
    {
        x--;
        if(x==0)
		{
			strncpy(a,str,sizeof(a));/*将str复制给a*/ 
        }
    }
    fclose(fp);/*释放空间*/
	string b=a; 
    return b; 
}

void change_()/*让客户选择是继续点餐or取消金额or结账*/ 
{
	ifstream read("选项界面.txt");
	char temp[1000]={};
	read.getline(temp,1000,0);
	cout<<temp<<endl;
    read.close();
} 

