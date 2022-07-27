#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

int main(int, char**) {

    // plik poprawny  
    std::string r0("rog0.dat");
    std::ifstream is0(r0, std::ios::binary);
    if(is0.is_open())
    {
        std::istream_iterator<uint8_t> start(is0), end;
        std::vector<uint8_t> data(start, end);
        printf("data.size()==%d\n", data.size());
    }
    else
    {
        printf("No file: %s\n",r0.c_str());
    }

    // plik mniej poprawny !!!
    std::string r9("rog9.dat");
    std::ifstream is(r9, std::ios::binary);
    if(is.is_open())
    {
        std::istream_iterator<uint8_t> start(is), end;
        std::vector<uint8_t> data(start, end);
        printf("data.size()==%d\n", data.size());
    }
    else
    {
        printf("No file: %s\n",r9.c_str());
    }
}
