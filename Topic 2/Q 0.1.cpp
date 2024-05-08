// WAP to ceate simpale calculator using class

#include <iostream>
using namespace std;

class Calculator{
	public:
		int num1,num2;
     //		Addition of two numbers
		add(){
			cout<<"Enter Number 1:";
			cin>>num1;
			cout<<"Enter Number 2:";
			cin>>num2;
			cout<<"Addition of two number :"<<num1+num2;
			cout<<"\n";
		}
		
		//		Subtraction of two numbers
			sub(){
			cout<<"\nEnter Number 1:";
			cin>>num1;
			cout<<"Enter Number 2:";
			cin>>num2;
			cout<<"Subtraction of two number :"<<num1-num2;
			cout<<"\n";
		}
		
		//		Multiplication of two numbers
			mul(){
			cout<<"\nEnter Number 1:";
			cin>>num1;
			cout<<"Enter Number 2:";
			cin>>num2;
			cout<<"Multiplication of two number :"<<num1*num2;
			cout<<"\n";
		}
		
		//		divition of two numbers
			div(){
			cout<<"\nEnter Number 1:";
			cin>>num1;
			cout<<"Enter Number 2:";
			cin>>num2;
			cout<<"Divition of two number :"<<num1/num2;
			cout<<"\n";
	    }
	
	     //		Modules of two numbers
			module(){
			cout<<"\nEnter Number 1:";
			cin>>num1;
			cout<<"Enter Number 2:";
			cin>>num2;
			cout<<"Modules of two number :"<<num1%num2;
			cout<<"\n";
		}
		
		
};



main(){
	Calculator obj;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	obj.module();
	}
