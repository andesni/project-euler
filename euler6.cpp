#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int square, squaredSum, difference, sumOfSquares = 0, sum = 0;
	
	for(int i=1; i <= 100; i++)
	{
		square = pow(i,2);
		sumOfSquares += square;
		
		sum += i;
		squaredSum = pow(sum,2);
		
	}
	difference = squaredSum - sumOfSquares;
	
	cout<<"The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is "<<endl<<difference;
	
	return 0;
}
