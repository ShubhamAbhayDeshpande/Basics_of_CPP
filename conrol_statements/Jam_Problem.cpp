#include <iostream>
#include <string>

using namespace std;

int main()
{
	char plan ; 
	int jam_num;
	int jams;
	int total_amt;
	
	cout<<"How many jams have you perchased? "<<endl;
	cin>>jam_num;
	
	cout<<"Choose the plan yu have have taken. Make sure you enter the right choice"<<endl;
	cin>>plan;
	
	if (plan == 'A' || plan == 'a')
	{
		cout<<"You get 2 jams per month and additional jam costs $5 each. With that your total cost comes to: "<<endl;
		
		jams = jam_num-2;
		total_amt = (jams*5)+8;
		
		cout<<"Your total cost is: "<<total_amt<<" $"<<endl;
	}
	
	else if(plan == 'B' || plan == 'b')
	{
		cout<<"You get 4 jams per month and additional jam costs $4 each. With that your total cost comes to: "<<endl;
		
		jams = jam_num-4;
		total_amt = (jams*4)+12;
		
		cout<<"Your total cost is: "<<total_amt<<" $"<<endl;
	}
	
	else if(plan == 'C' || plan == 'c')
	{
		cout<<"You get 6 jams per month and additional jam costs $3 each. With that your total cost comes to: "<<endl;
		
		jams = jam_num-6;
		total_amt = (jams*3)+15;
		
		cout<<"Your total cost is: "<<total_amt<<" $"<<endl;
	}
	
	else
	{
		cout<<"Enter a valid input and try again."<<endl;
	}
	
	return 0;
}
