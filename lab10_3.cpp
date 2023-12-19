#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;
double sum = 0;
int count = 0;
double mean,StandardDeviation,num_2;
int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        num_2 += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count;
    StandardDeviation = sqrt((num_2/count)-pow(mean,2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << StandardDeviation;
}