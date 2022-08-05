#include "UserManager.h"


void UserManager :: userRegistration()
{
    User user = enterNewUserDetails();

    users.push_back(user);
    //plikZUzytkownikami.dopiszUzytkownikaDoPliku(user); /trzeba zaktualizowaæ do pliku XML

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
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
        cout << "Podaj login: ";
       // login = MetodyPomocnicze::wczytajLinie();
       cin >> login;
        user.setLogin(login);
    } while (whetherLoginExists(user.getLogin()) == true);
    string password;
    cout << "Podaj haslo: ";
    //password = MetodyPomocnicze::wczytajLinie();
    cin >> password;
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
            cout << endl << "Istnieje uzytkownik o takim loginie"<<endl;
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

    cout << endl << "Podaj login: ";
    //login = MetodyPomocnicze::wczytajLinie();
    cin >> login;
    vector <User>::iterator itr = users.begin();
    while (itr != users.end())
    {
        if (itr -> getLogin() == login)
        {
            for (int numberOfTries = 3; numberOfTries > 0; numberOfTries--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << numberOfTries << ": ";
                //haslo = MetodyPomocnicze::wczytajLinie();
                cin >> password;
                if (itr -> getPassword() == password)
                {
                    loggedInUserId = itr -> getUserId();
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    return;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return;
}

void UserManager::changeLoggedUserPassword()
{
    string newPassword = "";
    cout << "Podaj nowe haslo: ";
    //newPassword = MetodyPomocnicze::wczytajLinie();
    cin >> newPassword;
    for (vector <User>::iterator itr = users.begin(); itr != users.end(); itr++)
    {
        if (itr -> getUserId() == loggedInUserId)
        {
            itr -> setPassword(newPassword);
            cout << "Haslo zostalo zmienione." << endl << endl;
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
