
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

struct Customer {
    char fname[20], lname[20];
    int acc_no, pass;
    double balance;
};

void displayMenu();
void createAccount();
void login();
void deposit(struct Customer *user);
void withdraw(struct Customer *user);
void transfer(struct Customer *user);
void viewAccountDetails(struct Customer *user);
void saveCustomer(struct Customer *user);
int loadCustomer(int acc_no, struct Customer *user);

int main() {
    int choice;
    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\tWelcome to the Bank Management System\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }

    while (1) {
        printf("\n[1] Create a new account\n[2] Login\n[3] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;

            case 2:
                login();
                break;

            case 3:
                printf("Thank you for using our system!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void displayMenu() {
    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tMAIN MENU\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n[1] Deposit Money\n");
    printf("[2] Use ATM\n");
    printf("[3] Transfer Money\n");
    printf("[4] View Account Details\n");
    printf("[5] Logout\n");
}

void createAccount() {
    struct Customer user;
    srand(time(NULL));
    user.acc_no = rand() % 90000 + 10000;
    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tACCOUNT REGISTRATION\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\nEnter your first name: ");
    scanf("%s", user.fname);

    printf("Enter your last name: ");
    scanf("%s", user.lname);

    printf("Enter your password (4-digit): ");
    scanf("%d", &user.pass);

    user.balance = 0.0; // Initialize balance to 0

    printf("\nAccount created successfully!\n");
    printf("Your account number is: %d\n", user.acc_no);

    saveCustomer(&user);
}

void login() {
    struct Customer user;
    int acc_no, pass;
    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tLOGIN\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\nEnter your account number: ");
    scanf("%d", &acc_no);

    if (loadCustomer(acc_no, &user)) {
        printf("Enter your password (4-digit): ");
        scanf("%d", &pass);

        if (pass == user.pass) {
            printf("Login successful!\n");
            int choice;
            while (1) {
                displayMenu();
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tDEPOSIT\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
                    
                        deposit(&user);
                        break;

                    case 2:
                    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tATM\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
                        withdraw(&user);
                        break;

                    case 3:
                    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tTRANSFER\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
                        transfer(&user);
                        break;

                    case 4:
                    system("cls");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
    printf("\n\t\t\tACCOUNT DETAILS\n");
        for(int i=1;i<=75;i++)
    {
        printf("-");
    }
                        viewAccountDetails(&user);
                        break;

                    case 5:system("cls");
                        printf("Logged out successfully!\n");
                        return;

                    default:
                        printf("Invalid choice. Please try again.\n");
                }
            }
        } else {
            printf("Invalid password.\n");
        }
    } else {
        printf("Account not found.\n");
    }
}

void deposit(struct Customer *user) {
    double amount;
    printf("\nEnter the amount to deposit: ");
    scanf("%lf", &amount);

    user->balance += amount;
    printf("Deposit successful!\n");
    printf("Current balance: %.2lf\n", user->balance);

    saveCustomer(user);
     printf("\npress any key to continue...");
    getch();
   
}

void withdraw(struct Customer *user) {
    double amount;
 
    printf("\nEnter the amount to withdraw: ");
    scanf("%lf", &amount);

    if (user->balance >= amount) {
        user->balance -= amount;
        printf("Withdrawal successful!\n");
        printf("Current balance: %.2lf\n", user->balance);

        saveCustomer(user);
    } else {
        printf("Insufficient balance.\n");
    }
    printf("\npress any key to continue...");
    getch();
    
}

void transfer(struct Customer *user) {
    int target_acc_no;
    double amount;
    printf("\nEnter the target account number: ");
    scanf("%d", &target_acc_no);

    struct Customer target_user;
    if (loadCustomer(target_acc_no, &target_user)) {
        printf("Enter the amount to transfer: ");
        scanf("%lf", &amount);

        if (user->balance >= amount) {
            user->balance -= amount;
            target_user.balance += amount;

            printf("Transfer successful!\n");
            printf("Your current balance: %.2lf\n", user->balance);

            saveCustomer(user);
            saveCustomer(&target_user);
        } else {
            printf("Insufficient balance.\n");
        }
    } else {
        printf("Target account not found.\n");
    }
    printf("\npress any key to continue...");
    getch();
    
}

void viewAccountDetails(struct Customer *user) {
    printf("\nAccount Details:\n");
    printf("Name: %s %s\n", user->fname, user->lname);
    printf("Account Number: %d\n", user->acc_no);
    printf("Balance: %.2lf\n", user->balance);
    printf("\npress any key to continue...");
    getch();
    
}

void saveCustomer(struct Customer *user) {
    char filename[50];
    snprintf(filename, sizeof(filename), "%d.txt", user->acc_no);

    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "Account Number: %d\n", user->acc_no);
        fprintf(file, "First Name: %s\n", user->fname);
        fprintf(file, "Last Name: %s\n", user->lname);
        fprintf(file, "Password: %d\n", user->pass);
        fprintf(file, "Balance: %.2lf\n\n", user->balance);

        fclose(file);
    }
}

int loadCustomer(int acc_no, struct Customer *user) {
    char filename[50];
    snprintf(filename, sizeof(filename), "%d.txt", acc_no);

    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        while (fscanf(file, "Account Number: %d\nFirst Name: %s\nLast Name: %s\nPassword: %d\nBalance: %lf\n\n",
                      &user->acc_no, user->fname, user->lname, &user->pass, &user->balance) == 5) {
            if (user->acc_no == acc_no) {
                fclose(file);
                return 1; // Found the customer
            }
        }
        fclose(file);
    }
    return 0; // Customer not found
}