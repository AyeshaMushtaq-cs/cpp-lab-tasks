#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=1;
	int count=0;
	int n;
	cout<<"enter the number:";
	cin>>n;
	while(i<=n)
	{
		if(i%2==1){
		count++;
		
	}
		i++;
	}
	cout<<"Total odd numbers are:"<<count<<endl;
	
	
	
	
	return 0;
}
