//Adrian Antonio 1/21/2021
//Homework0: Celsius to Fahrenheit

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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
    if(argc<2 || argc>3){
        std::cout<<"Must type: [--ctof or --ftoc] and a [number]"<< std::endl;
    }else {
        std::vector<std::string> arguments;
        arguments.reserve(3);
        for (int index = 0; index < 3; ++index) {
            arguments.push_back(argv[index]);
        }

        for (auto i:arguments) {
            std::cout << " Test: " << i << std::endl;
        }

        if(arguments[1]=="--ftoc"|| arguments[1]=="--ctof"){
            if (arguments[1] == "--ftoc") {
                std::cout << "Fahrenheit: " << argv[2] << " to celsius: " << cpp_ftoC(argv[2]) << std::endl;
            }
            if (arguments[1] == "--ctof") {
                std::cout << "Celsius: " << argv[2] << " to Fahrenheit: " << c_cToF(argv[2]) << std::endl;
            }
        }else{
            std::cout<< "WRONG INPUT TYPE: [--ctof or --ftoc] and a [number]" << std::endl;
        }


    }

    return 0;
}
