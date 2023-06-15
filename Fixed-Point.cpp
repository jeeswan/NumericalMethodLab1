#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return pow(x+10,0.25);
}
int main(){
	double x,x_new,Es=0.05,temp,Error;
	int iteration=0;
	cout<<"Enter the initial guess : ";
	cin>>x;
	cout<<endl;
	if(f(x)==0){
		cout<<x<<"is the required root."<<endl;
	}else{
			do{
		temp=x;
		x_new=f(x);
		x=x_new;
		Error=abs((x_new-temp)/x_new);
		iteration++;
	}while(Error>Es);
	}
	cout<<x_new<<" is the required solution"<<endl;
	cout<<"The process completed in "<<iteration<<" iterations."<<endl;
	cout<<"The functional value at "<<x_new<<" is "<<f(x_new)<<endl;
	return 0;
}
