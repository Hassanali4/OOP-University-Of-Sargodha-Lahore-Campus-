#include<iostream>
using namespace std;
struct login
{
	int p1=95,p2=145,p3=185,p4=205,p5=300;
	string u1="Numaila",u2="Abdul",u3="Salman",u4="Usama",u5="Hassan";
};
int main()
{
	int password=0,timer;
	string userinput;
	login u;
	do
	{
		cout<<"Enter your First Name : ";
		getline(cin,userinput);
		if(userinput == u.u1 || userinput == u.u2 || userinput == u.u3 || userinput == u.u4|| userinput == u.u5)
		{
			cout<<"\n Enter password : ";
			cin>>password;
		}
		
		if((userinput == u.u1 && password == u.p1)||(userinput == u.u2 && password == u.p2)||(userinput == u.u3 && password == u.p3)||(userinput == u.u4 && password == u.p4)||(userinput == u.u5 && password == u.p5))
	 	cout<<"\nAccess Granted ....(VALID PASSWORD)";	
	 	else
	  	{cout<<"\nAccess Denied ....(INVALID PASSWORD)";}
	 	if(userinput != u.u1 && userinput != u.u2 && userinput != u.u3 && userinput != u.u4&& userinput != u.u5) 
	 	{cout<<"\nAccess Denied ....(INVALID USERNAME)";}
	 	else
	  	cout<<"\nAccess Granted ....(VALID USERNAME)";
		  	if(userinput == u.u1)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Numaila Shehzadi your a Valuable Member. \n\n\n\n\t\t\t\t Talent wins games, but teamwork and intelligence wins championships. \n\n\n\n\t\t\t\tWelcome Back";}
			if(userinput == u.u2)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Abdul Rehman Leader\n\n\n\n\t\t\t\t Leadership's Not a Title,it's a Behaviour. \n\n\n\n\t\t\t\tLIVE IT.\n\n\n\n\t\t\t\tWelcome Back";}
		  	if(userinput == u.u3)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Salman Naeem your the Main Strength of the Team. \n\n\n\n\t\t\t\t Teamwork makes the dream work. \n\n\n\n\t\t\t\t Welcome Back";}
		  	if(userinput == u.u4)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Usama Sarfaraz your a Great Gift to the Team. \n\n\n\n\t\t\t\t None of us is as smart as all of us. \n\n\n\n\t\t\t\t Welcome Back";}
		  	if(userinput == u.u5)
		  	{cout<<"\n\n\n\n\t\t\t\tHi Hassan Ali your a Preciouse Member. Alone, we can do so little, together we can do so much. \n\n\n\n\t\t\t\tWelcome Back";}
		if((userinput == u.u1 && password == u.p1)||(userinput == u.u2 && password == u.p2)||(userinput == u.u3 && password == u.p3)||(userinput == u.u4 && password == u.p4)||(userinput == u.u5 && password == u.p5))
			break;
		else	
			cout<<"\nINVALID INPUT TRY AGAIN\n";timer++;
		if(timer>4)
			{system("cls");timer=0;}

	}while(1);
	
	
	cout<<"\n\n\n\n\t\t\t\t**********----Welcome to Medical Store----**********";	  	
	  		//Main Function and Menu
}
