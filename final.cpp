#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
#include<cstdlib>
#include<time.h>
using namespace std;
class quiz
{
      int rno,marks;
      char name[20],address[100];
      public:
             quiz()
             {
                 marks=0;
             }
             void input();
             void physics();
             void chemistry();
             void maths();
             void physics1();
             void chemistry1();
             void maths1();
             void output();
             void rules();
}q;
void quiz::input()
{    char temp[2];
     fstream f;
     f.open("record.txt",ios::out);
     cout<<"enter name\n";
     gets(name);
     f<<name<<endl;
     cout<<"Enter roll number\n";
     cin>>rno;
     gets(temp);
     f<<rno<<endl;
     f.close();
}
void quiz::physics()
{
int temp;
  int ans_phy[10]={1,3,2,1,3,1,2,1,2,2};
  int a[5],i,j,x;
  char ques[10][1000],ans;
     srand(time(0)); 
     A:
      do
      {
                    
                     for(i=0;i<5;i++)
                     {
                                      x=rand()%10;
                                     for(j=0;j<5;j++)
                                     { 
                                                     if(x==a[j])
                                                      goto A;
                                     }
                                     a[i]=x;
                     }
      }while(a[0]!=a[1]!=a[2]!=a[3]!=a[4]);
      fstream f1,f2;
      f1.open("physics.txt",ios::in);
      f2.open("physicsans.txt",ios::out);
      i=0;
      while(!f1.eof())
      {
                      f1.getline(ques[i],1000);
                      i++;
      }
      for(i=0;i<5;i++)
      {
                       x=a[i];
                       puts(ques[x]);
                       j=5000;
                       while(!kbhit()&&j>1)
                       {
                                           j--;
                                           Sleep(1);
                       }     
                       if(kbhit())
                       {ans=_getch();
                       temp=ans;
                       temp=temp-48;
                       cout<<temp;
                       if(temp==ans_phy[x])
                         {                 f2<<temp<<endl;
                                           marks=marks+3;
                                           cout<<endl;}
                                           else
                                           f2<<temp<<"*"<<endl;
                                           
                     }
                     cout<<endl;
      }
      f1.close();
      f2.close();
}
void quiz::chemistry()
{
int temp;
  int ans_chem[10]={2,3,1,1,2,1,2,2,1,3};
  int a1[5],i,j,x;
  char ques1[10][1000],ans1;
     srand(time(0)); 
     A:
      do
      {
                    
                     for(i=0;i<5;i++)
                     {
                                      x=rand()%10;
                                     for(j=0;j<5;j++)
                                     { 
                                                     if(x==a1[j])
                                                      goto A;
                                     }
                                     a1[i]=x;
                     }
      }while(a1[0]!=a1[1]!=a1[2]!=a1[3]!=a1[4]);
      fstream f1,f2;
      f1.open("chemistry.txt",ios::in);
      f2.open("chemistryans.txt",ios::out);
      i=0;
      while(!f1.eof())
      {
                      f1.getline(ques1[i],1000);
                      i++;
      }
      for(i=0;i<5;i++)
      {
                       x=a1[i];
                       puts(ques1[x]);
                       j=5000;
                       while(!kbhit()&&j>1)
                       {
                                           j--;
                                           Sleep(1);
                       }     
                       if(kbhit())
                       {ans1=_getch();
                       temp=ans1;
                       temp=temp-48;
                       cout<<temp;
                       if(temp==ans_chem[x])
                         {marks=marks+3;
                         f2<<temp;
                     cout<<endl;}
                     else
                     f2<<temp<<"*";
                     }
                     cout<<endl;
      }
      f1.close();
      f2.close();
}
void quiz::maths()
{
int temp;
   int ans_maths[10]={3,3,1,2,1,2,3,1,1,2};
  int a[5],i,j,x;
  char ques[10][1000],ans;
     srand(time(0)); 
     A:
      do
      {
                    
                     for(i=0;i<5;i++)
                     {
                                      x=rand()%10;
                                     for(j=0;j<5;j++)
                                     { 
                                                     if(x==a[j])
                                                      goto A;
                                     }
                                     a[i]=x;
                     }
      }while(a[0]!=a[1]!=a[2]!=a[3]!=a[4]);
      fstream f1,f2;
      f1.open("maths.txt",ios::in);
      f2.open("mathsans.txt",ios::out);
      i=0;
      while(!f1.eof())
      {
                      f1.getline(ques[i],1000);
                      i++;
      }
      for(i=0;i<5;i++)
      {
                       x=a[i];
                       puts(ques[x]);
                       j=5000;
                       while(!kbhit()&&j>1)
                       {
                                           j--;
                                           Sleep(1);
                       }     
                       if(kbhit())
                       {ans=_getch();
                       temp=ans;
                       temp=temp-48;
                       cout<<temp;
                       if(temp==ans_maths[x])
                         {marks=marks+3;
                         f2<<temp<<endl;
                     cout<<endl;}
                     else
                     f2<<temp<<"*"<<endl;
                     }
                     cout<<endl;
      }
      f1.close();
      f2.close();
}
void quiz::chemistry1()
{
int temp;
  int ans_chem[10]={2,3,1,1,2,1,2,2,1,3};
  int a[5],i,j,x;
  char ques[10][1000],ans;
     srand(time(0)); 
     A:
      do
      {
                    
                     for(i=0;i<5;i++)
                     {
                                      x=rand()%10;
                                     for(j=0;j<5;j++)
                                     { 
                                                     if(x==a[j])
                                                      goto A;
                                     }
                                     a[i]=x;
                     }
      }while(a[0]!=a[1]!=a[2]!=a[3]!=a[4]);
      fstream f1,f2;
      f1.open("chemistry.txt",ios::in);
      f2.open("chemistryans.txt",ios::out);
      i=0;
      while(!f1.eof())
      {
                      f1.getline(ques[i],1000);
                      i++;
      }
      int k;
      i=0;
      char ch;
      j=1500;
      while(j>1)
      {k=1500;
      if(i>4)
      break;
      x=a[i];
      puts(ques[x]);
      i++;
       while(!kbhit()&&j>1)
                       { 
                       j--;
                       k--;
                       Sleep(1);                   
                       } 
                       if(kbhit())
                       {ans=_getch();
                       temp=ans;
                       temp=temp-48;
                       cout<<temp<<endl;
                       if(temp==ans_chem[x])
                         {marks=marks+3;
                         f2<<temp<<endl;
                     cout<<endl;}
                     else
                     f2<<temp<<"*"<<endl;
       }
       if(j<1)
       cout<<"time out";
      }  
      f1.close();
      f2.close();
}
void quiz::physics1()
{
int temp;
  int ans_phy[10]={1,3,2,1,3,1,2,1,2,2};
  int a[5],i,j,x;
  char ques[10][1000],ans;
     srand(time(0)); 
     A:
      do
      {
                    
                     for(i=0;i<5;i++)
                     {
                                      x=rand()%10;
                                     for(j=0;j<5;j++)
                                     { 
                                                     if(x==a[j])
                                                      goto A;
                                     }
                                     a[i]=x;
                     }
      }while(a[0]!=a[1]!=a[2]!=a[3]!=a[4]);
      fstream f1,f2;
      f1.open("physics.txt",ios::in);
      f2.open("physicsans.txt",ios::out);
      i=0;
      while(!f1.eof())
      {
                      f1.getline(ques[i],1000);
                      i++;
      }
int k;
i=0;
      char ch;
      j=1500;
      while(j>1)
      {k=1500;
      x=a[i];
      if(i>4)
      break;
      puts(ques[x]);
      i++;
       while(!kbhit()&&j>1)
                       { 
                       j--;
                       k--;
                       Sleep(1);                   
                       } 
                       if(kbhit())
                       {ans=_getch();
                       temp=ans;
                       temp=temp-48;
                       cout<<temp<<endl;
                       if(temp==ans_phy[x])
                         {marks=marks+3;
                         f2<<temp<<endl;
                     cout<<endl;}
                     else
                     f2<<temp<<"*"<<endl;
       }
       if(j<1)
       cout<<"time out";
      }  
      f1.close();
      f2.close();
}
void quiz::maths1()
{
  int temp;
  int ans_maths[10]={3,3,1,2,1,2,3,1,1,2};
  int a[5],i,j,x;
  char ques[10][1000],ans;
     srand(time(0)); 
     A:
      do
      {
                    
                     for(i=0;i<5;i++)
                     {
                                      x=rand()%10;
                                     for(j=0;j<5;j++)
                                     { 
                                                     if(x==a[j])
                                                      goto A;
                                     }
                                     a[i]=x;
                     }
      }while(a[0]!=a[1]!=a[2]!=a[3]!=a[4]);
      fstream f1,f2;
      f1.open("maths.txt",ios::in);
      f2.open("mathsans.txt",ios::out);
      i=0;
      while(!f1.eof())
      {
                      f1.getline(ques[i],1000);
                      i++;
      }
int k;
i=0;
      char ch;
      j=1500;
      while(j>1)
      {k=1500;
      if(i>4)
      break;
      x=a[i];
      puts(ques[x]);
      i++;
       while(!kbhit()&&j>1)
                       { 
                       j--;
                       k--;
                       Sleep(1);                   
                       } 
                       if(kbhit())
                       {ans=_getch();
                       temp=ans;
                       temp=temp-48;
                       cout<<temp<<endl;
                       if(temp==ans_maths[x])
                         {marks=marks+3;
                         f2<<temp<<endl;
                     cout<<endl;}
                     else
                     f2<<temp<<"*"<<endl;
       }
       if(j<1)
       cout<<"time out";
      }
      f1.close();
      f2.close();  
}
void quiz::rules()
{    system("cls");
     cout<<"THERE ARE 2 MODES TO ATTEMPT THE QUIZ \n";
     cout<<"IN EQUAL PER QUSETION MODE , 5 SECONDS WILL BE GIVEN TO ATTEMPT THE QUES.\n";
     cout<<"IF YOU GIVE THE ANSWER IN TIME , YOUR ANSWER WILL BE SAVED\nAND NEXT QUESTION WILL BE SHOWN\n";
       cout<<"IN EQUAL PER SECTION  MODE , 10 SECONDS WILL BE GIVEN TO THE WHOLE SECTION.\n";
       Sleep(7000);
}
void quiz::output()
{     //Sleep(3000);
      system("cls");
      int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, int nCmdShow);

    MessageBox(NULL, "THANK YOU FOR ATTEMPTING THE QUIZ!!", "NOTE", MB_OK);
     cout<<"YOUR FINAL SCORE IS "<<marks<<endl;
     Sleep(3000);
}
main()
{int ch,a,attempt=0,ch1;
system("color 0A");
      cout<<"\t\tWELCOME TO THE QUIZ \n";
      q.input();
      cout<<"THE FOLLOWING ARE THE RULES  :-\n";
      Sleep(3000);
      q.rules();
      system("cls");
      cout<<"Press 1 for equal time per question mode\nPress 2 for equal time per section mode\n";
      cin>>ch;
      int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, int nCmdShow);

    MessageBox(NULL, "ARE YOU READY TO TAKE THE EXAM?", "NOTE", MB_OK);
      if(ch==1)
      {
      cout<<"YOU CAN ATTEMPT PHYSICS,CHEMISTRY AND MATHS IN ANY ORDER\n";
      do
      {
      cout<<"ENTER 1 FOR PHYSICS , 2 FOR CHEMISTRY AND 3 FOR MATHS\n";
      cin>>a;
      switch(a)
      {
      case 1:
      q.physics();
      cout<<"END OF PHYSICS QUESTIONS\n";
      Sleep(3000);
      system("cls");
      cout<<endl<<endl;
      attempt++;
      break;
      case 2:
      q.chemistry();
      cout<<"END OF CHEMISTRY QUESTIONS\n";
      Sleep(3000);
      system("cls");
      cout<<endl<<endl;
      attempt++;
      break;
      case 3:
      q.maths();
      cout<<"END OF MATHS QUESTIONS\n";
      cout<<endl<<endl;
      Sleep(3000);
      system("cls");
      attempt++;
      break;
      }
      }while(attempt<3);     
      q.output();
      }
      else if(ch==2)
      {
      cout<<"YOU CAN ATTEMPT PHYSICS,CHEMISTRY AND MATHS IN ANY ORDER\n";
      do
      {
      cout<<"ENTER 1 FOR PHYSICS , 2 FOR CHEMISTRY AND 3 FOR MATHS\n";
      cin>>a;
      switch(a)
      {
      case 1:
      q.physics1();
      cout<<"END OF PHYSICS QUESTIONS\n";
      cout<<endl<<endl;
       Sleep(3000);
      system("cls");
      attempt++;
      break;
      case 2:
      q.chemistry1();
      cout<<"END OF CHEMISTRY QUESTIONS\n";
      cout<<endl<<endl;
       Sleep(3000);
      system("cls");
      attempt++;
      break;
      case 3:
      q.maths1();
      cout<<"END OF MATHS QUESTIONS\n";
      cout<<endl<<endl;
       Sleep(3000);
      system("cls");
      attempt++;
      break;
      }
      }while(attempt<3);
      q.output();
      cout<<"YOUR RESPONSES ARE :- \n";
      fstream f1,f2,f3;
      cout<<"IN PHYSICS :- \n";
      f3.open("physicsans.txt",ios::in);
      char ch1[10];
      while(!f3.eof())
      {
                      f3.getline(ch1,10);
                      cout<<ch1<<endl;
      }
      f3.close();
      cout<<"IN CHEMISTRY :- \n";
      f1.open("chemistryans.txt",ios::in);
      while(!f1.eof())
      { 
                       f1.getline(ch1,10);
                      cout<<ch1<<endl;
      }
      f1.close(); 
      cout<<"IN MATHS :- \n";
      f2.open("mathsans.txt",ios::in);
      while(!f2.eof())
      { 
                       f2.getline(ch1,10);
                      cout<<ch1<<endl;
      }          
      f2.close(); 
      cout<<"NOTE :- STAR MARK INDICATES WRONG ANSWER";    
      getch();
}
}
      
      
                       
                       
                       
                      
