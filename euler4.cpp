#include<iostream>

using namespace std;

bool isItPalindrome(int number) { // Determine if a given number is a palindrome or not
    int reverse=0, digit;
    int copyOfNumber = number;
    
    do 
	{
        digit = copyOfNumber % 10;
        reverse = reverse*10 + digit;
        copyOfNumber /= 10;
    } while (copyOfNumber != 0);
    
	return (reverse == number);
    }
    
    
int main()
{
	int largestPalindrome = 0;
    for (int i=999; i>99; i--) 
	{
        for (int j=999; j>99; j--) 
		{
            if (i < largestPalindrome/1000) 
			{
                // std::cout << "Any value lower than " << i << " will, when multiplied by 999, never exceed the largest palindrome (" << largest_palindrome << ")."<< '\n';
                cout << "No larger palindromes possible." << '\n';
                i = 0;
                j = 0;
            } else {
                int product = i*j;
                if (isItPalindrome(product) && product > largestPalindrome) {
                    cout << "Found palindrome! " << i << " * " << j << " == " << product << '\n';
                    largestPalindrome = product;

                    // More optimalization (no product of the current iteration of i can be larger than the current palindrome, so skip to next iteration)
                    j = 0;
                }
            }
        }
    }
	
	return 0;
}
