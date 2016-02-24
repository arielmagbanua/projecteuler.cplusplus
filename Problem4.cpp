#include<iostream>
#include<conio.h>
#include<sstream>

using namespace std;

/**
Largest palindrome product
Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
int main(){
	
	int awts = 12312;
	string result;
	ostringstream convert;
	
	convert << awts;
	
	result = convert.str();
	
	cout << result;
	
	getch();
	return 0;
}
