#include <iostream>
#include <string>
using namespace std;
string conpress(string ref){
    string s ;
    for(int i = 0 ; i < ref.size() ; i += 3){
        s += ref[i];
    }
    return s;
}

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    string j = conpress("CPECMU");
    string k = conpress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n"<<j<<"\n"<<k<<"\n";

}
