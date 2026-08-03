#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
int year;
cout<<"enter the year:";
cin>>year;
if(year%4==0){
	cout<<"It is leap year:";
	
}
else{
	cout<<"It is not leap year:";
}
	
	return 0;
}
