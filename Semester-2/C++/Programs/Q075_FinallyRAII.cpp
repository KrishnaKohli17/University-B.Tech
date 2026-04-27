// Q75: RAII pattern as C++ substitute for finally blocks.
#include <iostream>
#include <fstream>
using namespace std;
class FileGuard {
    fstream& file;
public:
    FileGuard(fstream& f) : file(f) {}
    ~FileGuard() { if(file.is_open()) { file.close(); cout << "File closed by RAII\n"; } }
};
int main() {
    fstream f("temp_raii.txt", ios::out);
    FileGuard guard(f);
    try {
        f << "Hello RAII\n";
        throw runtime_error("Simulated error");
    }
    catch (const exception& e) { cout << "Caught: " << e.what() << "\n"; }
    // FileGuard destructor closes the file automatically
    return 0;
}
