# __BANK MANAGEMENT SYSTEM__
<br>
<br>
This repository contains a console-based banking management system developed in C++. The system includes functionality for account creation, bill payment, cash withdrawal, and cash deposit. Additionally, it supports the storage of customer and bank data in binary files.
<br>
__TABLE OF CONTENTS__
<br>

1. Features

2. Prerequisites

3. Installation

4. Usage

5. Code Overview

6. Contributing

7. License

8. Acknowledgments 

<br>


__1. FEATURES__

   
<br>
Account Creation: Allows customers to create a bank account with a minimum balance requirement.

Bill Payment: Facilitates bill payment with a verification process to ensure sufficient funds.

Cash Withdrawal and Deposit: Enables customers to withdraw and deposit cash into their accounts.

Bank Details: Displays and allows updates to bank details, including name, number, address, and branch number.

Customer Information: Stores customer data in binary files for persistence.


<br>

__2. PREREQUISITES__

<br>

C++ compiler (supporting C++11 or later)

Windows operating system (due to the use of windows.h for clearing the console screen)

<br>


__3. INSTALLATION__

<br>

Clone the repository to your local machine.

git clone https://github.com/your-username/Banking-System.git

Compile the code using a C++ compiler.

g++ main.cpp -o Bank_Management_System


<br>

__4. USAGE__

<br>

Run the compiled executable Bank_Management_System to start the program. Follow the on-screen prompts to perform various banking operations.

<br>


__5. CODE OVERVIEW__


<br>
The code is organized into classes for better structure:

Bank Class: Manages bank information, such as name, number, address, and branch number.

Person Class: Represents a generic person with attributes like name, address, and email.

Account Class: Handles account-related operations, including balance management and transaction history.

BillPayment Class: Manages the process of bill payment, including data storage.

CashWithdrawal and CashDeposit Classes: Handle cash withdrawal and deposit operations, respectively.

Customer Class: Inherits from the Person class and represents a bank customer, including account creation.



<br>

__6. CONTRIBUTING__

<br>

If you'd like to contribute to the project, please follow these steps:

Fork the repository.

Create a new branch for your feature or bug fix.

Make your changes and submit a pull request.


<br>

__7. LICENSE__

<br>

This project is licensed under the MIT License - see the LICENSE file for details.


<br>

__8. ACKNOWLEDGMENTS__


<br>
Special thanks to the HBL Bank for inspiring this banking management system.

The use of 'windows.h' for console screen manipulation is tailored for the Windows operating system. Adjustments may be needed for cross-platform compatibility.
