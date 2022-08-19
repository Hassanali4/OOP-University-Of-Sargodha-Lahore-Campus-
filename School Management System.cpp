#include <iostream>
#include <conio.h>
using namespace std;

class staff
{
  protected:
      int code;
      char name[20];
  public:
      void getstaff()
      {
    cout<<"\n\nEnter code :-";
    cin>>code;
    cout<<"Enter name :-";
    cin>>name;
      }
      void dispstaff(void)
      {
       cout<<"\nNAME       :-"<<name;
       cout<<"\nCODE       :-"<<code;
      }
};

class teacher : public staff
{
      char sub[20];
      char pub[20];
  public:
      void create(void)
      {
    getstaff();
    cout<<"Enter Subject :-";
    cin>>sub;
    cout<<"Enter Publication :-";
    cin>>pub;
      }
      void display(void)
      {
     dispstaff();
     cout<<"\nSUBJECT    :-"<<sub;
     cout<<"\nPUBLICATION:-"<<pub;
      }
};

class officer : public staff
{
       char grade;
   public:
    void create(void)
    {
       getstaff();
       cout<<"Enter Grade :-";
       cin>>grade;
    }
    void display(void)
    {
       dispstaff();
       cout<<"\nGRADE      :-"<<grade;
    }
};

class typist : public staff
{
       float speed;
  public:
      void gettypist(void)
      {
    getstaff();
    cout<<"Enter speed (wpm):-";
    cin>>speed;
      }
      void disptypist(void)
      {
    dispstaff();
    cout<<"\nSPEED      :-"<<speed;
      }
};


class casual : public typist
{
     float dailywages;
   public:
       void create(void)
    {
      gettypist();
      cout<<"Enter Daily Wages :-";
      cin>>dailywages;
    }
    void display(void)
    {
      disptypist();
      cout<<"\nDAILY WAGES:-"<<dailywages;
    }
};

struct login
{
	int p1=95,p2=145,p3=185,p4=205,p5=300;
	string u1="Numaila",u2="Abdul",u3="Salman",u4="Usama",u5="Hassan";
};
int main()
{
	int password=0,timer;bool y=1,Y=1;
	string userinput;
	login u;
	do
	{
		cout<<"Enter your First Name : ";
		getline(cin,userinput);
		if(userinput == u.u1 || userinput == u.u2 || userinput == u.u3 || userinput == u.u4|| userinput == u.u5)
		{
			cout<<"\n Enter password : ";
			cin>>password;cin.ignore();
		}
	 	if(userinput != u.u1 && userinput != u.u2 && userinput != u.u3 && userinput != u.u4&& userinput != u.u5) 
	 	{cout<<"\nAccess Denied ....(INVALID USERNAME)";Y=0;}
	 	else
	  	cout<<"\nAccess Granted ....(VALID USERNAME)";
	  	if((userinput == u.u1 && password == u.p1)||(userinput == u.u2 && password == u.p2)||(userinput == u.u3 && password == u.p3)||(userinput == u.u4 && password == u.p4)||(userinput == u.u5 && password == u.p5))
	 	cout<<"\nAccess Granted ....(VALID PASSWORD)";	
	 	else
	  	{cout<<"\nAccess Denied ....(INVALID PASSWORD)";y=0;}
		  	if(userinput == u.u1 && password == u.p1)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Numaila Shehzadi your a Valuable Member. \n\n\n\n\t\t\t\t Talent wins games, but teamwork and intelligence wins championships. \n\n\n\n\t\t\t\tWelcome Back";}
			if(userinput == u.u2 && password == u.p2)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Abdul Rehman Leader\n\n\n\n\t\t\t\t Leadership's Not a Title,it's a Behaviour. \n\n\n\n\t\t\t\tLIVE IT.\n\n\n\n\t\t\t\tWelcome Back";}
		  	if(userinput == u.u3 && password == u.p3)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Salman Naeem your the Main Strength of the Team. \n\n\n\n\t\t\t\t Teamwork makes the dream work. \n\n\n\n\t\t\t\t Welcome Back";}
		  	if(userinput == u.u4 && password == u.p4)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Usama Sarfaraz your a Great Gift to the Team. \n\n\n\n\t\t\t\t None of us is as smart as all of us. \n\n\n\n\t\t\t\t Welcome Back";}
		  	if(userinput == u.u5 && password == u.p5)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Hassan Ali your a Preciouse Member. Alone, we can do so little, together we can do so much. \n\n\n\n\t\t\t\tWelcome Back";}
		if(y==1&&Y==1)	
			{break;}
		else	
		{cout<<"\nINVALID INPUT TRY AGAIN\n";timer++;}
		if(timer>4){system("cls");timer=0;}

	}while(1);//Infinite Do-While Loop	
	
	//system ("CLS");
	teacher o1t[10];
	casual  o1c[10];
	officer  o1o[10];
	int choice,i,time=0;
	char test;
	while(1)
	{
	int count;
	start:if(timer==1)system ("CLS");
	   cout<<"\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
	   cout<<"Choose Category of Information\n";
	   cout<<"1)   Teachers\n";
	   cout<<"2)   Officer\n";
	   cout<<"3)   Typist\n";
	   cout<<"4)   Exit\n";
	   cout<<"Enter your choice:-";
	   cin>>choice;timer++;
	   switch(choice)
	   {
	      case 1 :  
		  while(1)
		    {
		       system ("CLS");
		        cout<<"\n=====TEACHERS INFORMATION=====\n\n";
		        cout<<"\nChoose your choice\n";
		        cout<<"1) Create\n";
		        cout<<"2) Display\n";
		        cout<<"3) Jump to Main Menu\n";
		        cout<<"Enter your choice:-";
		        cin>>choice;
		        switch(choice)
		        {
		         case 1 :  for(count=0,i=0;i<10;i++)
		               {
		                 cout<<endl;
		                 o1t[i].create();
		                 count++;
		                 cout<<endl;
		                 cout<<"\n\nAre you Interested in entering data\n";
		                 cout<<"Enter y or n:-";
		                 cin>>test;
		                 if(test=='y' || test=='Y')
		                	continue;
		                 else goto out1;
		                }
		                 out1:
		                 break;
		         case 2 : for(i=0;i<count;i++)
		               {
		                cout<<endl;
		                 o1t[i].display();
		                 cout<<endl;
		               }
		               getch();
		               break;
		         case 3 : goto start;
		         default: cout<<"\nEnter choice is invalid\ntry again\n\n";
		        }
	    	}
	      case 2 :   while(1)
	         {
		         system ("CLS");
		        cout<<"\n=====OFFICERS INFORMATION=====\n\n";
		        cout<<"\nChoose your choice\n";
		        cout<<"1) Create\n";
		        cout<<"2) Display\n";
		        cout<<"3) Jump to Main Menu\n";
		        cout<<"Enter your choice:-";
		        cin>>choice;
		        switch(choice)
		        {
		         case 1 : for(count=0,i=0;i<10;i++)
		               {
		                 cout<<endl;
		                 o1o[i].create();
		                 count++;
		                 cout<<endl;
		                 cout<<"\n\nAre you Interested in entering data\n";
		                 cout<<"Enter y or n:-";
		                 cin>>test;
		                 if(test=='y' || test=='Y')
		                	continue;
		                 else goto out2;
		                 }
		                 out2:
		                 break;
		         case 2 : for(i=0;i<count;i++)
		               {
		                cout<<endl;
		                 o1o[i].display();
		                 cout<<endl;
		               }
		               system("pause");
		               break;
		         case 3 : goto start;
		         default: cout<<"\nInvalid choice\ntry again\n\n";
		        }
	         }
	      case 3 :  while(1)
	        {
		        system ("CLS");
		        cout<<"\n=====TYPIST INFORMATION=====\n\n";
		        cout<<"\nChoose your choice\n";
		        cout<<"1) Create\n";
		        cout<<"2) Display\n";
		        cout<<"3) Jump to Main Menu\n";
		        cout<<"Enter your choice:-";
		        cin>>choice;
		        switch(choice)
		        {
		         case 1 : for(count=0,i=0;i<10;i++)
		               {
		                 cout<<endl;
		                 o1c[i].create();
		                 count++;
		                 cout<<endl;
		                 cout<<"\n\nAre you Interested in entering data\n";
		                 cout<<"Enter y or n:-";
		                 cin>>test;
		                 if(test=='y' || test=='Y')
		                continue;
		                 else goto out3;
		                 }
		                 out3:
		                 break;
		         case 2 : for(i=0;i<count;i++)
		               {
		                 cout<<endl;
		                 o1c[i].display();
		                 cout<<endl;
		               }
		               system("pause");
		               break;
		         case 3 : goto start;
		         default: cout<<"\nInvalid choice\ntry again\n\n";
		        }
	         }
	      	default : goto end;
	    }
	 }
	 end:return 0;
 }
