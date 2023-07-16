#include <iostream>
#include <fstream>

int main()
{
	char c; 
	std::fstream FILE("AUC_data.csv");
	double arr_x[351];
	double arr_y[351];
	double AUC = 0.0;
	
	for (int i = 0; i < 351; i++)
	{
		FILE >> arr_x[i] >> c >> arr_y[i];
	}
	
	for (int i = 0; i < 350; i++)
	{
		AUC += (arr_y[i] + arr_y[i + 1]) * (arr_x[i + 1] - arr_x[i]) / 2; 
	}
	std::cout << "The area under curve using trapezoidal rule is: " <<AUC << std::endl;
	std::cin.get();
	return 0;
}