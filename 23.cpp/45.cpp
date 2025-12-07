#include <iostream>
using namespace std;
class product{
	public:
	void multiply(int a ,int b ){
	  	cout<<a*b;	
	}
   void multiply(int a ,int b , int c ){
   	 	cout<<a*b*c ;
   }
};
 int main(){
 	product p1;
 	p1.multiply (15,4,6);
 }
