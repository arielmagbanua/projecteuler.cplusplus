#include<iostream>
#include<conio.h>

using namespace std;

/**
Largest prime factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int main(){
	
	int num = 0;
	int largest = 0;
	int decreasing = 0;
	int refNum = 0;
	
	cout << "Enter a number: ";
	cin >> num;
	
	decreasing = num;
	refNum = num;
	
	/*
	do{
		
		--decreasing;
		
		int n = decreasing;
		
		if(num%decreasing==0){
			
			largest = decreasing;
			
			if(decreasing>largest){
				largest=decreasing;
			}
		}
		
	} while(decreasing>0);
	*/
	
	
	while(decreasing>0){
		
		--decreasing;
		
		if(decreasing>0 && refNum%decreasing==0){
			
			if(largest<decreasing){
				largest = decreasing;
			}
			
			//refNum = decreasing;
			
			cout << decreasing << " ";
		}
	}
	
	cout << "the largest prime factor of the number " << num << " is " << largest;
	
	getch();
	return 0;
}

function 
