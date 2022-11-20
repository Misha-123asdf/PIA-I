#ifndef MATRIX_H
#define MATRIX_H
#include <map>
#include <iostream>
#include <array>
#include <fstream>
using namespace std;

class Matrix
{
    public:
        Matrix();
        map <array<int, 2>, double> matmap;
        void nacist(string nazev);
        void cist(string nazev);
        void vypis(string nazev);

    protected:

    private:
};

#endif // MATRIX_H
