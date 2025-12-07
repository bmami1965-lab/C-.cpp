#include <iostream>
using namespace std;
class animal{
	public:
		void sound (){
		 cout <<"animal making sound"<<endl;
		}
};
class dog:public animal{
	public:
		void sound (){
			cout <<"dog is barking"<<endl;
		}
};


int main(int argc, char** argv) {
	animal A1 ;
	A1.sound();
	dog D1;
	D1.sound();
	return 0;
}
