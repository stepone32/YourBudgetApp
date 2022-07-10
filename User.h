#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User
{
    int userId;
    string login;
    string password;
    string name;
    string surname;

public:
    Uzytkownik ( int userId = 0, string login = "", string password = "", string name = "", string surname = "" )
    {
        this->userId = userId;
        this->login = login;
        this->password = password;
        this->name = name;
        this->surname = surname;
    }

    void setUserId(int newUserId);
    void setLogin(string newLogin);
    void setPassword(string newPassword);
    void setName(string newName);
    void setSurname(string newSurname);

    int getUserId();
    string getLogin();
    string getPassword();
    string getName();
    string getSurname();

};

#endif // USER_H
