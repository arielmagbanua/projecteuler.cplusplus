#include<iostream>
#include<conio.h>
#include<stdint.h>

using namespace std;

/**
Largest prime factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

bool isPrime(uint64_t num);

int main(){
	
	uint64_t num = 0;
	uint64_t largest = 0;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if(isPrime(num)){
		largest = num;
	}
	else {
		
		cout << endl << "Prime Factors are: ";
		
		for(int n=2;n<=num;n++){
		
			if(num%n==0){
				//determine if this number is prime
				if(isPrime(n)){
					largest=n;
					cout << n << " ";
				}
			}
		}
	}
	
	cout << endl << "The largest prime factor of the number " << num << " is " << largest;
		
	getch();
	return 0;
}

bool isPrime(uint64_t num){
	
	for(uint64_t n=2;n<num;n++){
		
		if(num%n==0){
			return false;
		}
		
	}
	
	return true;
}

function 
