#include<iostream>
using namespace std;
struct login
{
	string p1="95",p2="145",p3="185",p4="205",p5="300";
	string u1="Numaila",u2="Abdul",u3="Salman",u4="Usama",u5="Hassan";
};
int main()
{
	string password="0";int timer;bool y=1,Y=1;
	string userinput;
	login u;
	do
	{
		cout<<"Enter your Name : ";
		getline(cin,userinput);
		if(userinput == u.u1 || userinput == u.u2 || userinput == u.u3 || userinput == u.u4|| userinput == u.u5)
		{
			cout<<"\n Enter password : ";
			cin>>password;cin.ignore();
		}
	 	if(userinput != u.u1 && userinput != u.u2 && userinput != u.u3 && userinput != u.u4 && userinput != u.u5) 
	 	{cout<<"\nAccess Denied ....(INVALID USERNAME)";Y=0;}
	 	else
	  	{cout<<"\nAccess Granted ....(VALID USERNAME)";Y=1;}
	  	if((userinput == u.u1 && password == u.p1)||(userinput == u.u2 && password == u.p2)||(userinput == u.u3 && password == u.p3)||(userinput == u.u4 && password == u.p4)||(userinput == u.u5 && password == u.p5))
	 	{cout<<"\nAccess Granted ....(VALID PASSWORD)";y=1};	
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
		  	{cout<<"\n\n\n\n\t\t\t\tHi Hassan Ali your a Preciouse Member. Alone, we can do so little, together we can do so \n\t\t\t\tmuch. \n\n\n\n\t\t\t\tWelcome Back";}
		if(y==1&&Y==1)	break;
		else	cout<<"\nINVALID INPUT TRY AGAIN\n";timer++;
		if(timer>4){system("cls");timer=0;}

	}while(1);//Infinite Do-While Loop
	
	cout<<"\n\n\n\n\t\t\t\t**********----Welcome to Your Project----**********";	  	
	  		//Main Function and Menu
}
