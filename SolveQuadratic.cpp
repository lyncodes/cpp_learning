#include <iostream>
#include <cmath>
int SolveQuadratic(double a, double b, double c,double& root1, double& root2){
	if(a == 0){
		return -c/b;
	}
	else if((b * b) < (4 * a *c)){
		std::cout<<"no real root founded. "<<std::endl;
		return 0;
	}
	else if((b * b) == (4 * a *c)){
		std::cout<<"two same roots founded , as follows: "<<std::endl;
		root1 = -b/(2 * a);
		root2 = root1;
		std::cout<<root1<<std::endl;
		std::cout<<root2<<std::endl;
		return 1;
	}
	else{
		std::cout<<"two different roots founded , as follows: "<<std::endl;
		root1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
		root2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
		std::cout<<root1<<std::endl;
		std::cout<<root2<<std::endl;
		return 2;
	}
}

int main(){

	double root1 = 0;
	double root2 = 0;

	int NumofRoot =  0;
	NumofRoot =  SolveQuadratic(1,-3,2,root1,root2);
	std::cout<<"1,-3,2 have "<<NumofRoot<<" root(s)."<<std::endl;
	std::cout<<'\n';
	
	NumofRoot =SolveQuadratic(1,-6,9,root1,root2);
	std::cout<<"1,-6,9 have "<<NumofRoot<<" root(s) "<<std::endl;
	std::cout<<'\n';

	NumofRoot =SolveQuadratic(1,-4,7,root1,root2);
	std::cout<<"1,-4,-7 have "<<NumofRoot<<" root(s) "<<std::endl;
	std::cout<<'\n';

	return 0;
}