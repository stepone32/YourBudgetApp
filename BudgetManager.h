#ifndef BUDGETMANAGER_H
#define BUDGETMANAGER_H

#include "UserManager.h"
#include "SupportingMethods.h"

using namespace std;

class BudgetManager
{

UserManager userManager;
//ItemManager *itemManager;
//const string FILE_NAME_WITH_USERS;
//const string FILE_NAME_WITH_INCOMES;
//const string FILE_NAME_WITH_EXPENSES;

public:

BudgetManager(string fileNameWithUsers)
: userManager(fileNameWithUsers){




}

~BudgetManager()
{
   // delete itemManager;
    //itemManager = NULL;
}

char chooseOptionsFromMainMenu();
void userRegistration();
void userLoging();
bool ifUserIsLoggedIn();
char chooseOptionsFromBudgetMenu();
void addIncome();
void addExpense();
void displayBalanceForCurrentMonth();
void displayBalanceForPreviousMonth();
void displayBalanceForSelectedPeriod();
void changeLoggedUserPassword();
int logoutUser();



};

#endif // BUDGETMANAGER_H
