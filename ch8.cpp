//ch8 converting arithmatic types
#include <iostream>
using namespace std;

int main(){
    int aint = 9;
    float afloat = 234.99232;
    
    cout << aint << " , " << afloat << endl ;
    float bfloat = float(aint);
    int bint = int(afloat);
    
    cout << bint << " , " << bfloat ;

    //can do int(213.1231) or (int) 213.1231

    return 0;
}
