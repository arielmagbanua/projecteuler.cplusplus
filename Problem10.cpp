#include<iostream>
#include<conio.h>
#include<stdint.h>

using namespace std;

/**
Summation of primes
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

bool isPrime(uint64_t num);

int main(){
	
	uint64_t limit = 2000000;
	uint64_t sum = 0;
	
	for(uint64_t n=2;n<limit;n++){
		if(isPrime(n)){
			sum += n;
		}
	}
	
    cout << "Sum: " << sum;
    
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
