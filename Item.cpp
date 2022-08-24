#include "Item.h"

    void Item :: setUserId(int newUserId)
    {
        if(newUserId>0)
        userId = newUserId;
    }

    void Item :: setItemId(int newUserId)
    {
        userId = newUserId;
    }

    void Item :: setItemDate(string newItemDate)
    {
        itemDate = newItemDate;
    }

    void Item :: setDescriptionItem(string newDescriptionItem)
    {
        descriptionItem = newDescriptionItem;
    }

    void Item :: setAmountItem(int newAmountItem)
    {
        amountItem = newAmountItem;
    }

    int Item :: getUserId()
    {
        return userId;
    }

    int Item :: getItemId()
    {
        return itemId;
    }

    string Item :: getItemDate()
    {
        return itemDate;
    }

    string Item :: getDescriptionItem()
    {
        return descriptionItem;
    }

    int Item :: getAmountItem()
    {
        return amountItem;
    }
