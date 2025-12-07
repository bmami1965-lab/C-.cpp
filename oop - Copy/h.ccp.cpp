#include <iostream>

using namespace std;
class doctor{
public:
	int ID;
	int name;
	string profession;
	
	void sayTellCase(){
		cout << "please protect your health";
	}
};

int main() {
	doctor tomas;
	tomas.sayTellCase();
	cout << "please protect your health";
	return 0;
}
