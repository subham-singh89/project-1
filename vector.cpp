#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
	for(int i=0;i<(v.size());i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	vector<int> vac1;
	int element;
	for(int i=0;i<4;i++)
	{
		cout<<"Enter an element to add to the vector"<<endl;
		cin>>element;
		vac1.push_back(element);
	}
	display(vac1);
	return 0;
	
}
