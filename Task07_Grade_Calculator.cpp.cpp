#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int marks;
cout<<"enter the matks:";
cin>>marks;
if(marks>=90&&marks<100){
	cout<<"A";
}
else if(marks>=80&&marks<89){
	cout<<"B";
}
else if(marks>=70&&marks<79){
	cout<<"C";
	
}
else if(marks>=60&&marks<69)
	{
		cout<<"D";
	}
	else{
		cout<<"F";
	
	
	
	return 0;
}
