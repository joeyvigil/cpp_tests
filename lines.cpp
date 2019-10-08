//lines.cppp
//a filter that numbers lines.

#include <iostream>
//#include <iomapip>
#include <string>
using namespace std;

int main(){
    string line;
    int number =0;
    while (getline(cin,line)){
        cout << "\t" << ++number << ": " <<line << endl;
    }
    
    return 0;
}
