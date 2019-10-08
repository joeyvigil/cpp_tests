#include <iostream>
using namespace std;
//CONSTANT
#define PI 3.14159
// same as
const float pie=3.14159;
//MACRO, replaces in preprocessor 
#define MACROA (cout << "hello motto" << endl)


int main(){
    MACROA;
    char wow = 'x';
    cout << wow <<endl;
    wow = toupper(wow);
    cout <<wow;
    //other converstions isalpha, islower, isupper, isdigit, isalnum, isspace, isprint
    //other macros return true for false such as islower(wow)

    




    return 0;
}

