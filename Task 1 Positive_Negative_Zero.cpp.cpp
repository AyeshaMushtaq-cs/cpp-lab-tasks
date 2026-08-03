#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	cout<<"enter the number:";
	cin>>n;
	if(n>0)
	{
		cout<<"the number is positive:";
	}
	else if(n<0)
    {
	    cout<<"the number is negative:";
	}	
	else{
		cout<<"the number is zero:";
	}
	return 0;
}
