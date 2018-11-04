//including library
#include <iostream>
using namespace std;
int main(){
	char name[6]= "Insha";
	//printing my name
	//using  the normal index method
	for(int i=0;i<5;i++){
		cout<<name[i]<<",";
	}
	cout<<endl;
	//using the pointer method
	char *n=name;
	for(int i=0;i<5;i++){
		cout<<*(n+i)<<",";
		}
	return 0;
}