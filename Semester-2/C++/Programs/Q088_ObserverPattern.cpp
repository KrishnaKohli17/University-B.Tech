// Q88: Observer design pattern.
#include <iostream>
#include <vector>
using namespace std;
class Observer { public: virtual void update(int val) = 0; };
class Subject {
    vector<Observer*> observers;
    int state;
public:
    void subscribe(Observer* o) { observers.push_back(o); }
    void setState(int s) { state = s; for (auto o : observers) o->update(state); }
};
class Display : public Observer {
    string name;
public:
    Display(string n) : name(n) {}
    void update(int val) override { cout << name << " received: " << val << "\n"; }
};
int main() {
    Subject s;
    Display d1("Screen1"), d2("Screen2");
    s.subscribe(&d1); s.subscribe(&d2);
    s.setState(42); s.setState(100);
    return 0;
}
