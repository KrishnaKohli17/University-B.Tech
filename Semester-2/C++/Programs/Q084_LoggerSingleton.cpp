// Q84: Logger class using Singleton pattern with file output.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Logger {
    static Logger* instance;
    ofstream logFile;
    Logger() { logFile.open("log.txt", ios::app); }
public:
    static Logger* getInstance() {
        if (!instance) instance = new Logger();
        return instance;
    }
    void log(const string& msg) {
        logFile << "[LOG] " << msg << "\n";
        cout << "[LOG] " << msg << "\n";
    }
    ~Logger() { logFile.close(); }
};
Logger* Logger::instance = nullptr;
int main() {
    Logger::getInstance()->log("Application started");
    Logger::getInstance()->log("Processing data");
    Logger::getInstance()->log("Application ended");
    return 0;
}
