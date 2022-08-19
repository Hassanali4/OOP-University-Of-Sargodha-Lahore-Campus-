#include<iostream>
#include<string.h>
using namespace std;
class Book{
        	string Book_name[10] , Authour_name[10];
        	static int id;
        	int page[10] , price[10] ,Book_id[10];
         	int S_id , S_price , S_page;
        	string S_Bname , S_Aname;
        	int loop ;
	public:
		Book(){
			Book_name[0] = "No Name ";
			Authour_name[0] = "Name ";
			page[0] = 0;
			price[0] = 0;
			Book_id[0] = 0; 
		}
		void input();
		void show();
	friend	void search(Book bo);
		
};
void Book :: input(){
	cout << "\nHOW MANY BOOK YOU WANT TO ADD THE RECORD ";
	cin >>loop;
	for(int i =0; i<loop ; i++){
	cout <<"\nplease Enter Book Name ["<< i <<" ]: ";
	cin>>Book_name[i];
	cout <<"\nplease Enter Authour Name ["<< i <<" ]: ";
	cin>>Authour_name[i];
	cout <<"\nplease Enter Book pages ["<< i <<" ]: ";
	cin>>page[i];
	cout <<"\nplease Enter Book price["<< i <<" ]: ";
	cin>>price[i];
	Book_id[i] = ++id;
}
}
void Book :: show(){
	for(int i=0;i<loop ;i++){
	cout << "\nBook Id :: "<< Book_id[i];	
	cout << "\nBook Name :: "<< Book_name[i];
	cout << "\nAuthour Name :: "<< Authour_name[i];
	cout << "\nBook Pages :: "<< page[i];
	cout << "\nBook Price :: "<< price[i];	 
}}
void search(Book bo){
	int option;
	cout <<"\nplease Enter 1 for search on the basis of Book id :: ";
	cout <<"\nplease Enter 2 for search on the basis of Book Name :: ";
	cout <<"\nplease Enter 3 for search on the basis of Book Authour Name :: ";
	cout <<"\nplease Enter 4 for search on the basis of Book page :: ";
	cout <<"\nplease Enter 5 for search on the basis of Book price :: ";
	cin >> option;
	if (option == 1){
		cout <<"\nplease Enter Book Id For Searching:: ";
		cin >> bo.S_id;
		for(int i=0; i<bo.loop ; i++){
			if (bo.S_id == bo.Book_id[i] ){
	cout << "\nBook Id :: "<< bo.Book_id[i];	
	cout << "\nBook Name :: "<< bo.Book_name[i];
	cout << "\nAuthour Name :: "<< bo.Authour_name[i];
	cout << "\nBook Pages :: "<< bo.page[i];
	cout << "\nBook Price :: "<< bo.price[i];	 
	    	}
		}
	}
}
int Book :: id=0;

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
		cout<<"Enter your Name : ";
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
		if(y==1&&Y==1)	break;
		else	cout<<"\nINVALID INPUT TRY AGAIN\n";timer++;
		if(timer>4){system("cls");timer=0;}

	}while(1);//Infinite Do-While Loop	
	
Book b ,h;
b.input();
b.show();
search(b);		
	cout<<endl;
	system("pause");
}
