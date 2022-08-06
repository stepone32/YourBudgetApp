#include "BudgetManager.h"

bool BudgetManager::ifUserIsLoggedIn()
{
    userManager.ifUserIsLoggedIn();
}

void BudgetManager::changeLoggedUserPassword()
{
    userManager.changeLoggedUserPassword();
}


void BudgetManager::userRegistration()
{
    userManager.userRegistration();
}

void BudgetManager::userLoging()
{
    userManager.userLoging();
}

int BudgetManager::logoutUser()
{
    userManager.logoutUser();
}

char BudgetManager::chooseOptionsFromMainMenu()
{
    char choice;

    system("cls");
    cout << "    >>> MAIN MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Registration" << endl;
    cout << "2. Logging" << endl;
    cout << "9. Exit from programme" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = SupportingMethods::loadCharacter();

    return choice;
}

char BudgetManager::chooseOptionsFromBudgetMenu()
{
    char choice;

    system("cls");
    cout << " >>> BUDGET MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Add income" << endl;
    cout << "2. Add expense" << endl;
    cout << "3. Balance sheet for the current month" << endl;
    cout << "4. Balance sheet for the previous month" << endl;
    cout << "5. Balance sheet for the selected period" << endl;
    cout << "---------------------------" << endl;
    cout << "6. Change password" << endl;
    cout << "7. Log out" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = SupportingMethods::loadCharacter();

    return choice;
}

