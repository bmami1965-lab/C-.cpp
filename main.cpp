#include <iostream>
using namespace std;
class Division{
	public:
	void divid(int a ,int b ){
	  	cout<<a/b;	
	}
   void multiply(int a ,int b , int c ){
   	 	cout<<a/b/c ;
   }
};
 int main(){
 	Division d1;
 	d1.divid(15,7);
 }
