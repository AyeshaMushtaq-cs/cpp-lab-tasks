#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
int age;
cout<<"enter the age:";
cin>>age;
if(age>18)
{
	cout<<"Eligible to vote:";
}
else
{
	cout<<"Not eligible";
}
	return 0;
}
