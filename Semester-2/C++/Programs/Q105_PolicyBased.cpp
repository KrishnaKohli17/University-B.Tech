// Q105: Policy-based design using templates.
#include <iostream>
using namespace std;
struct LogToConsole { void log(const string& s) { cout << "[Console] " << s << "\n"; } };
struct LogToFile { void log(const string& s) { cout << "[File] " << s << "\n"; } };
template<typename LogPolicy>
class Server : public LogPolicy {
public:
    void start() { this->log("Server started"); }
    void stop() { this->log("Server stopped"); }
};
int main() {
    Server<LogToConsole> s1; s1.start(); s1.stop();
    Server<LogToFile> s2; s2.start(); s2.stop();
    return 0;
}
