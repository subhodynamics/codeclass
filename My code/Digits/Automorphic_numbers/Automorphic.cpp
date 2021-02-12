/*
* AUTOMORPHIC NUMBERS

Given a number N, the task is to check whether the number is Automorphic number or not.

A number is called Automorphic number if and only
if its square ends in the same digits as the number itself.

*/

/* 
! ALGORITHM

1. Store the square of given number.
2. Loop until N becomes 0 as we have to match 
   all digits with its square.
    i) Check if (n%10 == sq%10) i.e. last digit 
       of number = last digit of square or not
        a) if not equal, return false.
    ii) Otherwise continue i.e. reduce number and 
        square i.e. n = n/10 and sq = sq/10;
3- Return true if all digits matched.
*/

//! C++ program to check if a number is Authomorphic

#include <iostream> 
using namespace std; 

// Function to check Automorphic number 
bool isAutomorphic(int N) 
{ 
	// Store the square 
	int sq = N * N; 

	// Start Comparing digits 
	while (N > 0) 
    { 
        // Return false, if any digit of N doesn't 
        // match with its square's digits from last 
        if (N % 10 != sq % 10) 
        return false; 

        // Reduce N and square 
        N /= 10; 
        sq /= 10; 
	} 

	return true; 
} 

// Driver code 
int main() 
{ 
    int N;
	cout<<"Enter A number to check \t"; cin>>N; 

	isAutomorphic(N) ? cout << "Automorphic": cout << "Not Automorphic"; 

	return 0; 
} 
