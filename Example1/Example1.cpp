// Example1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "gzGooble.h"

int main()
{
    std::cout << "Hello World!\n";

    gzGooble a("123.456789817264817248");

    gzGooble b("29835923857298357928357928357298523234.23423423742837628");


    std::cout << (const char*)a.asString()<<"+"<< (const char*)b.asString()<<"="<< (const char*)(a+b).asString()<<"\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
