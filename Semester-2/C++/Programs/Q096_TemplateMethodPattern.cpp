// Q96: Template Method design pattern.
#include <iostream>
using namespace std;
class DataProcessor {
public:
    void process() { readData(); processData(); writeData(); }
protected:
    virtual void readData() { cout << "Reading data\n"; }
    virtual void processData() = 0;
    virtual void writeData() { cout << "Writing data\n"; }
};
class CSVProcessor : public DataProcessor {
protected:
    void processData() override { cout << "Processing CSV data\n"; }
};
class JSONProcessor : public DataProcessor {
protected:
    void processData() override { cout << "Processing JSON data\n"; }
};
int main() {
    CSVProcessor csv; csv.process();
    cout << "---\n";
    JSONProcessor json; json.process();
    return 0;
}
