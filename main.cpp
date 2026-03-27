#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

#include <iostream>
using namespace std;
int main()
{
    Department dept("ComputerScience");

    // Arrays to store created objects
    Student* students[20];
    TeachingAssistant* tas[20];

    int studentCount = 0;
    int taCount = 0;

    int choice;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Add Staff\n";
        cout << "3. Add Teaching Assistant\n";
        cout << "4. Create Tutoring Session\n";
        cout << "5. Display All Members\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int id;
            double cgpa;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter CGPA: ";
            cin >> cgpa;

            Student* s = new Student(name, id, cgpa);
            students[studentCount++] = s;

            dept.addMember(s);

            cout << "Student added!\n";
            break;
        }

        case 2:
        {
            string name, cardID;
            int id, accessLevel;
            double salary;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter salary: ";
            cin >> salary;

            cout << "Enter Card ID: ";
            cin >> cardID;
            cout << "Enter Access Level (1 or 2): ";
            cin >> accessLevel;

            AccessCard card(cardID, accessLevel);

            Staff* st = new Staff(name, id, salary, card);
            dept.addMember(st);

            cout << "Staff added!\n";
            break;
        }

        case 3:
        {
            string name, cardID;
            int id, accessLevel, hours;
            double cgpa, salary;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter CGPA: ";
            cin >> cgpa;
            cout << "Enter salary: ";
            cin >> salary;

            cout << "Enter Card ID: ";
            cin >> cardID;
            cout << "Enter Access Level: ";
            cin >> accessLevel;

            cout << "Enter working hours: ";
            cin >> hours;

            AccessCard card(cardID, accessLevel);

            TeachingAssistant* ta = new TeachingAssistant(name, id, cgpa, salary, card, hours);

            tas[taCount++] = ta;

            dept.addMember(ta);

            cout << "Teaching Assistant added!\n";
            break;
        }

        case 4:
        {
            if (studentCount == 0 || taCount == 0)
            {
                cout << "Need at least 1 student and 1 TA first!\n";
                break;
            }

            int sessionID;
            double duration;

            cout << "Enter Session ID: ";
            cin >> sessionID;

            cout << "Enter Duration (minutes): ";
            cin >> duration;

            cout << "Select Student (index):\n";
            for (int i = 0; i < studentCount; i++)
            {
                cout << i << ". " << students[i]->getName() << endl;
            }

            int sIndex;
            cin >> sIndex;

            cout << "Select TA (index):\n";
            for (int i = 0; i < taCount; i++)
            {
                cout << i << ". " << tas[i]->getName() << endl;
            }

            int tIndex;
            cin >> tIndex;

            TutoringSession ts1(sessionID, duration, tas[tIndex], students[sIndex]);

            cout << "\nSession Created:\n";
            ts1.displaySession();

            // Demonstrate operator +
            TutoringSession ts2(999, 30, tas[tIndex], students[sIndex]);
            TutoringSession merged = ts1 + ts2;

            cout << "\nMerged Session:\n";
            merged.displaySession();

            // Demonstrate operator >
            if (ts1 > ts2)
                cout << "First session is longer\n";
            else
                cout << "Second session is longer\n";

            break;
        }

        case 5:
        {
            cout << "\n--- All Members ---\n";
            dept.displayAllRoles();
            break;
        }

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}