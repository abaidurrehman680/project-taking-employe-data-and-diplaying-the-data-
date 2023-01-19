#include<iostream>

using namespace std;

enum en { laborer, secretary, manager, accountant, executive, researcher };
enum en2 { monday, tuesday, wednesday, thursday, friday, saturday, sunday };
class dates {
public:
    int day, month, year;
    void setDate() {
        char temp;
        cout << "Enter employee date of joining in (DD/MM/YYYY) format: ";
        cin >> day >> temp >> month >> temp >> year;
    }
    void getDate() {
        cout << "\nEmployee date of joining: " << day << "/" << month << "/" << year;

    }
};

class address {
private:
    int h_no;
    int str_no;

public:
    string city;
    void set_add()
    {
        cout << "Enter House Number: ";
        cin >> h_no;
        cout << "Enter Street Number: ";
        cin >> str_no;
        cout << "Enter City: ";
        cin >> city;
    }
    void get_add()
    {
        cout << "Employee Address: House No." << h_no << ", Street No." << str_no << ", " << city << endl;
    }
};
class employee {
private:
    int emp_num;
    float emp_comp;
    float allow;
    string name;
    dates date1;
    en emp;
    en2 emp2;
    address add;
public:
    void setData();
    void getData();
    void fun();
};

void employee::setData() {
    char type;
    char type2[2];
    cout << "\nEnter Your Name:";
    cin >> name;
    cout << "Enter employee Number: ";
    cin >> emp_num;
    cout << "Enter employee Compensation: ";
    cin >> emp_comp;
    date1.setDate();
    add.set_add();
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type) {
    case 'l': emp = laborer; break;
    case 's': emp = secretary; break;
    case 'm': emp = manager; break;
    case 'a': emp = accountant; break;
    case 'e': emp = executive; break;
    case 'r': emp = researcher; break;
    default:
        break;
    }

p:
    cout << "Enter employee type [monday(m), tuesday(t), wednesday(w), thursday(d), friday(f), saturday(s), sunday(y)]: ";
    cin.get(type2[2]);
    switch (type2[2]) {
    case 'm': emp2 = monday; break;
    case 't': emp2 = tuesday; break;
    case 'w': emp2 = wednesday; break;
    case 'd': emp2 = thursday; break;
    case 'f': emp2 = friday; break;
    case 's': cout << "Not Possible"; goto p; break;
    case 'y': cout << "Not Possible"; goto p; break;
    default:
        goto p;
        break;
    }
    if (add.city == "Lahore" || add.city == "lahore")
    {
        allow = 0;
    }
    else
    {
        allow = 500;
    }

}

void employee::getData() {
    cout << "Employee Number: " << emp_num << endl;
    cout << "Employee Compensation: $" << emp_comp << endl;
    date1.getDate();
    add.get_add();
    cout << endl;
    switch (emp) {
    case laborer:
        cout << "Employee type is laborer";
        break;
    case secretary:
        cout << "Employee type is secretary";
        break;
    case manager:
        cout << "Employee type is manager";
        break;
    case accountant:
        cout << "Employee type is accountant";
        break;
    case executive:
        cout << "Employee type is executive";
        break;
    case researcher:
        cout << "Employee type is researcher";
        break;
    default:
        cout << "Invalid input";
        break;
    }

    switch (emp2) {
    case monday:
        cout << "Employee joined on Monday.";
        break;
    case tuesday:
        cout << "Employee joined on Tuesday.";
        break;
    case wednesday:
        cout << "Employee joined on Wednesday.";
        break;
    case thursday:
        cout << "Employee joined on Thursday.";
        break;
    case friday:
        cout << "Employee joined on Friday.";
        break;
    case saturday:
        cout << "Not Possible.";
        break;
    case sunday:
        cout << "Not Possible.";
        break;
    default:
        cout << "Invalid input";
        break;
    }
    cout << "\nYour Allowance: " << allow;

    if (date1.day == 20 && date1.month == 10 && date1.year == 2022)
    {
        cout << "\nEmployee Name: " << name;
    }
    cout << endl;
}

int main() {
    employee empA[10];

    for (int i = 0; i <= 9; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << ": \n";
        empA[i].setData();
    }

    for (int i = 0; i <= 9; i++)
    {
        system("cls");
        cout << "\n\nDetails of Employee " << i + 1 << ": \n";
        empA[i].getData();
    }


    return 0;
}