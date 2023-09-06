#include <iostream>
#include "huffman.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}
    
    huffman f(argv[1], argv[2]);
    f.compress();
    cout << "Compressed successfully" << endl;
    
    return 0;
}