#include<iostream>

using namespace std;

int main()
{
	int num1=0, num2=1;
	int fibonacciSequence, sum = 0;;
	
	cout<<"The sum of even valued terms in the Fibonacci sequence whose values do not exceed four million is ";
	fibonacciSequence = num1 + num2;
	
	while(fibonacciSequence <= 4000000)
	{
		num1 = num2;
		num2 = fibonacciSequence;
		fibonacciSequence = num1 + num2;
		
		if(fibonacciSequence%2 == 0)
		{
			sum += fibonacciSequence;
		}
	}
	
//	do
//	{
//		num1 = num2;
//		num2 = fibonacciSequence;
//		fibonacciSequence = num1 + num2;
//		
////	if(fibonacciSequence%2 == 0)
//		{
//			int sum = 0;
//			sum += fibonacciSequence;
//		}
//	} while(fibonacciSequence <= 4000000);
	
	cout<<sum<<". ";

	
	return 0;
}
