#include<iostream>
using namespace std;

void myString(char *&p, int length){
    p = new char[length+1];
    for (int i=0; i<length; i++){
        p[i] = 'A'+i;
    }
    p[length] = '\0';
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
