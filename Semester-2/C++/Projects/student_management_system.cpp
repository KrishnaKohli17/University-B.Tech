#include <iostream>
#include <vector>
#include <string>

using namespace std;

// The Core Class
class Student {
private:
    string name;
    int rollNumber;
    int semester;
    float sgpa;

public:
    // Method to create a new student
    void addDetails() {
        cout << "Enter Student Name: ";
        cin.ignore(); // Clears the input buffer so names with spaces work
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter SGPA: ";
        cin >> sgpa;
    }

    // Method to update existing details (Roll Number usually stays the same)
    void updateDetails() {
        cout << "Enter New Student Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter New Semester: ";
        cin >> semester;
        cout << "Enter New SGPA: ";
        cin >> sgpa;
        cout << "Student details updated successfully!\n";
    }

    // Method to print the student's data
    void displayDetails() const {
        cout << "Roll No: " << rollNumber 
             << " | Name: " << name 
             << " | Semester: " << semester 
             << " | SGPA: " << sgpa << endl;
    }

    // Getter method to search by roll number
    int getRollNumber() const {
        return rollNumber;
    }
};

// The Main Program
int main() {
    vector<Student> database; // Temporary database
    int choice;

    do {
        // The expanded menu
        cout << "\n--- COMPLETE STUDENT SYSTEM ---" << endl;
        cout << "1. Add New Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search by Roll No" << endl;
        cout << "4. Update Student Details" << endl;
        cout << "5. Delete a Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student newStudent;
                newStudent.addDetails();
                database.push_back(newStudent);
                cout << "Student added successfully!\n";
                break;
            }
            case 2: {
                if (database.empty()) {
                    cout << "No students in the system yet.\n";
                } else {
                    cout << "\n--- All Students ---\n";
                    for (int i = 0; i < database.size(); i++) {
                        database[i].displayDetails();
                    }
                }
                break;
            }
            case 3: {
                int searchRoll;
                bool found = false;
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;

                for (int i = 0; i < database.size(); i++) {
                    if (database[i].getRollNumber() == searchRoll) {
                        cout << "\nStudent Found:\n";
                        database[i].displayDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Student not found.\n";
                break;
            }
            case 4: {
                int updateRoll;
                bool found = false;
                cout << "Enter Roll Number to update: ";
                cin >> updateRoll;

                for (int i = 0; i < database.size(); i++) {
                    if (database[i].getRollNumber() == updateRoll) {
                        cout << "\nCurrent Details:\n";
                        database[i].displayDetails();
                        cout << "\n--- Enter New Details ---\n";
                        database[i].updateDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Student not found.\n";
                break;
            }
            case 5: {
                int deleteRoll;
                bool found = false;
                cout << "Enter Roll Number to delete: ";
                cin >> deleteRoll;

                for (int i = 0; i < database.size(); i++) {
                    if (database[i].getRollNumber() == deleteRoll) {
                        // database.begin() gets the start of the vector, adding 'i' targets the exact index
                        database.erase(database.begin() + i);
                        cout << "Student record deleted successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Student not found.\n";
                break;
            }
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}