#include<iostream>
#include<iomanip>


int main(){

std::cout<<"enter an integer number"<<std::endl;
int num ;

std::cin>> num;

std::cout<<"Dismal Defult : "<<num <<std::endl;
std::cout<<"\n";
std::cout<< "HexaDismal is : "<<std::hex<<num<<std::endl;
std::cout<<"HexaDismal by uppercase : "<<std::hex<<std::uppercase<<num<<std::endl;
std::cout<<"HexaDisml by non uppercase : " <<std::hex<<std::nouppercase<<num<<std::endl;
std::cout<<"\n";
std::cout<<"octl : "<<std::oct<<num<<std::endl;
std::cout<<"\n";

std::cout<<std::showbase;
std::cout<<std::dec<<num<<std::endl;
std::cout<<std::hex<<num<<std::endl;
std::cout<<std::oct<<num<<std::endl;
 










    return 0;
}