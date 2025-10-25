#include <iostream>

using namespace std;

int main()
{
	int num;
	cout<< "Input an number:  ";
	cin>> num;
	
	if(num % 5 == 0)
    {
	  cout << "HIFive";
    }
    else if(num % 2 == 0)
    {
    	cout << "HIEven";
	}
	return 0;
}
	

