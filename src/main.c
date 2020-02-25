#include <stdio.h>

#define USGAGE "Error: Usage: nc2gif <infile> <outfile>"
#define ERROR(e) fprintf("%s",(e))

int main(int argc, char **argv)
{
    if (argc != 3) {
        ERROR(USGAE);
        return 1;
    }
    //process file
    return 0;
}
