#ifndef USERSFILE_H
#define USERSFILE_H

#include <iostream>
#include <vector>
#include <cstring>
#include <string>

#include "XmlFile.h"
#include "User.h"
#include "Markup.h"


using namespace std;

class UsersFile : public XmlFile{

    string usersFileName;

public:
    UsersFile(string usersFileName) : XmlFile(usersFileName) {}

       void addUserToFile(User user);
       vector<User> loadUsersFromFile();
       //User downloadUserData();


};

#endif // USERSFILE_H
