#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int matric, inter, entry;
cout<<"Enter Matric Percentage:" ;
cin >> matric;

cout<<"Enter Intermediate Percentage: ";
cin >> inter;

cout<<"Enter Entry Test Percentage: ";
cin >> entry;
if(matric>=60&&inter>=60&&entry>=70)
{
	cout<<"Eligible for admiision:";
}
else
{
	cout<<"Not eligible:";
}


	return 0;
}
