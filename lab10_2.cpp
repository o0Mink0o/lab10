
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	string xd;
	cout << "-------------------- BOOM ---------------------\n";
	while(getline(source,xd)){
		cout << xd << endl;
	}
	cout << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}