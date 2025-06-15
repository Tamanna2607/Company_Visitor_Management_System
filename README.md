
# 🏢 Company Visitor Management System (CVMS)

This is a simple C++ console-based **Company Visitor Management System** that allows users to add, display, search, and delete visitor records. It is built using OOP concepts and the C++ Standard Template Library (`<vector>`).

## 📋 Features

- Add new visitor details
- View all stored visitor records
- Search for a visitor by name
- Delete a visitor's entry
- Simple and interactive console menu

## 💡 How It Works

Visitors are stored in memory using a `vector` of `Visitor` objects. Each visitor has the following details:
- Name
- Purpose of Visit
- Date of Visit
- Time In
- Time Out
- Contact Number

The main menu runs in a loop until the user selects **Exit**.

## 🧑‍💻 Technologies Used

- Language: C++
- Concepts: OOP (Classes and Objects), STL (`vector`), Console I/O

## 🛠️ How to Compile and Run

### 🖥️ On Windows using g++:

1. Save the code as `cvms.cpp`.
2. Open Command Prompt and navigate to the folder containing `cvms.cpp`.


> ⚠️ Note: This program uses `system("cls")` and `system("pause")`, which are Windows-specific. You may need to replace them with `system("clear")` and alternatives if running on Linux/Mac.

## 🧪 Sample Output

```
** Company Visitor Management System **

1. Add Visitor
2. Display All Visitors
3. Search Visitor
4. Delete Visitor
5. Exit

Enter Choice :
```

## 📦 Future Improvements

* Store visitor data in a file for persistence
* Add validation for input (e.g., correct time format)
* Support for multiple visitors with the same name
* GUI version using C++ with Qt or another framework
