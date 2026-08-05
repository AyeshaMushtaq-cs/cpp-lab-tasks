#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1, num2;
	char op;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	cout<<"Enter an operator(+,-*,/):";
	cin>>op;
	if(op=='+'){
		cout<<"The result is:"<<num1+num2;
	}
	else if(op=='-'){
		cout<<"The result is"<<num1-num2;
	}
	else if(op=='*')
	{
		cout<<"The result is"<<num1*num2;
	}
	else if(op=='/'){
		cout<<"The result is"<<num1/num2;	
	}	
	else{
		cout<<"You entered an invalid operator:";
	}
		
	return 0;
}
