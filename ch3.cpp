// chapter 3: using functions and classes

//mathematical standard functions
//sin cos tan atan cosh sqrt pow exp log log10
//prototype example: (declare function simular to declaring variables)
//long func (int, double);
//<return type> <function name> (<input variables>)

#include <cmath>
#include <iostream>
#include <cstdlib>  //prototypes of srand(), rand(), void strand(unsigned int seed), int rand(void)
#include <time.h>   //time for random seed
#include <string>

using namespace std;

int main(){
    
    cout << pow(3,3) << endl;
    for (size_t i = 0; i < 10; i++){
        cout << i << " ";
    }
    
    unsigned int seed;
    int z1,z2, z3;
    //cout << "enter seed";
    //cin >> seed;
    //srand (seed);

    srand ( time(NULL) );
    z1 = rand();
    z2 = rand();
    z3 = rand();
    cout << z1 << " ";
    cout << z2 << " ";
    for (size_t i = 0; i < 10; i++){
        cout << i << " ";
    }
    cout << z3 << " ";
    cin >> seed;
    

    string name;
    getline(cin, name);
    cout << name;
    getline(cin, name);
    


    return 0;
}
