#include<iostream>
using namespace std;
void Swap(int &,int &);
int main()
{
	int num1,num2;
	cout<<"Enter Number 1: ";
	cin>>num1;
	cout<<"Enter Number 2: ";
	cin>>num2;
	cout<<endl<<"------Before Swapping------"<<endl;
	cout<<"Number 1 = "<<num1<<endl;
	cout<<"Number 2 = "<<num2<<endl;
	Swap(num1,num2);
	cout<<endl<<"------After Swapping------"<<endl;
	cout<<"Number 1 = "<<num1<<endl;
	cout<<"Number 2 = "<<num2<<endl;
	return 0;
}
void Swap(int & a,int & b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
