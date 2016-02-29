#include<iostream>
#include<conio.h>

using namespace std;

/**
Sum square difference
Problem 6

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
int main(){
	
	int sumOfTheSquares = 0;
	int squareOfTheSum = 0;
	int difference = 0;
	
	for(int c=1;c<=100;c++){
		int squared = c * c;
		sumOfTheSquares+=squared;
		squareOfTheSum+=c;
	}
	
	squareOfTheSum = squareOfTheSum * squareOfTheSum;
	
	difference = squareOfTheSum - sumOfTheSquares;
	
	cout << "Difference: " << difference;
	
	getch();
	return 0;
}
