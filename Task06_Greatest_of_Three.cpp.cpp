#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
int num1,num2,num3;
cout<<"enter three numbers:";
cin>>num1>>num2>>num3;

if(num1>num2&&num1>num3){
	cout<<"Num1 is greater";
	
}
else if(num2>num1&&num2>num3){
	cout<<"Num2is greater:";
}
else if(num3>num2&&num3>num1){
	cout<<"Num3 is greater";
}

else{
	cout<<"All are equal";
}
	return 0;
}
