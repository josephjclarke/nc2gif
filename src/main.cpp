#include <iostream>

const char *usage = "Error: Usage: nc2gif <infile> <outfile>";


int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cerr << usage;
        return 0;
    }
    //process file
    return 0;
}
