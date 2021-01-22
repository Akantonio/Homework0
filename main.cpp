//Adrian Antonio 1/21/2021
//Homework0: Celsius to Fahrenheit

#include <iostream>
#include <sstream>
#include <string>

double c_cToF(const char* input){
    std::istringstream number(input);
    double temperature =0;
    number>>temperature;
    return (1.8*temperature)+32.0;
}
double cpp_ftoC(const char* input){

    double temperature= strtod(input,nullptr);
    return (temperature-32)/(9.0/5);
}

int main(int argc,const char* argv[] ) {


     std::cout<<"Argument zero: "<< argv[0]<<std::endl;// name of file with the .exe

        std::cout<< "Fahrenheit: "<< argv[2] << " to celsius: " <<cpp_ftoC(argv[2])<<std::endl;
        std::cout<< "Celsius: "<< argv[2]<< " to Fahrenheit: " << c_cToF(argv[2])<<std::endl;






    return 0;
}
