// Q91: Command design pattern with undo support.
#include <iostream>
#include <stack>
using namespace std;
class Command { public: virtual void execute() = 0; virtual void undo() = 0; };
class Light {
    bool on = false;
public:
    void turnOn() { on = true; cout << "Light ON\n"; }
    void turnOff() { on = false; cout << "Light OFF\n"; }
    bool isOn() { return on; }
};
class TurnOnCmd : public Command {
    Light& light;
public:
    TurnOnCmd(Light& l) : light(l) {}
    void execute() override { light.turnOn(); }
    void undo() override { light.turnOff(); }
};
class RemoteControl {
    stack<Command*> history;
public:
    void pressButton(Command* cmd) { cmd->execute(); history.push(cmd); }
    void pressUndo() { if(!history.empty()) { history.top()->undo(); history.pop(); } }
};
int main() {
    Light light;
    TurnOnCmd cmd(light);
    RemoteControl remote;
    remote.pressButton(&cmd);
    remote.pressUndo();
    return 0;
}
