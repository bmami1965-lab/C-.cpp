#include <iostream>

using namespace std;

class shape{
	public:
	virtual void drawing()=0;
};
class circle: public shape{
	public:
   void drawing(){
		cout<<"drawing circle"<<endl;
	}
};
    
class rectangle: public shape{
	public:
     void drawing(){
		cout<<"drawing rectangle"<<endl;
	}
};
    
int main() {
	circle s1;
	rectangle r1;
	s1.drawing();
	r1.drawing();
	return 0;
}
