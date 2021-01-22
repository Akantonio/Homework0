//Adrian Antonio 1/21/2021
//Homework0: Celsius to Fahrenheit

#include <iostream>
#include <vector>
#include <string>

int main(int argc,const char** argv ) {
    int storage= 10;
    std::vector<std::string> argS;
    argS.reserve(storage);
    for(int index=0;index<argc;++index){
        argS.emplace_back(argv[index]);
    }

    for(const auto& i:argS){
        std::cout<< i << std::endl;
    }


    return 0;
}
