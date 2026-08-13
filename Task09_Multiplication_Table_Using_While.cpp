#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=1;
	int n;
	cout<<"enter the number:";
	cin>>n;
	while(i<=n)
	{
	cout<<n<<"x"<<i<<"="<<n*i<<endl;
	i++;
	}
	
	return 0;
}
