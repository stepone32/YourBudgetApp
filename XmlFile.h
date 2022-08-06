#ifndef XMLFILE_H
#define XMLFILE_H


#include <iostream>
#include <fstream>
#include <cstdlib>
#include "User.h"

using namespace std;

class XmlFile {

    protected:
    const string FILE_NAME;

public:
    XmlFile(string fileName): FILE_NAME(fileName) {


    }

string downloadFileName();
//bool whetherFileIsEmpty();

};

#endif //XMLFILE_H
