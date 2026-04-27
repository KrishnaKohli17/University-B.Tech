// Q86: Singleton design pattern – only one instance allowed.
#include <iostream>
using namespace std;
class Database {
    static Database* instance;
    Database() { cout << "DB Connection created\n"; }
public:
    static Database* getInstance() {
        if (!instance) instance = new Database();
        return instance;
    }
    void query(const string& q) { cout << "Query: " << q << "\n"; }
};
Database* Database::instance = nullptr;
int main() {
    Database* db1 = Database::getInstance();
    Database* db2 = Database::getInstance();
    cout << "Same instance: " << boolalpha << (db1 == db2) << "\n";
    db1->query("SELECT * FROM users");
    return 0;
}
