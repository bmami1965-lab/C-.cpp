#include <iostream>

using namespace std;
int main() {
	int a, b;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
try
	{
		if(b==0)
		throw b;
		cout<<"the result is <<a/b";
		}
	catch(int i) { 
		cout<<"the deminomtor is cannot 0";
	}
	    
	
	return 0;
}
