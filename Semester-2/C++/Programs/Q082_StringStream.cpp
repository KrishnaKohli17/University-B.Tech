// Q82: Use stringstream for in-memory string parsing.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class CSVParser {
public:
    static vector<string> parse(const string& line, char delim = ',') {
        vector<string> tokens;
        stringstream ss(line);
        string token;
        while (getline(ss, token, delim)) tokens.push_back(token);
        return tokens;
    }
};
int main() {
    string line = "Alice,25,90,Mumbai";
    auto tokens = CSVParser::parse(line);
    for (auto& t : tokens) cout << "[" << t << "] ";
    cout << "\n";
    return 0;
}
