#include "UserManager.h"


void UserManager :: userRegistration()
{
    User user = enterNewUserDetails();

    users.push_back(user);
    usersFile.addUserToFile(user);
    cout << endl << "Account created successfully" << endl << endl;
    system("pause");
}

int UserManager::getLoggedInUserId()
{
    return loggedInUserId;
}

void UserManager :: setUserId(int newLoggedInUserId)
{
     loggedInUserId = newLoggedInUserId;
}

User UserManager::enterNewUserDetails()
{
    User user;
    string login = "";

    user.setUserId(getNewUserId());

    do
    {
        cout << "Enter login: ";
        login = SupportingMethods::loadLine();
        user.setLogin(login);
    } while (whetherLoginExists(user.getLogin()) == true);
    string password;
    cout << "Enter password: ";
    password = SupportingMethods::loadLine();
    user.setPassword(password);

    return user;
}
int UserManager :: getNewUserId()
{
    if (users.empty() == true)
        return 1;
    else
        return users.back().getUserId() + 1;
}

bool UserManager :: whetherLoginExists(string login)
{

    for (int i=0; i<users.size(); i++)
    {
        if(users[i].getLogin()==login)
        {
            cout << endl << "There is a user with this login"<<endl;
            return true;
        }
    }
    return false;
}

void UserManager::displayAllUsers()
   {
       for (int i=0; i<users.size(); i++)
    {

        cout << users[i].getUserId() <<endl;
        cout << users[i].getLogin() <<endl;
        cout << users[i].getPassword() <<endl;

    }
   }


void UserManager::userLoging()
{
    User user;
    string login = "", password = "";

    cout << endl << "Enter login: ";
    login = SupportingMethods::loadLine();
    vector <User>::iterator itr = users.begin();
    while (itr != users.end())
    {
        if (itr -> getLogin() == login)
        {
            for (int numberOfTries = 3; numberOfTries > 0; numberOfTries--)
            {
                cout << "Enter the password. Remaining tries: " << numberOfTries << ": ";
                password = SupportingMethods::loadLine();
                if (itr -> getPassword() == password)
                {
                    loggedInUserId = itr -> getUserId();
                    cout << endl << "You logged in." << endl << endl;
                    system("pause");
                    return;
                }
            }
            cout << "Wrong password entered 3 times." << endl;
            system("pause");
            return;
        }
        itr++;
    }
    cout << "There is no user with this login." << endl << endl;
    system("pause");
    return;
}

void UserManager::changeLoggedUserPassword()
{
    string newPassword = "";
    cout << "Enter a new password: ";
    newPassword = SupportingMethods::loadLine();
    for (vector <User>::iterator itr = users.begin(); itr != users.end(); itr++)
    {
        if (itr -> getUserId() == loggedInUserId)
        {
            itr -> setPassword(newPassword);
            cout << "Password has been changed." << endl << endl;
            system("pause");
        }
    }
    saveAllUsersToFile();
}

void UserManager::saveAllUsersToFile()
{
    //plikZUzytkownikami.saveAllUsersToFile(users); konieczność aktualizacji do plików XML
}

void UserManager :: logoutUser()
{
   loggedInUserId = 0;
}

bool UserManager::ifUserIsLoggedIn()
{
    if(loggedInUserId > 0)
        return true;
    else
        return false;
}
