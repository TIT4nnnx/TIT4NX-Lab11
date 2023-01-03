#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    int i = 0;
    double num ;
    double sum = 0;
    double sum_sq = 0;
    double mean = 0;
    double sd ;

    while(getline(source,textline)){
        num = atof(textline.c_str());
        sum += num;
        sum_sq += pow(num,2);
        i++; 
    }
    
    mean = sum/i;

    sd = sqrt((sum_sq/i)-pow(mean,2));

    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean <<"\n";
    cout << "Standard deviation = "<< sd ;
}