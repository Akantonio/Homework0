//Adrian Antonio 1/21/2021
//Homework0: Celsius to Fahrenheit

#include <iostream>

#include <string>

int cToF(){
    int temperature =0;
    return temperature;
}
double cpp_ftoC(const char* input){

    double temperature= strtod(input,nullptr);
    return (temperature-32)/(9.0/5);
}

int main(int argc,const char* argv[] ) {

     std::cout<<"Argument zero: "<< argv[0]<<std::endl;

        std::cout<< cpp_ftoC(argv[2]);






    return 0;
}
