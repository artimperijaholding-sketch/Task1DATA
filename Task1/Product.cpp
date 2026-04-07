#include "Product.h"

Product::Product()
{
    title = "Noname";
    price = 0;
    madeDate = Date();
    termSave = 0;
}

Product::Product(string title, float price, Date madeDate, int termSave)
{
    this->title = title;
    this->price = price;
    this->madeDate = madeDate;
    this->termSave = termSave;
}

void Product::setTitle(string title)
{
    if (title.length() > 2) this->title = title;
}

string Product::getTitle() const
{
    return title;
}

void Product::setPrice(float price)
{
    if (price > 0) this->price = price;
}

float Product::getPrice() const
{
    return price;
}

Date Product::getMadeDate() const
{
    return madeDate;
}

int Product::getTerm() const
{
    return termSave;
}

bool Product::isExpired() const
{
    
    return madeDate + termSave <= Date();
}

ostream& operator<<(ostream& out, const Product& obj)
{
    out << "=====================================" << endl;
    out << "Title: " << obj.title << endl;
    out << "Price: " << obj.price << endl;
    out << "Made date: " << obj.madeDate << endl;
    out << "Finish Date: " << obj.madeDate + obj.termSave << endl;
    if (obj.isExpired()) out << "EXPIRED!!!" << endl;
    out << "=====================================" << endl;
    return out;
}

istream& operator>>(istream& in, Product& obj)
{
    cout << "Input Title: ";
    getline(in, obj.title);
    cout << "Input Price";
    in >> obj.price;
    cout << "Input Made Date: ";
    in >> obj.madeDate;
    cout << "Input Term Save: ";
    in >> obj.termSave;
    return in;
}
