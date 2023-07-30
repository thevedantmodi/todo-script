#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

const string USAGE = "Usage: todo [target-directory]\n";

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cerr << USAGE;
        exit(EXIT_FAILURE);
    }
    
    string directory = argv[1];
    string command = "grep -rn \"TODO\" " + directory;

    system(command.c_str());
    return 0;
}
