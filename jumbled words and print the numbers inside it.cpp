
#include <bits/stdc++.h>
using namespace std;

// Function to convert the jumbled
// string into digits
string finddigits(string s)
{

	// Strings of digits 0-9
	string num[]
		= { "zero", "one", "two",
			"three", "four", "five",
			"six", "seven", "eight", "nine" };

	// Initialize vector
	vector<int> arr(10);

	// Initialize answer
	string ans = "";

	// Size of the string
	int n = s.size();

	// Traverse the string
	for (int i = 0; i < n; i++) {
		if (s[i] == 'z')
			arr[0]++;
		if (s[i] == 'w')
			arr[2]++;
		if (s[i] == 'g')
			arr[8]++;
		if (s[i] == 'x')
			arr[6]++;
		if (s[i] == 'v')
			arr[5]++;
		if (s[i] == 'o')
			arr[1]++;
		if (s[i] == 's')
			arr[7]++;
		if (s[i] == 'f')
			arr[4]++;
		if (s[i] == 'h')
			arr[3]++;
		if (s[i] == 'i')
			arr[9]++;
	}

	// Update the elements of the vector
	arr[7] -= arr[6];
	arr[5] -= arr[7];
	arr[4] -= arr[5];
	arr[1] -= (arr[2] + arr[4] + arr[0]);
	arr[3] -= arr[8];
	arr[9] -= (arr[5] + arr[6] + arr[8]);

	// Print the digits into their
	// original format
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < arr[i]; j++) {
			ans += (char)(i + '0');
		}
	}

	// Return answer
	return ans;
}

// Driver Code
int main()
{
	string s = "owoftnuoer";
	cout << finddigits(s) << endl;
}

This was such a good problem i loved solving it. So first i took the input
of the string using getline method and then i defined a function. then i defined 
an array in which i wrote all the name of the number from 1-9. Now it
comes the main logic i just compared the alphabet that can come on a 
place using if statements in the for loop which would 
check the alphabets in the string and then i updated the variable of the vector
and simply printed the digits in the original format and return the answer