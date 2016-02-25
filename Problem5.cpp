#include<iostream>
#include<conio.h>

using namespace std;

/**
Smallest multiple
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
int main(){
	
	int smallest = 0;
	int numberToTest = 200000000;
	
	while(smallest==0){
		
		int c = 1;
		
		for(;c<=20;c++){
			if(numberToTest%c != 0){
				break;
			}
		}
		
		if(c >= 20){
			smallest=numberToTest;
		}
		
		numberToTest++;
	}
	
	cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is " << smallest;
	
	getch();
	return 0;
}
