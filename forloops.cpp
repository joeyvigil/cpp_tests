#include <iostream>
using namespace std;

int main(){
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            for (size_t k = 0; k < j; k++)
            {
                for (size_t l = 0; l < k; l++)
                {
                    //cout << "i\tj\tk\tl\n" << i << "\t" << j << "\t" << k << "\t" << l << "\n";
                    cout  << i << "\t" << j << "\t" << k << "\t" << l << "\n";
                }
            }
        }
        cout << "==============\n";
    }
    
    return 0;
}
