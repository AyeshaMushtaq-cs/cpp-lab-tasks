#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
int num1,num2;
cout<<"enter two numbers:";
cin>>num1>>num2;

if(num1>num2){
	cout<<"num1 is greater";
	
}
else if(num2>num1){
	cout<<"num2is greater:";
}
else{
	cout<<"Both are equal";
}
	return 0;
}
