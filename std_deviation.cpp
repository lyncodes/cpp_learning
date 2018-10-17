#include <iostream>
#include <vector>
#include <cmath>

double mean(std::vector<double> v){
	size_t size = v.size();
	double sum =0;
	for(int i = 0;i < size; i++)
	{
		sum += v[i];
	}
	return sum/size;
}
//function overloading.
double mean(std::vector<int> v){
	size_t size = v.size();
	double sum =0;
	for(int i = 0;i < size; i++)
	{
		sum += v[i];
	}
	return sum/size;
}


double std_deviation(std::vector<double> v, bool isSample=true){
	size_t size = v.size();
	double mean_value = mean(v);
	double sum = 0;
	for(int i = 0; i<size; i++){
		double diff = (v[i] - mean_value);
		sum += diff * diff;
	}
	

	if(isSample){
		return sqrt(sum/(size - 1));
	}else{
		return sqrt(sum/(size));
	}
}


int main(){
	double sample_devi = 0;
	std::vector<double> v={12,32,123,12,312,3.3};
	sample_devi = std_deviation(v);
	std::cout<<sample_devi<<std::endl;

	double population_devi = 0;
	population_devi = std_deviation(v,false);
	std::cout<<population_devi<<std::endl;	

	return 0;
}