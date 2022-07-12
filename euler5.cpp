#include<iostream>

using namespace std;

int main()
{
	
    for(int smallestdiv = 1; smallestdiv!=0; smallestdiv++)
	{
        if (smallestdiv%1==0 && smallestdiv%2==0 && smallestdiv%3==0 && smallestdiv%4==0 && smallestdiv%5==0 
		&& smallestdiv%6==0 && smallestdiv%7==0 && smallestdiv%8==0 && smallestdiv%9==0 && smallestdiv%10==0
		&& smallestdiv%11==0 && smallestdiv%12==0 && smallestdiv%13==0 && smallestdiv%14==0 && smallestdiv%15==0 
		&& smallestdiv%16==0 && smallestdiv%17==0 && smallestdiv%18==0 && smallestdiv%19==0 && smallestdiv%20==0)
	{
            cout << smallestdiv << endl;
            return 0;
        }
    }

	
	return 0;
}
