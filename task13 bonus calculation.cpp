#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int age;
	float bonus,salary;
	char gender;
	cout<<"enter the age";
	cin>>age;
	cout<<"enter the salary:";
	cin>>salary;
	cout<<"enter the gender";
	cin>>gender;
	if((gender=='M'||gender=='F')&&age>40&&salary>30000)
	{
		bonus=salary*0.20;
			cout<<"the bonus is :"<<bonus;
	}
	else if(gender=='M'&&age<40&&salary>20000)
	{
		bonus=salary*0.15;
			cout<<"the bonus is :"<<bonus;
	}
	else if(gender=='F'&&age<30&&salary>20000)
	{
		bonus=salary*0.10;
		cout<<"the bonus is :"<<bonus;
	}
	else{
		cout<<"no bonus";
	}
	return 0;
}
