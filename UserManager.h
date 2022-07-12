#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "User.h"
//#include "PlikZUzytkownikami.h"


using namespace std;

class UserManager
{
    int loggedInUserId;
    vector <User> users;

    User enterNewUserDetails();
    int getNewUserId();
    bool whetherLoginExists(string login);
    string userFileName;  //UsersFile usersFile; /podmieniŠ po stworzeniu klasy UseFile


public:
    //UserManager(string nazwaPlikuZuzytkownikami): plikZUzytkownikami(nazwaPlikuZuzytkownikami)
     UserManager(string newUserFileName): userFileName(newUserFileName)
    {
        //uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
        loggedInUserId = 0;
    };

    void userRegistration();
    void setUserId(int newLoggedInUserId);
    void userLoging();
    bool ifUserIsLoggedIn();
    int getLoggedInUserId();
    void displayAllUsers();
    void changeLoggedUserPassword();
    void saveAllUsersToFile();
    void logoutUser();

};

#endif // USERMANAGER_H
