#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(6);
	
	for(int i=0;i<6;i++){
		cin>>v[i];
	}
	cout<<endl;
	
	cout<<"enter x:";
	int x;
	cin>>x;
	
	int occurence;
	for(int i=0;i<v.size();i++){
		if(v[i]==x){
			occurence=i;
		}	
	}
	cout<<occurence;
	
	
	
    
}

