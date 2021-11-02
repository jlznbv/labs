#include <iostream>
#include <cmath>

int main(){
	setlocale(LC_ALL,"Russian");

	int Z;
	int k = 0;

	float *p_a = new float[10] {1, -2, sqrt(9), 43/23, 3.3, 6,7,8,9,10};
	
	std::cout<<"Введите Z: ";
	std::cin>>Z;
	

	for(int i = 0; i<10; i++){
		if(Z>p_a[i]){
			p_a[i] = Z;
			k++;
		}
	}
	for(int i = 0; i<10;i++){
		std::cout<<i+1<<" "<<p_a[i]<<std::endl;
	}
	std::cout<<k<<std::endl;

	return 0;
}

