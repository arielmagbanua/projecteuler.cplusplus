#include<iostream>
#include<conio.h>

using namespace std;

/**
Multiples of 3 and 5
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main(){
	
	int num = 0;
	int sum = 0;
	
	cout << "Enter a number: ";
	cin >> num;
	
	for(int c=0;c<num;c++){
		if(c%3==0 || c%5==0){
			sum+=c;
		}
	}
	
	cout << "The sum of all the multiples of 3 or 5 below " << num << " is " << sum;
	
	getch();
	return 0;
}
