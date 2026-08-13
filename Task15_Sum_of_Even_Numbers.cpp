#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	int sum=0;
	cout<<"enter the number:";
	cin>>number;
	for(int i=1; i<=number; i++)
	{
		if(i%2==0)
		{
		sum=sum+i;
		}
	}
cout<<"sum is"<<sum<<endl;
	
	return 0;
}
