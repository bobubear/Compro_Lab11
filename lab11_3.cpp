//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int count = 0;
    double sum1 = 0, sum2 = 0;
    string t;
    ifstream source("score.txt");
    while (getline(source,t)){
        sum1 += atof(t.c_str());
        sum2 += pow(atof(t.c_str()),2);
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum1/count << endl;
    cout << "Standard deviation = " << sqrt((1.0/count)*sum2-pow((sum1/count),2));
    source.close();
    return 0;
}