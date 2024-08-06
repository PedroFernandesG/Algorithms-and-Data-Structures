#include <iostream>
#include "date.h"

using namespace std;

int main(void){

    Date data = Date(17, 03, 2006);
    const Date data2 = Date(18, 07, 2006);
    data.set_day(23).set_month(03).set_year(2001);
    cout << Date::get_howmany() << endl;

    return 0;
}