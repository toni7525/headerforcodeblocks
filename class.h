#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;
class clas{
    private:

    public:
    int v[99];
    int n;
    clas();
    void AfisazaVector();
    void AfisazaNumar(int in);
    void AfisazaScris(string s);
    void SorteazaVector(string cres);
    void ScrieVector();
    void AfisazaNumereDinVectorDivizibileCu();
    void AfisazaCiteNumereDinVectorSuntDivizibileCu();
    void AfisazaNumarPePozitiaNDinVector();
    void AfisazaMaiMulteNumerePePozitiiDiferiteDinVector();
    void AfiseazaNumarPePozitieFixaDinVector(int poz);
    void SumaDeNNumereCuAfisare();
    void SumaDeNumereDinVectorCuAfisare();
    void SumaDeNumereDinVectorDivizibileCuAfisare();
    void LinieNoua();
};
#endif // CLASS_H
