 #include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv)
 {
	
	int sum = 0;
	int sum_multiples, sum_multiples_of_5 = 0, sum_multiples_of_3 = 0;
	
	cout<<"This program will find the sum of all the multiples of 3 or 5 below 1000."<<endl;
	
/*	for (int i=1; i<=1000; i++)
	{
		if ((i%3 == 0) || (i%5 == 0))
		{
			sum += i;
		}
		
	}
*/	
	for(int i=3; i<=1000; i+3)
	{
		sum_multiples_of_3 += i;
	}
	for(int k=5; k<=1000; k+5)
	{
		sum_multiples_of_5 += k;
	}
	
	sum_multiples = sum_multiples_of_5 + sum_multiples_of_3;
	cout<<"The sum of all the multiples of 3 or 5 below 1000 is "<<sum_multiples;
	
	return 0;
}
