#include<iostream> 
#include<string.h> 
using namespace std; 
struct info 
{ 
char name[20]; 
long int ph; 
char type; 
}; 
int timing(); 
int main() 
{ 
info d,p; 
int a=37; 
int *staff; 
staff=&a; 
char c; 
cout<<"\n\t !!..Welcome to Hospital Management System..!!\n"<<endl; 
cout<<"\t => Choose Doctors Access or Patient Access"<<endl; 
cout<<"\n\n\t => Press 'D' for Doctors & 'P' for Patient= "; 
cin>>c; 
cout<<endl; 
if(c=='D' || c=='d') 
{ 
char ch; 
cout<<"\n\t*** Welcome to the staff Access ***\n\n\n\tDo you want to continue? Press 'Y' for continue & N for exit: "; 
cin>>ch; 
if (ch=='Y' || ch=='y') 
{ 
 int ck; 
cout<<"\n\n\tChoose one of the following options\n\n1: New Patient Entry\n2: Duty Shedule\n3: Total patients admit in hospital\n4: Enter no. of patients in your departement\n"; 
cin>>ck; 
switch(ck) 
{ 
case 1: 
cout<<"\nPatient Name: "; 
for(int i=0; i<20; i++) 
{ 
cin>>d.name[i]; 
} 
long int r; 
cout<<"\nRegistration no: "; 
cin>>r; 
cout<<"\nEnter 'e' for emergency and 'o' for out door: "; 
cin>>d.type; 
cout<<"\n Phone Number: "; 
cin>>d.ph; 
cout<<"Your given data is stored successfuly"; 
break; 
case 2: 
timing(); 
break; 
case 3: 
cout<<"Total patients admit in hospital are 1430\nDetails:\nEmergency: 900 \nOut Door: 530"; 
break; 
case 4: 
int no; 
cout<<"\nEnter no. of patients admit in your departement: "; 
cin>>no; 
cout<<"Your given data is stored successfuly"; 
break; 
} 
} 
else 
{ 
cout<<"Press any key to exit..!!"; 
} 
} 
else if (c=='p' || c=='P') 
{ 
int ptc; 
cout<<"***Welcome to patient access***\nChoose one of the following option:\n1: Registration for your check-up\n2: Hospital Timings\n3: Search by Department\n4: Total staff members\n"<<endl; 
cin>>ptc; 
switch(ptc) 
{ 
case 1: 
cout<<"Please Enter the following information:\nName: "; 
for(int i=0; i<20; i++) 
{ 
cin>>p.name[i]; 
} 
cout<<"Enter your phone number: "; 
cin>>p.ph; 
cout<<"Enter 'e' for emergency and 'o' for outdoor: "; 
cin>>p.type; 
cout<<"\nYour Name is now registered....Thank You..!!"; 
break; 
case 2: 
timing(); 
break; 
case 3: 
char depn; 
cout<<"Enter department name:- \nEnter 1 for Cardialogy, 2 for ENT and 3 for neoro"; 
cin>>depn; 
if(depn==1) 
cout<<"Dr .Athar Kashan\tRoom no: 23"; 
else 
if(depn==2) 
cout<<"Dr. junaid\tRoom no: 431"; 
else 
if(depn==3) 
cout<<"Dr.Hamza Shafqat\t Room: 75"; 
else 
cout<<"Invalid input..!!"; 
break; 
case 4: 
cout<<"Total staff members are="<<*staff; 
break; 
default: 
cout<<"INVALID INPUT"; 
break; 
} 
 } 
return 0; 
} 
int timing() 
{ 
cout<<"\n\t~~~ TIME TABLE ~~~"<<endl; 
cout<<"\nMonday: 9:00 am to 4:00 pm\nTuesday: 9:00 am to 4:00 pm\nWednesday: 9:00 am to 4:00 pm\nThursday: 9:00 am to 4:00 pm\nFriday: 9:00 am to 12:30 pm\nSaturday: 9:00 am to 4:00 pm\nSunday: Only emergency is open..!!"<<endl; 
return 0; 
}
