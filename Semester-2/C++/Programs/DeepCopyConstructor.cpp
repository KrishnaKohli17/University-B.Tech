// Q19: Deep copy constructor for class with dynamic memory.
#include <iostream>
#include <cstring>
using namespace std;
class MyString {
    char* str;
public:
    MyString(const char* s) { str = new char[strlen(s)+1]; strcpy(str,s); }
    MyString(const MyString& o) { str = new char[strlen(o.str)+1]; strcpy(str,o.str); cout<<"Deep copy\n"; }
    ~MyString() { delete[] str; }
    void display() { cout << str << endl; }
};
int main() {
    MyString s1("Hello");
    MyString s2 = s1;
    s2.display();
    return 0;
}
