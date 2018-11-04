//include in the library
#include <iostream>
using namespace std;
int main(){
	char str[11],*p;
	cout<<"Type an input of 10 characters as string"<<endl;
	//asking the user for the ten characters.
	cin>>str;
	p=str;
	// Pointer variable refers to the address of string.
	for(int i=0;i<10;i++){
		for(int j=9-i;j<11;j++){
		cout<<*(p+j);
		}
	cout<<endl;
	}
	return 0;
}