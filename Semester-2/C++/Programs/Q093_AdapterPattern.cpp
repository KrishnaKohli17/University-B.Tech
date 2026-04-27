// Q93: Adapter design pattern – convert interface to another.
#include <iostream>
using namespace std;
class OldPrinter { public: void oldPrint(string s) { cout << "OLD: " << s << "\n"; } };
class NewPrinterInterface { public: virtual void print(string s) = 0; };
class PrinterAdapter : public NewPrinterInterface {
    OldPrinter old;
public:
    void print(string s) override { old.oldPrint(s); }
};
int main() {
    NewPrinterInterface* printer = new PrinterAdapter();
    printer->print("Hello Adapter Pattern!");
    delete printer;
    return 0;
}
