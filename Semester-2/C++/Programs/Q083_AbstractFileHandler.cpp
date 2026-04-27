// Q83: Abstract class for file handler with read/write interface.
#include <iostream>
#include <fstream>
using namespace std;
class FileHandler {
protected:
    string filename;
public:
    FileHandler(string f) : filename(f) {}
    virtual void write(const string& data) = 0;
    virtual string read() = 0;
    virtual ~FileHandler() {}
};
class TextFileHandler : public FileHandler {
public:
    TextFileHandler(string f) : FileHandler(f) {}
    void write(const string& data) override {
        ofstream out(filename);
        out << data;
        cout << "Written to " << filename << "\n";
    }
    string read() override {
        ifstream in(filename);
        string content((istreambuf_iterator<char>(in)), {});
        return content;
    }
};
int main() {
    TextFileHandler tfh("test.txt");
    tfh.write("Hello, OOP File Handling!");
    cout << tfh.read() << "\n";
    return 0;
}
