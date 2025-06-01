#include <iostream>
using namespace std;


class Employee {
public:
    int eid;
    string ename, etype;

    void inputBasicDetails() {
        cout << "Enter Employee ID, Name, and Type (permanent/contract): ";
        cin >> eid >> ename >> etype;
    }

    void displayBasicDetails() {
        cout << "\nEmployee ID: " << eid << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Employee Type: " << etype << endl;
    }
};


class Permanent : public Employee {
public:
    int basic, hra, da;

    void inputSalaryDetails() {
        cout << "Enter Basic, HRA, and DA: ";
        cin >> basic >> hra >> da;
    }

    void displaySalaryDetails() {
        displayBasicDetails();
        cout << "Basic: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
    }
};


class Contract : public Employee {
public:
    int amount;

    void inputContractDetails() {
        cout << "Enter Contract Amount: ";
        cin >> amount;
    }

    void displayContractDetails() {
        displayBasicDetails();
        cout << "Contract Amount: " << amount << endl;
    }
};

int main() {
    Permanent p;
    Contract c;

    cout << "\n--- Permanent Employee ---\n";
    p.inputBasicDetails();
    p.inputSalaryDetails();

    cout << "\n--- Contract Employee ---\n";
    c.inputBasicDetails();
    c.inputContractDetails();

    cout << "\n--- Permanent Employee Details ---\n";
    p.displaySalaryDetails();

    cout << "\n--- Contract Employee Details ---\n";
    c.displayContractDetails();

    return 0;
}
