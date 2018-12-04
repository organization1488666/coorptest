#include <iostream>

#include <vector>
#include <memory>
#include <string>



using namespace std;

class Super
{
public:
    Super() { cout << "super ctor" << endl; }
    ~Super() { cout << "super dtor" << endl; }
};



int main()
{
    string str1="fuck";
    string str2("you");

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str1 + str2 << endl;

    cout << str1.length() << endl;
    cout << str2.length() << endl;

    cout << str1.append(3,'X') << endl;

    cout << str1.find("ck") << endl;

    for (auto a:str1)
        cout << a << endl;

    return 0;
}
