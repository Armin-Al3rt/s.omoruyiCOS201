#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int a, b, temp;
	
	srand(time(0));
	a = rand()%10;
	b = rand()%10;
	
	cout << "Before swap a = " << a << " b = " << b << endl;
	
	if (a<b) {
		temp = a;
		a = b;
		b = temp;
		cout << "After swap a = " << a << " b = " << b << endl;
	}
	
	int guessa, guessb;
	
	cout << "Hello broski, welcome to my number guessing game skii, can you guess a value of A between 0 and 9" <<endl;
	cin>>guessa;
	
	cout << "Can you also guess value of B between 0 and 9" <<endl;
	cin>>guessb;
	
	if (guessa == a && guessb == b) {
		cout << "You're a genius guesser brochaco";
	}
	
	else if (guessa == a || guessb == b) {
		cout << "You're tried a tiny bit g, give it another try bro ";
	}
	else {
		cout << "Dude,you're wrong,Try again broski'" <<endl;
	}
	
}
