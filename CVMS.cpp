#include<iostream>
#include<vector>
using namespace std;
class Visitor {
 public:
 string name, purpose, date, timeIn, timeOut, contactNumber;
 
 void display() {
 cout << "Name: " << name << "\n"
 << "Purpose: " << purpose << "\n"
 << "Date: " << date << "\n"
 << "Time In: " << timeIn << "\n"
 << "Time Out: " << timeOut << "\n"
 << "Contact Number: " << contactNumber << "\n";
 }
};
class CVMS {
 public:
 vector<Visitor> visitors;
 
 void addVisitor() {
 Visitor v;
 cout << "Enter Visitor Name: ";
 cin >> v.name;
 cout << "Enter Purpose of Visit: ";
 cin.ignore();
 getline(cin, v.purpose);
 cout << "Enter Date of Visit (DD/MM/YYYY): ";cin >> v.date;
 cout << "Enter Time In (HH:MM): ";
 cin >> v.timeIn;
 cout << "Enter Time Out (HH:MM): ";
 cin >> v.timeOut;
 cout << "Enter Contact Number: ";
 cin >> v.contactNumber;
 visitors.push_back(v);
 }
 
 void displayVisitors() {
 if (visitors.empty()) {
 cout << "No visitors to display." << endl;
 } else {
 for (size_t i = 0; i < visitors.size(); ++i) {
 cout << "\nVisitor " << i+1 << ":\n";
 visitors[i].display();
 }
 }
 }
 
 void searchVisitor() {
 string name;
 cout << "Enter Visitor Name to search: ";
 cin >> name;
 bool found = false;
 for (size_t i = 0; i < visitors.size(); ++i) {
 if (visitors[i].name == name) {
 cout << "\nVisitor found:\n";
 visitors[i].display();
 found = true;break;
 }
 }
 if (!found) {
 cout << "Visitor not found." << endl;
 }
 }
 
 void deleteVisitor() {
 string name;
 cout << "Enter Visitor Name to delete: ";
 cin >> name;
 bool found = false;
 for (size_t i = 0; i < visitors.size(); ++i) {
 if (visitors[i].name == name) {
 visitors.erase(visitors.begin() + i);
 cout << "Visitor deleted." << endl;
 found = true;
 break;
 }
 }
 if (!found) {
 cout << "Visitor not found." << endl;
 }
 }
};
int main() {
 CVMS list;
 while (true) {
 system("cls");cout << "\t** Company Visitor Management System **\n" << endl;
 cout << " 1. Add Visitor" << endl;
 cout << " 2. Display All Visitors" << endl;
 cout << " 3. Search Visitor" << endl;
 cout << " 4. Delete Visitor" << endl;
 cout << " 5. Exit \n" << endl;
 int choice;
 cout << "Enter Choice : ";
 cin >> choice;
 cout<<"#--------------------------------------------#"<<endl;
 switch (choice) {
 case 1:
 cout << "ENTER VISITOR DETAILS" << endl;
 list.addVisitor();
 cout<<"Visitor Added !!!!!"<<endl<<"#--------------------------------------------#";
 break;
 case 2:
 list.displayVisitors();
 cout<<endl<<"#--------------------------------------------#";
 break;
 case 3:
 list.searchVisitor();
 cout<<endl<<"#--------------------------------------------#";
 break;
 case 4:
 list.deleteVisitor();
 cout<<endl<<"#--------------------------------------------#";
 break;
 case 5:
 exit(0);
 break;default:
 cout << "Invalid Choice !!!!!" << endl;
 cout<<endl<<"#--------------------------------------------#";
 }
 cout << "\n\n";
 system("pause");
 }
}