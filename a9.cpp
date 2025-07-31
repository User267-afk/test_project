/*9. Write different programs to implement different storage classes (auto, register, extern and static )
in C++ with its output. */

#include <iostream>
using namespace std;

extern int test_ext;

void display_auto() {
    auto num = 10;
    cout << "Value of num (auto): " << num << endl;
}

void display_Register() {
    register int reg_var = 5;
    cout << "Value of reg_var (register): " << reg_var << endl;
}

void display_Extern() {
    cout << "Value of test_ext (extern): " << test_ext << endl;
}

void display_Static() {
    static int stat_var = 0;
    cout << "Value of stat_var (static): " << stat_var << endl;
    stat_var++;
}

int test_ext = 20;

int main() {
    display_auto();
    display_Register();
    display_Extern();
    display_Static();
    display_Static();
    return 0;
}
