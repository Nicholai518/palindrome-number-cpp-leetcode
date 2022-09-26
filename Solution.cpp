#include <iostream>
using namespace std;


bool is_palindrome(int x) {
	// negative numbers cannot be palindromes
	if (x < 0) 
	{
		return false;
	}

	// this will hold the reverse value of x
	int reverse = 0;

	// copy is just a copy of x which is manipulated
	int copy = x;

	while (copy > 0) 
	{
		// find the rightmost digit
		int digit = copy % 10;

		// append digit to reverse
		reverse = reverse * 10 + digit;

		// remove the rightmost digit, divide copy by 10
		copy /= 10;
	}
	// compare reverse to x, if they're equal, return true. Otherwise, return false
	return reverse == x;
}

int main()
{
	cout << is_palindrome(121) << endl;
	cout << is_palindrome(-121) << endl;
	cout << is_palindrome(10) << endl;
	cout << is_palindrome(12321) << endl;
	return 0;
}
