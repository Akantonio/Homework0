//Adrian Antonio 1/21/2021
//Homework0: Celsius to Fahrenheit

#include <iostream>
#include <vector>
#include <string>

int cToF(){
    int temperature =0;
    return temperature;
}
double cpp_ftoC(const char* input){

    double temperature= strtod(input,NULL);
    return (temperature-32)/(9.0/5);
}

int main(int argc,const char* argv[] ) {
    int storage= 10;
    std::vector<std::string> argS;
    argS.reserve(storage);
    for(int index=0;index<argc;++index){
        argS.emplace_back(argv[index]);
    }



    for(const auto& i:argS){    //check what is inside the argv
        std::cout<< i << std::endl;
    }


    return 0;
}
