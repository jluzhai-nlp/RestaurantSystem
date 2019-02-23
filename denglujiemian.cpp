#include "denglujiemian.h"
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>
#include<windows.h> 
#include<time.h>
void time_break0()/*跳转等待2秒的函数*/
{
	system("cls");
	time_t start,end;
	start=time(NULL);
	cout<<"载入中...";
	do
	{	 
		end=time(NULL);
	}while(difftime(end,start)<2);/*difftime函数返回: 时间差*/
	system("cls");
}

void time_break1()/*跳转等待2秒的函数*/
{
	time_t start,end;
	start=time(NULL);
	do
	{	 
		end=time(NULL);
	}while(difftime(end,start)<2);/*difftime函数返回: 时间差*/
	system("cls");
}

void denglu::denglujiemian()    
/*
 void denglujiemian::denglujiemian()  ：：表示得是命名空间得调用，你前面对应得是denglujiemian
 									  但是反过来想想，你有这个类吗？ 
 */
{
	int num=4;
	int mun=4; 
	int password;
	const int password1=123456;
	const int password2=12345;
	const int password3=1234;
	const int password4=123;
	int key;
	int key0;
	int key1=123;
	int key2=1234;
	int key3=12345;
	int key4=123456;
	
	int can1=1;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	loop1:
	ifstream read1("KFCtxt文件\\封面一号.txt",ios::in);
    char temp1[5000]={};
    read1.getline(temp1,5000,0);
    cout<<temp1<<endl;
	cout<<"#                                                                       ";
	cout<<"请输入账号: ";
	cout<<"                                                                             #"<<endl;
	ifstream read2("KFCtxt文件\\封面二号.txt",ios::in);
    char temp2[5000]={};
    read2.getline(temp2,5000,0);
    cout<<temp2<<endl; 
	COORD pos1 = {84,15};
    SetConsoleCursorPosition(hConsole,pos1);
    cin>>password;
	if(password==password1)
	{
	  	key0=key1;
	  time_break0;
    }
	else
	  if(password==password2)
	  {
	    key0=key2;
	    time_break0;
      }
	  else
	    if(password==password3)
	    {
	      key0=key3;
	      time_break0;
	    }
	    else  
	      if(password==password4)
	      {
	        key0=key4;
	        time_break0;
	      }
	      else
	      {
	      	do
	        {
	          num=num-1;
	          if(num<4 && num>1)
			  {
	            time_break0();
	            ifstream read3("KFCtxt文件\\封面三号.txt",ios::in);
                char temp3[5000]={};
                read3.getline(temp3,5000,0);
                cout<<temp3<<endl;
                cout<<"￥                                                                          "; 
	            cout<<"账号错误";
	            cout<<"                                                                             ￥"<<endl; 
	            cout<<"￥                                                                   "; 
	            cout<<"您还有"<<" "<<num-1<<"次机会输入账号";
	            cout<<"                                                                      ￥"<<endl; 
	            ifstream read4("KFCtxt文件\\.txt",ios::in);
                char temp4[5000]={};
                read4.getline(temp4,5000,0);
                cout<<temp4<<endl;
                time_break1();
			      if(num>1)
			      goto loop1;
		      }
	        }
	        while(num==1);
	        {
	        	system("cls");
	        	time_break0;
	        	fstream read3("KFCtxt文件\\封面三号.txt",ios::in);
                char temp3[5000]={};
                read3.getline(temp3,5000,0);
                cout<<temp3<<endl;
                cout<<"￥                                                     "; 
			  	cout<<"账号错误, 3次机会已经用完！";
			  	cout<<"                                                                               ￥"<<endl; 
			  	ifstream read4("KFCtxt文件\\封面四号.txt",ios::in);
                char temp4[5000]={};
                read4.getline(temp4,5000,0);
                cout<<temp4<<endl;
                exit(0);	
	        }
          }
    system("cls");
    loop2:
	ifstream read5("KFCtxt文件\\封面一号.txt",ios::in);
                char temp5[5000]={};
                read5.getline(temp5,5000,0);
                cout<<temp5<<endl;
	            cout<<"*                                                                       ";
	            cout<<"请输入密码: ";
	            cout<<"                                                                             *"<<endl;
	ifstream read6("KFCtxt文件\\封面二号.txt",ios::in);
                char temp6[5000]={};
                read6.getline(temp6,5000,0);
                cout<<temp6<<endl; 
    COORD pos2 = {84,15};
    SetConsoleCursorPosition(hConsole,pos2);
	cin>>key;
	if(key==key0)
	{
	  time_break0();
	          ifstream read3("KFCtxt文件\\封面三号.txt",ios::in);
              char temp3[5000]={};
              read3.getline(temp3,5000,0);
              cout<<temp3<<endl;
              cout<<"￥                                                                          "; 
	          cout<<"登陆成功";
	          cout<<"                                                                             ￥"<<endl; 
	          cout<<"￥                                                                   "; 
	          cout<<"                                                                                            ￥"<<endl; 
	          ifstream read4("KFCtxt文件\\封面四号.txt",ios::in);
              char temp4[5000]={};
              read4.getline(temp4,5000,0);
              cout<<temp4<<endl;
              time_break1();
              system("cls");
    }
	else
	    {
	      do
	      {
	          mun=mun-1;
	          if(mun<4 && mun>1)
			  {
	          time_break0();
	          ifstream read3("KFCtxt文件\\封面三号.txt",ios::in);
              char temp3[5000]={};
              read3.getline(temp3,5000,0);
              cout<<temp3<<endl;
              cout<<"￥                                                                          "; 
	          cout<<"密码错误";
	          cout<<"                                                                             ￥"<<endl; 
	          cout<<"￥                                                                   "; 
	          cout<<"您还有"<<" "<<mun-1<<"次机会输入密码";
	          cout<<"                                                                      ￥"<<endl; 
	          ifstream read4("KFCtxt文件\\封面四号.txt",ios::in);
              char temp4[5000]={};
              read4.getline(temp4,5000,0);
              cout<<temp4<<endl;
              time_break1();
			    if(mun>1)
			    {
			    	goto loop2;
                }
		    }
	    }
	    while(mun==1);
	    {
	        system("cls");
	        time_break0;
	        fstream read3("KFCtxt文件\\封面三号.txt",ios::in);
            char temp3[5000]={};
            read3.getline(temp3,5000,0);
            cout<<temp3<<endl;
            cout<<"￥                                                     "; 
			cout<<"密码错误, 3次机会已经用完！";
			cout<<"                                                                               ￥"<<endl; 
			ifstream read4("KFCtxt文件\\封面四号.txt",ios::in);
            char temp4[5000]={};
            read4.getline(temp4,5000,0);
            cout<<temp4<<endl;
            exit(0);	
	    }
        } 
	  getchar();
}
// } 你在这里写多了一个括号 

