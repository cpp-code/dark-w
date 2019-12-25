#include <iostream>
#include <regex>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
    string str = "int r = foo(a, b, 250);";
    regex re("foo\\((\\w+),\\s(\\w+),\\s(\\w+)\\);");
    smatch m;

    sregex_iterator ite(str.cbegin(), str.cend(), re);
    sregex_iterator end;
    for (; ite != end; ++ite) {
        cout << "Matched: " << ite -> str(0) << endl;
        cout << "Parameter 1: " << ite -> str(1) << endl;
        cout << "Parameter 2: " << ite -> str(2) << endl;
        cout << "Parameter 3: " << ite -> str(3) << endl;
    }

    return 0;
}

