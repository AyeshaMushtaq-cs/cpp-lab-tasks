#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=2;
	int count=0;
	int n;
	cout<<"enter the number:";
	cin>>n;
	while(i<=n)
	{
		if(i%2==0){
			cout<<i<<endl;
			count++;
		}
		i++;
	}
	cout << "Total even numbers = " << count << endl;
	return 0;
}
