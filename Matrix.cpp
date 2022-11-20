#include "Matrix.h"
#include <map>
#include <iostream>
#include <array>
#include <fstream>
#include <iterator>
using namespace std;


Matrix::Matrix()
{
    //ctor
}



void Matrix::nacist(string nazev)
{






    ifstream cteniZeSouboru(nazev);

    int r,s;
    double hodnota=0;

    for(int i=0; i<4; i++)
    {
        cteniZeSouboru>>r>>s>>hodnota;
        //cout<<r<<s<<hodnota<<"\n";
        array <int,2> pom={r,s};
        matmap[pom]=hodnota;
    }



}

void Matrix::cist(string nazev)
{

    ifstream inputFile("mat.txt");

    istream_iterator<line> begin(inputFile);
    istream_iterator<line> end;

    for(istream_iterator<line> it = begin; it != end; ++it)
    {
        cout << *it << "@@\n";
    }

}


void Matrix::vypis(string nazev)
{

    //ofstream cteniZeSouboru(nazev);

    int r,s;
    double hodnota=0;
    map <array<int, 2>, double>::iterator it=matmap.begin();

    while( it!=matmap.end())
    {
        //cteniZeSouboru>>r>>s>>hodnota;
        cout<<it->second<<"\n";
        it++;

    }



}
