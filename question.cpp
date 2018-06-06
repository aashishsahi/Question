#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	if(n%3==0 && n%5==0)
		cout<<"Acadview Learning";
	else if(n%3==0)
		cout<<"Acadview";
	else if(n%5==0)
		cout<<"Learning";
	return 0;
}
