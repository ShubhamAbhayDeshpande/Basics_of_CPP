#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int powResult = pow(2,3); //Power function in CPP
    int sqrtResult= sqrt(25); // Square result in CPP
    int ceilResult = ceil(4.2); // celling function
    int floorResult = floor(4.2); //Floor function 
    float log_2 = log2(512); //Log to the base 2 of the given number

    cout<<"2^3 is: "<<powResult<<endl;
    cout<<"Squreroot of 25"<<sqrtResult<<endl;
    cout<<"Celling function for the 4.2 is: "<<ceilResult<<endl;
    cout<<"Floor function for the 4.2 is: "<<floorResult<<endl;
    cout<<"log to the base 2 of 512 is: "<<log_2<<endl;

    return 0 ;
}