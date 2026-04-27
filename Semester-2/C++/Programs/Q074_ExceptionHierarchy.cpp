// Q74: Exception hierarchy with base and derived exception classes.
#include <iostream>
using namespace std;
class AppException : public exception {
protected:
    string msg;
public:
    AppException(string m) : msg(m) {}
    const char* what() const noexcept override { return msg.c_str(); }
};
class NetworkException : public AppException {
public:
    NetworkException() : AppException("Network error occurred") {}
};
class TimeoutException : public NetworkException {
public:
    TimeoutException() { msg = "Connection timed out"; }
};
void connect(int type) {
    if (type == 1) throw NetworkException();
    if (type == 2) throw TimeoutException();
}
int main() {
    for (int t = 1; t <= 2; t++) {
        try { connect(t); }
        catch (const TimeoutException& e) { cout << "Timeout: " << e.what() << "\n"; }
        catch (const NetworkException& e) { cout << "Network: " << e.what() << "\n"; }
        catch (const AppException& e) { cout << "App: " << e.what() << "\n"; }
    }
    return 0;
}
