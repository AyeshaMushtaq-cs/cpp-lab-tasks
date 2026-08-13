#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, reverse=0, remainder;
	cout<<"Enter the number";
	cin>>number;
	while(number>0)
	{
		remainder=number%10;
		number=number/10;
		reverse=(reverse*10)+remainder;
	}
	cout<<"The reverse is:"<<reverse<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
