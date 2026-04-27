// Q73: Create a custom exception class.
#include <iostream>
#include <exception>
using namespace std;
class InsufficientFunds : public exception {
    double amount;
public:
    InsufficientFunds(double a) : amount(a) {}
    const char* what() const noexcept override {
        return "Insufficient funds in account!";
    }
    double getAmount() const { return amount; }
};
class BankAccount {
    double balance;
public:
    BankAccount(double b) : balance(b) {}
    void withdraw(double amount) {
        if (amount > balance) throw InsufficientFunds(amount - balance);
        balance -= amount;
        cout << "Withdrawn: " << amount << ", Balance: " << balance << endl;
    }
};
int main() {
    BankAccount acc(500);
    try { acc.withdraw(300); acc.withdraw(300); }
    catch (const InsufficientFunds& e) {
        cout << e.what() << " Short by: " << e.getAmount() << endl;
    }
    return 0;
}
