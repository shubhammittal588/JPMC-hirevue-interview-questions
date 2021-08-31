

// This was an interesting problem to solve this problem I choose C++, so first I input the integer and then i defined a seperate
// boolean function which is recursive in nature, then i wrote an if else statement whoch would return "true" if n=1 and return "false"
// if it's percentile by 2 is not equivalent to 0 or n is equal to 0 and return the same function dividing n by 2. this would continue to 
// happen until one of the if else statement gets satisfied. Then i wrote if else statement in the main function  that if the
// boolean function returns "true", it would print "true" and "false" if it returns False.

#include <bits/stdc++.h>
using namespace std;

// Function which checks whether a
// number is a power of 2
bool powerOf2(int n)
{
	// base cases
	// '1' is the only odd number
	// which is a power of 2(2^0)
	if (n == 1)
	return true;
	
	// all other odd numbers are not powers of 2
	else if (n % 2 != 0 || n ==0)
	return false;
	
	// recursive function call
	return powerOf2(n / 2);
}

// Driver Code
int main()
{
	int n;
    cin >> n;

	if (powerOf2(n) == 1)
	cout << "true" << endl;

	else cout << "false" << endl;

}

