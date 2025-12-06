#include <iostream>

using namespace std;
class rectangle{
	int width;
	float height;
	
public:
 rectangle(int recwidth, int recheight){
		
		width= recwidth;
		height= recheight;
		
		
	}
	void area(){
		cout<< (width*height);
	}
	void perimeter(){	
	
		cout<< 2*(width+height);
	}	
	
 	 
};



int main(int argc, char** argv) {
	while (true){
	
	for(int i; i<=1; i++){
		int width, height;
		cout<<"enter the width";
		cin>>width ;
		cout<<"enter the height";
		cin>>height ;
		
		rectangle rec1(width, height);
		rec1.area();
		cout<<endl;
		rec1.perimeter();
		cout<<endl;

		
	}

}

	
	
	
	return 0;
}
