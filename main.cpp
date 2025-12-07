#include <iostream>
using namespace std;
class Division{
	public:
	void divid(int a ,int b ){
	  	cout<<a/b;	
	}
	public:
   void divid(int a ,int b , int c ){
   	 	cout<<a/b/c ;
   }
};
 int main(){
 	Division d1 , d2;
 	d1.divid(15,7);
 	
 	d2.divid(23,45,67);
 }
