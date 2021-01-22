#include <iostream>
#include <vector>
#include <string>

int main(int argc,const char** argv ) {

    std::vector<std::string> argS;

    for(int index=0;index<argc;++index){
        argS.push_back(argv[index]);
    }

    return 0;
}
