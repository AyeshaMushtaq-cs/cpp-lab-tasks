#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number,evencount=0, oddcount=0;
	cout<<"enter the number:"<<endl;
	cin>>number;
	for(int i=1; i<=number; i++)
	{
	if(i%2==0)
	{
	evencount++;
		}	
		else	
		{
			oddcount++;
		}
	}
	cout<<"Total even numbers are"<<evencount<<endl;
	cout<<"Total odd numbers are:"<<oddcount<<endl;
	return 0;
}
