#include <iostream>
#include <cstdlib>
#include <vector>
#include<iomanip>

using namespace std;
std::vector<double> randuniform(int n){
	std::vector<double> v={};
	for(int i = 0;i < n;i++){
		v.push_back(((double)rand()/RAND_MAX));
	}
	return v;
}
int main(){
	std::vector<double> v={};
	v = randuniform(30);
	for(int i=0;i<v.size();i++){
		std::cout<<setprecision(20)<<v[i]<<std::endl;
	}	
	return 0;
}
