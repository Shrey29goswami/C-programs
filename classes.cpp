#include<iostream>
using namespace std;
 class employee{
 	private:
 		int a ,b, c;
 	public:
	 int d, e;
	 void setdata(int a1, int b1, int c1);
	 void getdata(){
	 	cout<<"this is the value of a : "<<a<<endl;
	 	cout<<"this is the value of b : "<<b<<endl;
	 	cout<<"this is the value of c : "<<c<<endl;
	 	cout<<"this is the value of d : "<<d<<endl;
	 	cout<<"this is the value of e : "<<e<<endl;
		 }
 };
 void employee :: setdata( int a1, int b1, int c1){
 a =a1;
 b=b1;
 c=c1;
}

int main(){
	employee shrey;
	shrey.d= 24;
	shrey.e= 45;
	shrey.setdata(46, 45, 44);
	shrey.getdata();
	return 0;
}
 
