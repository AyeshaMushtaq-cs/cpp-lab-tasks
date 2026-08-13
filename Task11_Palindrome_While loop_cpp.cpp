#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


    int number, remainder,original, reverse=0;
    cout<<"Enter he number:";
    cin>>number;
    original=number;
    while(number>0)  
{
	remainder=number%10;
	number=number/10;
	reverse=(reverse*10)+remainder;
}
cout<<"the reverse is:"<<reverse<<endl;
if(original==reverse)
{
	cout<<"Palindrome";
}
else
{
	cout<<"Not Palindrome";
}




	return 0;
}
