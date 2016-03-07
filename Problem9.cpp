#include<iostream>
#include<conio.h>

using namespace std;

/**
Special Pythagorean triplet
Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main(){
	
	int sum = 1000;
	int product = 1;
	
	int a;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c ){
            	cout << "a=" << a << ", " << "b=" << b << ", " << "c=" << c << endl;
				product = a * b * c;	
			}
        }
    }
    
    cout << "Product: " << product;
	
	getch();
	return 0;
}
