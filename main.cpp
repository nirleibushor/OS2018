#include <iostream>

using namespace std;

int main() {

    string s1 = "nir";

    string *s2 = &s1;

    (*s2)[1] = 'o'; //  blablabla

    cout << s1 << endl;

    return 0;
}