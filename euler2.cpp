#include<iostream>

using namespace std;

int main()
{
	int num1=0, num2=1;
	int fbseq;
	
	cout<<"The sum of even valued terms in the Fibonacci sequence whose values do not exceed four million is ";
	fbseq = num1 + num2;
	
	while(fbseq <= 4000000)
	{
		num1 = num2;
		num2 = fbseq;
		fbseq = num1 + num2;
		
		if(fbseq%2 == 0)
		{
			int sum = 0;
			fbseq += sum;
		}
	}
	
	cout<<fbseq<<". ";

	
	return 0;
}
