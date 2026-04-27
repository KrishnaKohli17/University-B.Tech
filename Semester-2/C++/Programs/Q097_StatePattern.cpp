// Q97: State design pattern – traffic light simulation.
#include <iostream>
using namespace std;
class TrafficLight;
class State { public: virtual void handle(TrafficLight* tl) = 0; virtual ~State(){} };
class TrafficLight {
    State* state;
public:
    TrafficLight(State* s) : state(s) {}
    void setState(State* s) { delete state; state = s; }
    void request() { state->handle(this); }
};
class GreenState : public State { public: void handle(TrafficLight* tl) override; };
class YellowState : public State { public: void handle(TrafficLight* tl) override; };
class RedState : public State { public: void handle(TrafficLight* tl) override; };
void GreenState::handle(TrafficLight* tl) { cout<<"Green -> "; tl->setState(new YellowState()); }
void YellowState::handle(TrafficLight* tl) { cout<<"Yellow -> "; tl->setState(new RedState()); }
void RedState::handle(TrafficLight* tl) { cout<<"Red -> "; tl->setState(new GreenState()); }
int main() {
    TrafficLight tl(new GreenState());
    for(int i=0;i<6;i++) tl.request();
    cout << "done\n";
    return 0;
}
