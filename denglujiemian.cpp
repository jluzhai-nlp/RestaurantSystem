#include "denglujiemian.h"
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>
#include<windows.h> 
#include<time.h>
void time_break0()/*��ת�ȴ�2��ĺ���*/
{
	system("cls");
	time_t start,end;
	start=time(NULL);
	cout<<"������...";
	do
	{	 
		end=time(NULL);
	}while(difftime(end,start)<2);/*difftime��������: ʱ���*/
	system("cls");
}

void time_break1()/*��ת�ȴ�2��ĺ���*/
{
	time_t start,end;
	start=time(NULL);
	do
	{	 
		end=time(NULL);
	}while(difftime(end,start)<2);/*difftime��������: ʱ���*/
	system("cls");
}

void denglu::denglujiemian()    
/*
 void denglujiemian::denglujiemian()  ������ʾ���������ռ�õ��ã���ǰ���Ӧ����denglujiemian
 									  ���Ƿ��������룬����������� 
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
	ifstream read1("KFCtxt�ļ�\\����һ��.txt",ios::in);
    char temp1[5000]={};
    read1.getline(temp1,5000,0);
    cout<<temp1<<endl;
	cout<<"#                                                                       ";
	cout<<"�������˺�: ";
	cout<<"                                                                             #"<<endl;
	ifstream read2("KFCtxt�ļ�\\�������.txt",ios::in);
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
	            ifstream read3("KFCtxt�ļ�\\��������.txt",ios::in);
                char temp3[5000]={};
                read3.getline(temp3,5000,0);
                cout<<temp3<<endl;
                cout<<"��                                                                          "; 
	            cout<<"�˺Ŵ���";
	            cout<<"                                                                             ��"<<endl; 
	            cout<<"��                                                                   "; 
	            cout<<"������"<<" "<<num-1<<"�λ��������˺�";
	            cout<<"                                                                      ��"<<endl; 
	            ifstream read4("KFCtxt�ļ�\\.txt",ios::in);
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
	        	fstream read3("KFCtxt�ļ�\\��������.txt",ios::in);
                char temp3[5000]={};
                read3.getline(temp3,5000,0);
                cout<<temp3<<endl;
                cout<<"��                                                     "; 
			  	cout<<"�˺Ŵ���, 3�λ����Ѿ����꣡";
			  	cout<<"                                                                               ��"<<endl; 
			  	ifstream read4("KFCtxt�ļ�\\�����ĺ�.txt",ios::in);
                char temp4[5000]={};
                read4.getline(temp4,5000,0);
                cout<<temp4<<endl;
                exit(0);	
	        }
          }
    system("cls");
    loop2:
	ifstream read5("KFCtxt�ļ�\\����һ��.txt",ios::in);
                char temp5[5000]={};
                read5.getline(temp5,5000,0);
                cout<<temp5<<endl;
	            cout<<"*                                                                       ";
	            cout<<"����������: ";
	            cout<<"                                                                             *"<<endl;
	ifstream read6("KFCtxt�ļ�\\�������.txt",ios::in);
                char temp6[5000]={};
                read6.getline(temp6,5000,0);
                cout<<temp6<<endl; 
    COORD pos2 = {84,15};
    SetConsoleCursorPosition(hConsole,pos2);
	cin>>key;
	if(key==key0)
	{
	  time_break0();
	          ifstream read3("KFCtxt�ļ�\\��������.txt",ios::in);
              char temp3[5000]={};
              read3.getline(temp3,5000,0);
              cout<<temp3<<endl;
              cout<<"��                                                                          "; 
	          cout<<"��½�ɹ�";
	          cout<<"                                                                             ��"<<endl; 
	          cout<<"��                                                                   "; 
	          cout<<"                                                                                            ��"<<endl; 
	          ifstream read4("KFCtxt�ļ�\\�����ĺ�.txt",ios::in);
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
	          ifstream read3("KFCtxt�ļ�\\��������.txt",ios::in);
              char temp3[5000]={};
              read3.getline(temp3,5000,0);
              cout<<temp3<<endl;
              cout<<"��                                                                          "; 
	          cout<<"�������";
	          cout<<"                                                                             ��"<<endl; 
	          cout<<"��                                                                   "; 
	          cout<<"������"<<" "<<mun-1<<"�λ�����������";
	          cout<<"                                                                      ��"<<endl; 
	          ifstream read4("KFCtxt�ļ�\\�����ĺ�.txt",ios::in);
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
	        fstream read3("KFCtxt�ļ�\\��������.txt",ios::in);
            char temp3[5000]={};
            read3.getline(temp3,5000,0);
            cout<<temp3<<endl;
            cout<<"��                                                     "; 
			cout<<"�������, 3�λ����Ѿ����꣡";
			cout<<"                                                                               ��"<<endl; 
			ifstream read4("KFCtxt�ļ�\\�����ĺ�.txt",ios::in);
            char temp4[5000]={};
            read4.getline(temp4,5000,0);
            cout<<temp4<<endl;
            exit(0);	
	    }
        } 
	  getchar();
}
// } ��������д����һ������ 

