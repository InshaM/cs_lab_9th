//include in the  library
#include <iostream>
using namespace std;

int main(){
//predefining the  variables
//The integer variable
	int a;int *p =&a; cout<<"The sizes of integer variables are "<<sizeof(a)<<endl<<"The sizes of the integer pointer variables are : "<<sizeof(p)<<endl;
//The character variable
	char b;char *q =&b;cout<<"The sizes of character variables are "<<sizeof(b)<<endl<<"The sizes of the character pointer variables are : "<<sizeof(q)<<endl;
//The float variable
	float c;float *r =&c;cout<<"The sizes of float variables are "<<sizeof(c)<<endl<<"The sizes of the float pointer variables are : "<<sizeof(r)<<endl;
//The double variable
	double d;double *s =&d;cout<<"The sizes of double variables are "<<sizeof(d)<<endl<<"The sizes of the double pointer variables are : "<<sizeof(s)<<endl;
//The boolean variable
	bool e;bool *t =&e;cout<<"The sizes of boolean variables are "<<sizeof(e)<<endl<<"The sizes of the boolean pointer variables are : "<<sizeof(t)<<endl;

return 0;
}
