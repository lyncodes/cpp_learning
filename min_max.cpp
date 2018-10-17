#include <iostream>
#include <vector>

double min(std::vector<double> v){
	double temp = v[0];
	size_t size = v.size();
	double temp2 = 0;
	for(int i = 1;i < size;i++){
		if(temp < v[i]){
			temp2 = temp;
		}else{
			temp = v[i];
		}
	}
	return temp;
}
double max(std::vector<double> v){
	double temp = v[0];
	size_t size = v.size();
	double temp2 = 0;
	for(int i = 1;i < size;i++){
		if(temp > v[i]){
			temp2 = temp;
		}else{
			temp = v[i];
		}
	}
	return temp;
}

int main(){
	std::vector<double> v = {321.3,3213.213,21.321,33.1,4123.1,21,3};

	std::cout<<min(v)<<std::endl;
	std::cout<<max(v)<<std::endl;

	return 0;
}