#include <iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
	float c, product_abc;
	
	for(float a=1; a<500; a++)
	{
		for(float b=a+1; b>a; b++)
		{
		//	c = sqrt(pow(a,2) + pow(b,2));
		    c = sqrt((a*a) + (b*b));
			if(a+b+c==1000)
			{
				product_abc = a*b*c;
				cout<<"The product is "<<product_abc;
			}
		}
	}
	
	
	return 0;
}
