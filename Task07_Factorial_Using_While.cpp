#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int i=1;
	int fact=1;
	cout<<"Enter the number:";
	cin>>n;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"factorail is:"<<fact;
	return 0;
}
