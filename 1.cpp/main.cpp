#include <iostream>

using namespace std;
class student {
	string name ;
	int ID;
	
	public:
		student(){
			cout<<"the class initinalized";
		}
		student(int sID, string sname ){
			ID = sID;
			name = sname;
			cout<<sID<<sname <<endl;
		}
};

int main() {
	
	student st1(1213, "ABEBE");
	
	return 0;
	
	
}
