#include <iostream>
#include<string>

using namespace std;   

int main()
{
	double num1, num2, num3,avg;
	
	cout<<"Enter the numbers of which you want to find the average of: "<<endl;
	cin>>num1>>num2>>num3;
	
	avg =((num1+num2+num3)/3);
	
	cout<<"The average of three numbers is: "<<avg<<endl;
	
	
	return(0);
}



