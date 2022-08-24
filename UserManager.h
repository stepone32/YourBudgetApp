#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "User.h"
#include "UsersFile.h"
//#include "PlikZUzytkownikami.h"


using namespace std;

class UserManager
{
    int loggedInUserId;
    vector <User> users;

    User enterNewUserDetails();
    int getNewUserId();
    bool whetherLoginExists(string login);
    UsersFile usersFile;


public:
    //UserManager(string nazwaPlikuZuzytkownikami): plikZUzytkownikami(nazwaPlikuZuzytkownikami)
     UserManager(string newUserFileName): usersFile(newUserFileName)
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
