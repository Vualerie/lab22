#include <iostream>
#include <fstream>
#include <string>
using namespace std;

    double sum = 0;
    double num;
    double Average;
    
int main(int argc,char* argv[]){

    if(argc <= 1){ 
        cout << "Please input numbers to find average.";}
        
    else{
    for(int i=0;i < argc;i++){
        num = atof(argv[i]);
        sum += num;
            if(i == argc-1){
                Average = sum/i;
                cout << "---------------------------------" << endl;
                cout << "Average of " << i << " numbers = " << Average << endl;
                cout << "---------------------------------" << endl;
            }
        }
    }

}