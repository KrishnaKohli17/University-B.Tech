// Q90: Strategy design pattern.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class SortStrategy { public: virtual void sort(vector<int>& v) = 0; virtual ~SortStrategy(){} };
class BubbleSort : public SortStrategy {
public:
    void sort(vector<int>& v) override {
        for(int i=0;i<v.size();i++)
            for(int j=0;j<v.size()-i-1;j++)
                if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        cout << "Bubble sorted\n";
    }
};
class STLSort : public SortStrategy {
public:
    void sort(vector<int>& v) override {
        std::sort(v.begin(), v.end());
        cout << "STL sorted\n";
    }
};
class Sorter {
    SortStrategy* strategy;
public:
    Sorter(SortStrategy* s) : strategy(s) {}
    void setStrategy(SortStrategy* s) { strategy = s; }
    void sort(vector<int>& v) { strategy->sort(v); }
};
int main() {
    vector<int> v = {5, 2, 8, 1, 9};
    Sorter sorter(new STLSort());
    sorter.sort(v);
    for(int x : v) cout << x << " "; cout << "\n";
    return 0;
}
