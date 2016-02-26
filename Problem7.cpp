#include<iostream>
#include<conio.h>

using namespace std;

/**
10001st prime
Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?
*/

bool isPrime(int num);

int main(){
	
	int primeCounter = 0;
	int counter = 2;
	
	while(true){
		
		if(isPrime(counter)){
			
			++primeCounter;
			
			if(primeCounter==10001){
				break;
			}
	
		}
		
		++counter;
	}
	
	cout << "The 10001st prime number is " << counter;
	
	
	getch();
	return 0;
}

bool isPrime(int num){
	
	for(int n=2;n<num;n++){
		
		if(num%n==0){
			return false;
		}
		
	}
	
	return true;
}
