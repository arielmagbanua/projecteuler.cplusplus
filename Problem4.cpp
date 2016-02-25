#include<iostream>
#include<conio.h>

using namespace std;

/**
Largest palindrome product
Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int reverse(int num);

int main(){
	
	int num1 = 0;
	int num2 = 0;
	int largestPalindrome = 0;
	
	for(int c=100; c<=999; c++){
		for(int n=100; n<=999; n++){
			num1 = c * n;
			num2 = reverse(num1);
			
			if(num1==num2 && largestPalindrome < num2){
				largestPalindrome = num2;
			}	
		}
	}
	
	cout << "The largest palindrome made from the product of two 3-digit numbers is " << largestPalindrome;
	
	getch();
	return 0;
}

int reverse(int num) {
    
    int reversed = 0;
    
	while(num > 0){
        reversed = reversed*10 + (num % 10);
        num = num/10;
	}
    
    return reversed;
}
