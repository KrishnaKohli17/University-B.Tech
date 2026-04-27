// Q98: Chain of Responsibility pattern.
#include <iostream>
using namespace std;
class Handler {
protected:
    Handler* next = nullptr;
public:
    Handler* setNext(Handler* h) { next = h; return h; }
    virtual void handle(int level) {
        if (next) next->handle(level);
        else cout << "No handler for level " << level << "\n";
    }
};
class LowHandler : public Handler {
public:
    void handle(int level) override {
        if (level <= 1) cout << "Low handler: " << level << "\n";
        else Handler::handle(level);
    }
};
class MidHandler : public Handler {
public:
    void handle(int level) override {
        if (level <= 2) cout << "Mid handler: " << level << "\n";
        else Handler::handle(level);
    }
};
class HighHandler : public Handler {
public:
    void handle(int level) override { cout << "High handler: " << level << "\n"; }
};
int main() {
    LowHandler low; MidHandler mid; HighHandler high;
    low.setNext(&mid)->setNext(&high);
    for (int l : {1, 2, 3}) low.handle(l);
    return 0;
}
