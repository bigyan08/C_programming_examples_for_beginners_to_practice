
# Bank Management System

This report will cover the code that implements a simple Bank Management System. The system allows users to 
create accounts, log in, and perform various banking operations like depositing money, transferring money, 
viewing account details and using atm to withdraw money.
## Code Overview
Libraries Included: The program includes several standard libraries such as `stdio.h`, `stdlib.h`, `string.h`, 
`time.h`, and `conio.h`. These libraries provide functionalities for input/output, memory allocation, string 
manipulation, time handling, and console input/output operations. 

Struct Definition: The program defines a structure named `Customer` that stores information about a bank 
customer. The structure includes fields like `fname` (first name), `lname` (last name), `acc_no` (account number), 
`pass` (password), and `balance` (account balance). 

Function Prototypes: The code provides prototypes for various functions used in the program. These functions 
are: 

• `displayMenu`: Displays the main menu options. 

• `login`: Allows customers to log in to their accounts. 

• `deposit`: Handles the deposit operation. 

• `withdraw`: Handles the withdrawal operation. 

• `transfer`: Handles the money transfer operation. 

• `viewAccountDetails`: Displays account details to the customer. 

• `saveCustomer`: Saves customer information to a file.

• `loadCustomer`: Loads customer information from a file based on account number. 

Main Function (“main”): The `main` function serves as the entry point of the program. It displays a welcome 
message and presents a menu to the user with options to create an account, log in, or exit the program. It uses a 
`switch` statement to execute the chosen action.
User Account Creation (“createAccount”): This function generates a random account number, takes user input 
for their first name, last name, and a 4-digit password. It initializes the account balance to 0 and saves the customer 
information in a file using the `saveCustomer` function. 

User login (“login”): The `login` function prompts the user to enter their account number. It then uses the 
`loadCustomer` function to load the customer details. If the account number is found, the user is prompted to 
enter their password. If the password matches, the user gains access to the account. 

Menu Functions (“deposit”, “atm”, “transfer”, “viewAccountDetails”): These functions handle various banking 
operations: 

 `deposit`: Prompts the user to deposit an amount into their account. 

 `atm`: Allows the user to withdraw money, provided they have sufficient balance. 

 `transfer`: Enables the user to transfer money to another account. 

 `viewAccountDetails`: Displays account details to the user. 
Data Persistence (“saveCustomer” and “loadCustomer”): These functions manage the saving and loading of 
customer information. `saveCustomer` writes customer data to a file named based on the account number, while 
`loadCustomer` reads customer data from a file based on the account number.

## Key Features

1. Structure (`struct Customer`): The use of a structure allows grouping related customer data into a single 
entity. This makes it convenient to manage customer information. 

2. Pointers (`struct Customer *user`): Pointers are used in functions that modify customer data. The `user` 
pointer refers to the memory location of the current customer's data, enabling the functions to modify the data 
directly. 

3. File Handling (`FILE`, `fopen`, `fprintf`, `fscanf`, `fclose`): File handling functions are used to save and 
load customer data. The `fopen` function opens files, `fprintf` writes formatted data to files, and `fscanf` reads 
formatted data from files. `fclose` closes files after reading or writing. 

4. Random Number Generation (`srand`, `rand`): The `srand` function seeds the random number 
generator, and `rand` generates random numbers. These are used to create unique account numbers during account 
creation. 

5. Console Manipulation (`system("cls")`, `printf`): The code uses the `system("cls")` command to clear 
the console screen. `printf` is extensively used for displaying messages and user prompts.## Documentation

This document provides an in-depth review of the system using algorithm and flowchart
link:https://acrobat.adobe.com/id/urn:aaid:sc:AP:8e8a2fab-735d-4f2d-b7a9-1648415900f4

## Author

- [@bigyan08](https://www.github.com/bigyan08)

