#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    ifstream source("score.txt");
    string text;
    float i=0,sum=0,stdf=0,std;
    
    while(getline(source,text)){
        sum += atof(text.c_str());
        stdf += pow(atof(text.c_str()),2);
        i++;
	}
    std = sqrt((stdf/i)-pow(sum/i,2));
    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/i << endl;
    cout << "Standard deviation = " << std;
}