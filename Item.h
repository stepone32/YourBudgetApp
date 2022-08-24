#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item
{
    int userId;
    int itemId;
    string itemDate;
    string descriptionItem;
    int  amountItem;

public:
    Item(int userId = 0, int itemId = 0, string itemDate = "", string descriptionItem = "", int  amountItem = 0)
    {

        this->userId = userId;
        this->itemId = itemId;
        this->itemDate = itemDate;
        this->descriptionItem = descriptionItem;
        this->amountItem = amountItem;
    }

    void setUserId(int newUserId);
    void setItemId(int newUserId);
    void setItemDate(string newItemDate);
    void setDescriptionItem(string newDescriptionItem);
    void setAmountItem(int newAmountItem);

    int getUserId();
    int getItemId();
    string getItemDate();
    string getDescriptionItem();
    int getAmountItem();

};

#endif // ITEM_H
