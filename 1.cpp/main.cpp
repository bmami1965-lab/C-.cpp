#include <iostream>
using namespace std;
class result{
	
	int score;
	
	public:
		result (int sScore ){
			score= sScore;
		}
			
			
		void checkGrade(){
			if (score> 90 && score< 100 ){
				cout<< "A";
			}
			else if(score> 80 && score< 89){
					cout<< "B";
				}
			else if(score> 70 && score< 79){
				cout<< "C";
			}
			else if(score> 60 && score< 69){
				cout<< "D";
			}
			else	{
				cout<< "F";
			}


}
};
int main (){
	int score;
	cout<<"Enter your score"<<endl;
	cin>>score;
	result r1(score);
	
	
	r1.checkGrade();
	
	
	
	return 0;
	
}
