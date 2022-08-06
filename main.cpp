#include <iostream>

#include "BudgetManager.h"

using namespace std;

int main()
{
    BudgetManager budgetManager("users.xml");

    char choose;

    while (true)
    {
        if (budgetManager.ifUserIsLoggedIn() == false)
        {
            choose = budgetManager.chooseOptionsFromMainMenu();

            switch (choose)
            {
            case '1':
                budgetManager.userRegistration();
                break;
            case '2':
                budgetManager.userLoging();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            choose = budgetManager.chooseOptionsFromBudgetMenu();

            switch (choose)
            {
            case '1':
//                budgetManager.addIncome();
                break;
            case '2':
//                budgetManager.addExpense();
                break;
            case '3':
//                budgetManager.displayBalanceForCurrentMonth();
                break;
            case '4':
//                budgetManager.displayBalanceForPreviousMonth();
                break;
            case '5':
//                budgetManager.displayBalanceForSelectedPeriod();
                break;
            case '6':
                budgetManager.changeLoggedUserPassword();
                break;
            case '7':
                budgetManager.logoutUser();
                break;
            }
        }
    }
}
