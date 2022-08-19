#include <iostream>
#include<string>
using namespace std;
class info
{
protected:
	char name[50];
char fat_name[50];
int age;
float weight;
float height;
public:
void Data()
{
	cout << "Please Enter Your Name:\n";
	cin.getline(name,'50');
	cout << "Enter your Father Name:\n";
	cin.getline(fat_name,'50');
	cout << "Please enter your age:\n";
	cin >> age;
	cout << "Please enter your weight:\n";
	cin >> weight;
	cout << "Please enter your height:\n";
	cin >> height;
}
};
class cal:public info
{
	protected:
		float h,BMI;string status;
public:
void Processing()
{
	float h = height/ 3.28;
	BMI = weight / (h*h);
	if (BMI < 15)
	{
		status = "Very Severely Underweight";
	}
	else if (BMI >= 15 && BMI <= 16)
	{
		status = "Severely Underweight";
	}
	else if (BMI > 16 && BMI <= 18.5)
	{
		status = "Underweight";
	}
	else if (BMI > 18.5 && BMI <= 25)
	{
		status = "Normal";
	}
	else if (BMI > 25 && BMI <= 30)
	{
		status = "Overweight";
	}
	else if (BMI > 30 && BMI <= 35)
	{
		status = "Moderately Obese";
	}
	else if (BMI > 35 && BMI <= 40)
	{
		status = "Severely Obese";
	}
	else if (BMI > 40)
	{
		status = "Very Severely Obese";
	}
}
};
class show:public cal
{
public:
void Display()
{
	cout << "-------------------------------------------------------------------------------------------"<<endl;
	cout << "\t\t\t\t\t Medical Certificate\t";
	cout<<"---------------------------------------------------------------------------------------------"<<endl;
	cout << "\t\tDear " << name << " your details are:\n\n\n";
	cout << "Name \t\t\t" << name << "\n";
	cout << "Father Name \t\t" << fat_name << "\n";
	cout << "Age \t\t\t" << age << "\n";
	cout << "Heighet \t\t" << height << "\n";
	cout << "Heighet \t\t" << weight << "\n";
	cout << "BMI Value \t\t" << BMI << "\n";
	cout << "Status\t\t\t" << status << "\n\n";
	cout << "Copyright by Pathology Department junaid sherof's Hospital.\n";
	cout << "Software Generated Slip errors and omissions are accepted";
}
};

class med:public show
{
public:
	void show1(){
		Data();
		Processing();
		Display();
	
cout << "\n\n\t\t\t\t**Welcome to Free Medical Check Up**\t\t\t\n\n\n";
	int choice;
	do{
		cout << "\n\nPlease enter your choice:-\n";
		cout << "If you want to do check up press 1.\n";
		cout << "If you don't want to do check up press 2.\n";
		cout << "Choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			Data();
			Display();
			break;
		case 2:
			cout << "Thank you for giving your precious time";
			break;
		}
	} while (choice <3)
		
		;
	cout << "Invalid Choice\n";
}
};

int main()
{
	med m;
	m.show1();
}
