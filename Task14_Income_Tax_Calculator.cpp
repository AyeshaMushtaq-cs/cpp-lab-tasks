#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

float salary;
float tax;
cout<<"Enter the salary:";
cin>>salary;
if(salary<50000)
{
	cout<<"Not tax:";
}
else if(salary>=50001&&salary<=100000)
{
	tax=salary*0.05;
	cout<<"The tax is:"<<tax;
}
else if(salary>=100001&&salary<=200000)
{
	tax=salary*0.10;
	cout<<"The tax is :"<<tax;
}
else{
	tax=salary*0.15;
	cout<<"Thetax is :"<<tax;
}


	return 0;
}
