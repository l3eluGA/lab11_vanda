#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string textline;
    double count=0;
    double mean=0,deviation,sum=0,sum2,mean2;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum +=atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count++;
    }
    mean =sum/count;
    mean2 =pow(mean,2);
    
    deviation = sqrt((sum2/count)-mean2);
    cout <<"Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout <<"Mean = "<<mean<<"\n";
    cout <<"Standard deviation = "<<deviation;
    return 0;
}