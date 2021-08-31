

// This was an nice problem to solve this problem I choose C++, so first I input the integer and simply square root the function. 
// And, then I defined a seperate boolean function to check if N is equivalent to the integer or not. So, This function will return 
// the value "false" if N is not equivalent to any integer or returns "true" if it does. And, then I wrote an if else statement
// in the main function and passed the boolean function, so now if the boolean function returns true, if statement will print "true" else
// it would print "false".

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Function to check if N is
// equivalent to an integer
bool isInteger(double N)
{

	// Convert float value
	// of N to integer
	int X = N;

	double temp2 = N - X;

	// If N is not equivalent
	// to any integer
	if (temp2 > 0) {
		return false;
	}
	return true;
}

// Driver Code
int main()
{
	double a,N;
	cin >> a;
    N = sqrt(a);

	if (isInteger(N)) {

		cout << "true";
	}
	else {

		cout << "false";
	}

	return 0;
}

