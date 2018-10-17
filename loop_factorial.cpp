#define PI 3.1415926535897932
#define E 2.718288284 
#include <iostream>
#include <cmath>
using namespace std;


int factorial(int n){
	int i = 1;
	int result = 1;
	while(i <= n){
		result *= i;
		i++;
	}
	return result;
}

int main()
{

	cout<<factorial(5);
	
	return 0;
}