#include<iostream>
using namespace std;
class Data
{
protected:
	string name;
	string fat_name;
	float BP;
	float Colestrol;
	int age;
	float weight;
	float height;
public:
	void info()
	{
		cout << "Please Enter Your Name:\t";
		getline(cin,name);
		cout << "Enter your Father Name:\t";
		getline(cin,fat_name);
		cout << "Enter your Blood Pressurre:\t";
		cin>>BP;
		cout << "Enter your Collestrol Measurment:\t";
		cin>>Colestrol;
		cout << "Please enter your age:\t";
		cin >> age;
		cout << "Please enter your weight:\t";
		cin >> weight;
		cout << "Please enter your height:\t";
		cin >> height;
	}
};
class cal:public Data
{
	protected:
	string status;
	string eyeS;
	string statusC;
	string Hstatus;
	public:
	void Progress()
	{
		
		if ((BP < 120) || (Colestrol > 90))
		{
			status = "Very Low Blood Pressure";eyeS="Weak Eyesight";Hstatus = "Low Health Status";
		}
		else if ( (BP == 120) && (Colestrol==90))
		{
			status = "Very Good Blood Pressure";eyeS=" Eyesight Good";Hstatus = "Good Health Status";
		}
		else if ((BP > 120) || (Colestrol>90))
		{
			status = "High Blood Pressure";eyeS="Weak Eyesight";Hstatus = "Low Health Status";
		}
		if( (Colestrol==90) &&( (BP < 120) || (BP > 120) ) )  
		{
			statusC = "Normal Collestrol Level";Hstatus = "Low Health Status";
		}
		else if ( (Colestrol>90) && (BP == 120) )
		{
			statusC = "High Collestrol Level & Headache Problem";Hstatus = "Low Health Status";
		}
	}
};
class show:public cal
{
public:
		
	void Display()
	{
		cout << "-------------------------------------------------------------------------------------------"<<endl;
		cout << "\t\t\t\t\t Medical Certificate\t\n";
		cout << "-------------------------------------------------------------------------------------------"<<endl;
		cout << "\t\tDear " << name << " your details are:\n\n\n";
		cout << "Name \t\t\t" << name << "\n";
		cout << "Father Name \t\t" << fat_name << "\n";
		cout << "Blood Pressure \t\t" << BP << "\n";
		cout << "Age \t\t\t" << age << "\n";
		cout << "Heighet \t\t" << height << "\n";
		cout << "Weighet \t\t" << weight << "\n";
		cout << "Colestrol Level \t\t" << Colestrol << "\n";
		cout << "Eyesight \t\t" << eyeS << "\n";
		cout << "Status\t\t\t" << status << "\n\n";
		cout << "-------------------------------------------------------------------------------------------"<<endl;
		cout << "\t\t\t\t\t Health Status\t\n";
		cout << "-------------------------------------------------------------------------------------------"<<endl;
		cout << "\n\t\t\t\t\t" << Hstatus << "\n";
		cout << "Copyright by Health Department Ch Khuram's Hospital.\n";
		cout << "Online Generated Slip errors are accepted";
	}
};

class Major:public show
{
public:
		Major()
		{
		info();// Called for Getting Cerificate's Data 
		Progress();// Called for Procesing Data 
		Display();// Called for Showing Procesed Data in a Certificate's Order 
		cout << "\n\t\t\t\t\tThank you for giving your precious time\n";
		}
	
};

int main()
{	
	Major checkup;
				
}
