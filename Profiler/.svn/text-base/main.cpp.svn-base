/*
 *  ASTree.cpp
 *  Abstract Syntax Tree
 *
 *  Created by Jonathan Maletic on 11/8/11.
 *  Copyright 2012 Kent State University. All rights reserved.
 *
 *  Modified by:
 *
 */

#include "ASTree.hpp"
#include <iostream>
#include <fstream>

//
// Reads a srcML file into an internal data structure.
// Then prints out the data structure.

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Error: Input file name required." << std::endl;
        return(1);
    }

    std::ifstream xmlFile(argv[1]);
    srcML program;
    xmlFile >> program;
    xmlFile.close();
    
    if (argc == 3 ) {
        std::ofstream out(argv[2]);
        out << program;
        out.close();
    }
    else
        std::cout << program << std::endl;

	return 0;
}


