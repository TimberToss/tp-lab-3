#include <iostream>
#include <string>
#include "DateTime.h"

int main(){
    DateTime dateTime(31, 10, 2018);
    std::cout << dateTime.getTomorrow() << std::endl;
    return 0;
}
