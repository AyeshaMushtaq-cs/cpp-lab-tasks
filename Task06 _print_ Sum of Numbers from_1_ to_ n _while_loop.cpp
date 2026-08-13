#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int n;
int i=1;
int sum=0;
cout<<"enter the number:";
cin>>n;
while(i<=n)
{
	sum=sum+i;
	i++;
}
cout<<"sum is:"<<sum<<endl;
	return 0;
}
