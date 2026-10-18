#include <iostream>
#include <string>




int main(){


std::string LCURstring;
std::string RCURstring;
std::string CurSymL;
std::string CurSymR;
double LCUR;
double RCUR;
double LCUR2;
double ResultFinal;
double InputCur;

std::cout << "Input Currency 1 (USD, HKD, EUR, CNY, JPY): ";
std::cin >> LCURstring;

if(LCURstring == "USD") {
    LCUR = 1.12;
    CurSymL = "$";}
else if(LCURstring == "HKD") {
    LCUR = 8.73;
    CurSymL = "HK$";}
else if(LCURstring == "CNY") {
    LCUR = 7.50;
    CurSymL = "元¥";}
else if(LCURstring == "EUR") {
    LCUR = 1.0;
    CurSymL = "€";}
else if(LCURstring == "JPY") {
    LCUR = 177.0;
    CurSymL = "円¥";}
else{
    std::cout << "EERRORRRRR";
}
std::cout <<"Your Currency is " << LCURstring << " / " << LCUR << CurSymL << std::endl;
std::cout << "Input Currency 2 (USD, HKD, EUR, CNY, JPY): ";
std::cin >> RCURstring;

if(RCURstring == "USD") {
    RCUR = 1.12;
    CurSymR = "$";}
else if(RCURstring == "HKD") {
    RCUR = 8.73;
    CurSymR = "HK$";}
else if(RCURstring == "CNY") {
    RCUR = 7.50;
    CurSymR = "元¥";}
else if(RCURstring == "EUR") {
    RCUR = 1.0;
    CurSymR = "€";}
else if(RCURstring == "JPY") {
    RCUR = 177.0;
    CurSymR = "円¥";}
else{
    std::cout << "EERRORRRRR";
}



std::cout <<"The Currency you will convert to is " << RCURstring << " / " << RCUR << CurSymR << std::endl;
std::cout << "Input your Amount!: ";
std::cin >> InputCur;
std::cout << InputCur << CurSymL << '\n';
ResultFinal = ((1 / LCUR)*RCUR)*InputCur;
std::cout << InputCur << CurSymL <<" is Equal to " << ResultFinal << CurSymR << '\n';

std::cout << ResultFinal;







    return -1;
}



