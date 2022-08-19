#include <iostream>
#include <fstream>
#include<stdio.h>
#include <string.h>
#include <iomanip>
#include <conio.h>
using namespace std;

class phoneBook{
    char name[20],phno[15];
    public:
    void getdata();
    void showdata();
    char *getname()
	{
		return name;
	}
    char *getphno()
	{ 
		return phno;
	}
    void update(char *nm,char *telno)
	{
        strcpy(name,nm);
        strcpy(phno,telno);
    }
};

void phoneBook :: getdata(){
    cout<<"\nEnter Name : ";
    cin>>name;
    cout<<"Enter Phone No. : ";
    cin>>phno;
}

void phoneBook :: showdata(){
    cout<<"\n";
    cout<<"\t"<<name;
    cout<<"\t"<<phno;
}


int main(){
    phoneBook rec;
    ofstream w;
	ifstream r;
	
    char ch,nm[20],telno[6];
    int choice,found=0;
    while(1){
		w.open("phone.txt",ios::app | ios::out |ios::binary);
		r.open("phone.txt", ios::in );
        system("cls");
        cout<<"\n*****Phone Book*****\n";
        cout<<"1) Add New Record\n";
        cout<<"2) Display All Records\n";
        cout<<"3) Search Person Name\n";
        cout<<"4) Search Telephone No.\n";
        cout<<"5) Update Telephone No.\n";
        cout<<"6) Exit\n";
        cout<<"Choose your choice : ";
        cin>>choice;
        switch(choice)
		{
            case 1 :
				{
                 rec.getdata();
                 cin.get(ch);
                 w.write((char *) &rec, sizeof(rec));
				 cout<<"record saved!";
				 getch();
				 w.close();
                 break;
				}

            case 2 :
				{
                 r.seekg(0,ios::beg);
                 cout<<"\n\nRecords in Phone Book\n";
                 while(r)
				 {
                    r.read((char *) &rec, sizeof(rec));
                    if(!r.eof())
                        rec.showdata();
                 }
                 r.close();
                 getch();
                 break;
				}
            case 3 :
				{
                 cout<<"\n\nEnter Name : ";
                 cin>>nm;
                 r.seekg(0,ios::beg);
                 found=0;
                 while(r.read((char *) &rec, sizeof(rec)))
                 {
                    if(strcmp(nm,rec.getname())==0)
                    {
                        found=1;
                        rec.showdata();
                    }
                 }
                 r.close();
                 if(found==0)
                    cout<<"\n\n---Record Not found---\n";
                 getch();
                 break;
				}
            case 4 : 
				{
                 cout<<"\n\nEnter Telephone No : ";
                 cin>>telno;
                 r.seekg(0,ios::beg);
                 found=0;
                 while(r.read((char *) &rec, sizeof(rec)))
                 {
                    if(strcmp(telno,rec.getphno())==0)
                    {
                        found=1;
                        rec.showdata();
                    }
                 }
                 r.close();
                 if(found==0)
                    cout<<"\n\n---Record Not found---\n";
                 getch();
                 break;
		        }

            case 5 : 
				{
                 cout<<"\n\nEnter Name : ";
                 cin>>nm;
                 r.seekg(0,ios::beg);
                 found=0;
                 int cnt=0;
                 while(r.read((char *) &rec, sizeof(rec)))
                 {
                    cnt++;
                    if(strcmp(nm,rec.getname())==0)
                    {
                        found=1;
                        break;
                    }
                 }
                 r.close();
                 if(found==0)
                    cout<<"\n\n---Record Not found---\n";
                 else
                 {
                    int location = (cnt-1) * sizeof(rec);
                    cin.get(ch);
                    if(r.eof())
                        r.close();

                    cout<<"Enter New Telephone No : ";
                    cin>>telno;
                   w.seekp(location);
                    rec.update(nm,telno);
                    w.write((char *) &rec, sizeof(rec));
                    w.flush();
					cout<<"Updated succesfully..";
					getch();
                 }
                 break;
            
				}
		case 6:
		{
			exit(0);
		}
    }
	w.close();
	r.close();
	}

system("pause");
}


 
 
 
 
 

