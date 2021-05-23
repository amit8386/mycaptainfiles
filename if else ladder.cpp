#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"\nheyy!! welcome to the party...\n"<<"\t";
	cout<<"\nEnter your age:-\n";
	cin>>age;
	if((age<19)&&(age>13)){
		cout<<"\n*****************allowed to enter********************";
	}
	else if((age>=19)&&(age<25)){
		cout<<"\n*******************most welcome**********************";
	}
	else{
		cout<<"\n**********sorry dude!! you can't join us************";
	}
	return 0;
}
