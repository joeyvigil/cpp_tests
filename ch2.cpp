#include <iostream>
#include <climits>
using namespace std;

void print(string a);

int main(){
    string a = "hi ";
    string b = "there";

    print("the range of types int and unsinged int");
    print("type         minimum         maximum");
    print("---------------------------------------");
    //note : print("a"+"b"); produces an compiling error 
    print(string("a")+"b");
    print(a+b);
    cout<< CHAR_MIN << endl;
    cout<< CHAR_MAX << endl;
    cout<< INT_MIN << endl;
    cout<< INT_MAX << endl;
    cout<< CHAR_BIT << endl;
    print("---------------------------------------");
    cout<< sizeof(long double) << endl;
    cout<< 0xFF << endl;
    cout<< hex << 27 << endl;
    cout<< 1.8e2 << endl;
    cout<< "cool" << endl;
    




    return 0;
}

void print(string a){
    cout<< a + "\n";
}
