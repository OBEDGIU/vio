//the sum of three integers
#include<iostream>
using namespace std;

int main(){
	int num1,num2,num3,sum;
	//input the first num
	cout<<"enter the first number";
	cin>>num1;
	
	//input the second number
	cout<<"enter the second number";
	cin>>num2;
	
	//enter the third number
	cout<<"enter the third number";
	cin>>num3;
	
	//add the integers
	sum=num1+num2+num3;
	//display the result
	cout<<"the sum is : "<<sum;
	return 1;
}