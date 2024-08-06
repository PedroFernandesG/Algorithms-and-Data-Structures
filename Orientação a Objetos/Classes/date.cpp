#include <iostream>
#include "date.h"

using namespace std;

int Date::howmany = 0;

Date::Date(int dd, int mm, int yy) : d{dd}, m{mm}, y{yy}{
    count = 0;
    howmany++;
}
void Date::show() const{
    cout << d << "/" << m << "/" << y;
    count++;
}
Date& Date::set_day(int value){
    if(value > 0 && value <= 31){
        this->d = value;
    }
    return *this;
}
Date& Date::set_month(int value){
    if(value > 0 && value <= 12){
        this->m = value;
    }
    return *this;
}
Date& Date::set_year(int value){
    if(value >= 0){
        this->y = value;
    }
    return *this;
}