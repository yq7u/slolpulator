#include <iostream>
#include <string>




int main(){


std::string LCURstring;
std::string RCURstring;
double LCUR;
double RCUR;


std::cout << "Input Currency 1 (USD, HKD, EUR, CNY, JPY)";
std::cin >> LCURstring;

if(LCURstring == "USD")
    LCUR = 5.1;
else
    std::cout << "EERRORRRRR";





std::cout <<"Your Currency is " << LCURstring << " / " << LCUR << std::endl;










    return -1;
}



