Bank Management System
This repository contains a console-based banking management system developed in C++. The system includes functionality for account creation, bill payment, cash withdrawal, and cash deposit. Additionally, it supports the storage of customer and bank data in binary files.

Table of Contents


Features

Prerequisites

Installation

Usage

Code Overview

Contributing

License

Acknowledgments


Features

Account Creation: Allows customers to create a bank account with a minimum balance requirement.

Bill Payment: Facilitates bill payment with a verification process to ensure sufficient funds.

Cash Withdrawal and Deposit: Enables customers to withdraw and deposit cash into their accounts.

Bank Details: Displays and allows updates to bank details, including name, number, address, and branch number.

Customer Information: Stores customer data in binary files for persistence.


Prerequisites


C++ compiler (supporting C++11 or later)

Windows operating system (due to the use of windows.h for clearing the console screen)

Installation

Clone the repository to your local machine.

git clone https://github.com/your-username/hbl-bank-management-system.git

Compile the code using a C++ compiler.

g++ main.cpp -o Bank_Management_System

Usage

Run the compiled executable Bank_Management_System to start the program. Follow the on-screen prompts to perform various banking operations.


Code Overview

The code is organized into classes for better structure:

Bank Class: Manages bank information, such as name, number, address, and branch number.

Person Class: Represents a generic person with attributes like name, address, and email.

Account Class: Handles account-related operations, including balance management and transaction history.

BillPayment Class: Manages the process of bill payment, including data storage.

CashWithdrawal and CashDeposit Classes: Handle cash withdrawal and deposit operations, respectively.

Customer Class: Inherits from the Person class and represents a bank customer, including account creation.


Contributing


If you'd like to contribute to the project, please follow these steps:

Fork the repository.

Create a new branch for your feature or bug fix.

Make your changes and submit a pull request.


License


This project is licensed under the MIT License - see the LICENSE file for details.


Acknowledgments


Special thanks to the HBL Bank for inspiring this banking management system.

The use of 'windows.h' for console screen manipulation is tailored for the Windows operating system. Adjustments may be needed for cross-platform compatibility.
