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

