#define PI 3.1415926535897932
#define E 2.718288284 
#include <iostream>
#include <cmath>
using namespace std;

int loop_fibo(int n){

	int first = 1;
	int second = 1;
	int result = 2;
	if(n == 1 || n ==2){
		return 1;
	}
	for(int i = 1; i < n -2; i++){
		first = second;
		second = result;
		result = first + second;
	}
	return result;
}
int main()
{
	cout<<loop_fibo(20);	
	return 0;
}