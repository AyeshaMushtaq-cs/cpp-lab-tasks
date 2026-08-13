#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int num1, num2, gcd;
cout<<"Enter the number:";
cin>>num1>>num2;
for(int i=1; i<=num1;i++)
{
	if(num1%i==0&&num2%i==0)
	{
		gcd=i;
	}
}
cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
	return 0;
}

