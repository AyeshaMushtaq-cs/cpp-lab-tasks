#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int number;	
	bool Prime = true;
    cout<<"enter  the number";
    cin>>number;
    if (number <= 1)
{
    Prime = false;
}
else
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            Prime = false;
            break;
        }
    }
}

if (Prime)
{
    cout << "Prime";
}
else
{
    cout << "Not Prime";
}	
	return 0;
}
