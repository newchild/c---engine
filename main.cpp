#include <string>
using std::string;

#include <iostream>
#include <Entity.h>
using namespace std;

int main()
{
    float a=12.0;
    string er = "Hello";
    Entity v(er,a,a,a);
    v.getInfo();
    return 0;
}
