/*
    !    SELF DESCRIPTIVE NUMBER
A self-descriptive number is an integer n in given base b is b digits long in which each digit at position p (the most significant digit being at position 0 and the least significant at position b – 1) counts how many times a digit p is in n. 
For example in base 10, 6210001000 is a self descriptive number. 

Explanation : 
It is 10 digit number in base 10. 
It has 6 at the position 0 and there are six 0s in 6210001000. 
It has 2 at the position 1 and there are two 1s in 6210001000. 
It has 1 at the position 2 and there is one 2s in 6210001000. 
It has 0 at the position 3 and there are zero 3s in 6210001000. 
It has 0 at the position 4 and there are zero 4s in 6210001000. 
It has 0 at the position 5 and there are zero 5s in 6210001000. 
It has 1 at the position 6 and there is one 6 in 6210001000. 
It has 0 at the position 7 and there are zero 7s in 6210001000. 
It has 0 at the position 8 and there are zero 8s in 6210001000. 
It has 0 at the position 9 and there are zero 9s in 6210001000.
*/
/*

* Description of Program : 
1 . Firstly all the digits get extracted from the outer loop and are stored in a variable b in each 
iteration. 
2 . Then in the inner loop there is a count on how many times number i (this i is ith index of outer loop)
is present in the string. 
3 . Finally that count is compared with the digit present at the ith index stored in variable b. 

*/

// C++ program to print 
// all self descriptive
// number below 100000000
#include <iostream>
using namespace std;

bool isSelfDescriptiveNumber(int num)
{
	// converting the integer
	// num to string
	string s = to_string(num);
	for (int i = 0; 
			i < s.size(); i++) 
	{

		// Extracting each digit
		// one by one from the 
		// string
		char temp_char = s.at(i);

		// converting the string 
		// (digit) into integer b
		// variable stores the digit
		// present at index 'i'
		int b = temp_char - '0';

		// counting how many 
		// times the particular 
		// digit occur in the
		// whole number "num"
		int count = 0;
		for (int j = 0;
				j < s.size(); j++) 
		{
			// converting string
			// char to integer
			int temp = s.at(j) - '0';

			// checking whether it is 
			// equal to the index 'i'
			// if it is then increment
			// the count .
			if (temp == i) 
			{
				count++;
			}
		}
		
		// If it is not equal
		// it return false .
		if (count != b)
			return false;
	}
	return true;
}

// Driver Code
int main()
{
	for (int i = 0; i < 100000000; i++) 
		if (isSelfDescriptiveNumber(i)) 
			cout << i << endl; 
}

// This code is contributed by 
// Manish Shaw(manishshaw1)