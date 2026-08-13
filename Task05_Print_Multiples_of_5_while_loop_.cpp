#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int n;
cout<<"enter the number:";
cin>>n;
int i=1;
while(i<=n)
{
	if(i%5==0)
	{
		cout<<i<<endl;
	}
	i++;
}



	return 0;
}
