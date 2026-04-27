// Q94: Proxy design pattern – lazy initialization and access control.
#include <iostream>
using namespace std;
class Image { public: virtual void display() = 0; virtual ~Image(){} };
class RealImage : public Image {
    string file;
public:
    RealImage(string f) : file(f) { cout << "Loading " << file << " from disk\n"; }
    void display() override { cout << "Displaying " << file << "\n"; }
};
class ProxyImage : public Image {
    RealImage* real = nullptr;
    string file;
public:
    ProxyImage(string f) : file(f) {}
    void display() override {
        if (!real) real = new RealImage(file);
        real->display();
    }
    ~ProxyImage() { delete real; }
};
int main() {
    Image* img = new ProxyImage("photo.jpg");
    img->display(); // loads now
    img->display(); // uses cache
    delete img;
    return 0;
}
