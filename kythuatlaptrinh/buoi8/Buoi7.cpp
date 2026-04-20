#include <iostream>
#include "Account.h"
#include "LinkedList.h"
#include <string>
using namespace std;

int main() {
    LinkedList<Account> accounts = { NULL };
    do {
        system("cls");
        cout << " --------- ACCOUNT  MANAGEMENT --------- " << endl;
        cout << "1. Show all accounts " << endl;
        cout << "2. Add account " << endl;
        cout << "3. Delete a account " << endl;
        cout << "4. Update a account " << endl;
        cout << "5. Find account " << endl;
        cout << "6. Export to account " << endl;
        cout << "7. Import from account " << endl;
        cout << "0. Exit " << endl;
        cout << "------------------------------------" << endl;
        cout << " Enter your choice: ";

        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            accounts.Show();
            break;
        }
        case 2: {
            Account a;
            cin >> a;
            accounts.Add(a);
            break;
        }
        case 3: {
            int removeId;
            cout << "Enter account id to remove: ";
            cin >> removeId;
            bool res = accounts.Remove(removeId);
            if (res)
                cout << "Remove account with id: " << removeId << endl;
            else
                cout << "Not found account id: " << removeId << endl;

            break;
        }
        case 4: {
            int updateId;
            cout << "Enter account id to update: ";
            cin >> updateId;
            bool res = accounts.Update(updateId);
            if (res)
                cout << "Update book successfully" << endl;
            else
                cout << "Invalid book id " << endl;
            break;
        }
        case 5: {
            string userName;
            cout << "Enter account name  ";
            cin.ignore();
            getline(cin, userName);
            accounts.Find(userName);  
            break;
        }
        case 6: {
            /*books.Export("25TH1.dla");
            cout << "Exported successfully" << endl;*/
            break;
        }
        case 7: {
            /*books.Export("25TH1.dla");
            cout << "Exported successfully" << endl;*/
            break;
        }
        case 0: {
            return 0;
        }
        default:
            cout << "Invalid choice , try again : ";
            break;
        }
        system("pause");
        cout << "Press any key to continue... :";

    } while (true);
}