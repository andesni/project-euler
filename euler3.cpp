#include <iostream>
#include<math.h>


using namespace std;

int main()
{
	long long int number = 600851475143;
	long int  numberLarge;
	
	while (number % 2 == 0)
    {
        cout << 2 << " ";
        number = number/2;
    }
    
     for (int i = 3; i <= sqrt(number); i = i + 2)
    {
    	 while (number % i == 0)
        {
            cout << i << " ";
            number /= i;
        }
        
        do
        {
        	numberLarge = number;
	    }
		while(number > numberLarge);
        
    }
    
    cout << numberLarge << " ";
    
	return 0;
}
