#include <iostream>

using namespace std;
class shape{
	protected:
	    int height;
    	string color;
	    string name;
	    float length;
  	
};
  
class circle : public shape {
	public: 
	  void draw (){
	  	cout<< "draw the circle";
	  	}
	  	 void setheight(int Cheihgt){
	  	 	 height=Cheihgt;
		   }
	  	     
	  	 void  getheight(){
	  	 		cout<<height;
		   }
	  	 	  	
};
class tirangle : public shape{
	public:
		void show (){
			cout<<"show to the triangle";
		}
		void setlength(float trlenght){
			 length=trlenght;
			}
	    void  getlenght(){
	  	 		cout<<length;
	  }
};

int main(int argc, char** argv) {
	circle c1;
	c1.draw();
	c1.setheight(21);
	c1.getheight();
	
	tirangle T1;
	T1.show();
	T1.setlength(42.5);
	T1.getlenght();
	return 0;
}
