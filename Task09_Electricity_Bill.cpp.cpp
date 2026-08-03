#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int bill, unit;
	cout<<"enter the unit:";
	cin>>unit;
	if(unit<=100){
	bill=unit*10;
	}
	else if(unit>=101&&unit<300)
	{
	bill=unit*15;
		
	}
	else{
	bill=unit*20;
	
	}
	cout<<"the bill is"<<bill;
	
	return 0;
}
