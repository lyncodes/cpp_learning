#define PI 3.141592653
#include <iostream>
#include <cstdlib>
#include <vector>
#include<iomanip>
#include <cmath>

using namespace std;


std::vector<double> randuniform(int n){
	std::vector<double> v={};
	for(int i = 0;i < n;i++){
		v.push_back(((double)rand()/RAND_MAX));
	}
	return v;
}

std::vector<double> randnorm(int n){
	std::vector<double> uniform={};
	uniform = randuniform(n + 1);
	size_t size = uniform.size();
	std::vector<double> norm={};
	for(int i =0;i < size;i++){
		double n1 = sqrt(-2 * log(uniform[i])) * cos(2 * PI * uniform[i + 1]);
		double n2 = sqrt(-2 * log(uniform[i + 1])) * sin(2 * PI * uniform[i + 1]);
		norm.push_back(n1);
		norm.push_back(n2);
	}
	return norm;
}


int main(){
	std::vector<double> uni={};
	uni = randuniform(300);
	for(int i=0;i<uni.size();i++){
		std::cout<<setprecision(20)<<uni[i]<<std::endl;
	}
	std::cout<<"============================================="<<std::endl;
	std::vector<double> norm={};
	norm = randnorm(300);
	for(int i=0;i<norm.size() - 1;i++){
		std::cout<<setprecision(20)<<norm[i]<<std::endl;
	}
	return 0;
}
