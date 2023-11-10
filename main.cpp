#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	int even_main=0;
	int even_second=0;
	int odd_main=0;
	int odd_second=0;
	for(int i=0;i<3;i++)
	{
		if(a[i][i]%2==0)
		{
			even_main+=1;
		}
		else
		{
			odd_main+=1;
		}
		if(a[i][3-i-1]%2==0)
		{
			even_second+=1;
		}
		else
		{
			odd_second+=1;
		}
	}
	int result_even=even_main+even_second;
	int result_odd=odd_main+odd_second;
	cout<<"Even elements:"<<result_even<<endl;
	cout<<"Odd elements:"<<result_odd<<endl;
	
	return 0;
}
