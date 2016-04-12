#include <iostream>
#include "No.h"
using namespace std;

No::No()//construtor da classe
{
    proxNo = NULL;
    aresta = NULL;
}
void No::atribIdNo(int p)
{
    idNo = p;
}
void No::atribAresta(Bloco* p)
{
    aresta = p;
}
void No::atribProx(No* c)
{
    proxNo = c;
}
int No::consultaId()
{
    return idNo;
}
Bloco* No::consultaAresta()
{
    return aresta;
}
No* No::consultaProxNo()
{
    return proxNo;
}
No::~No() {}//destrutor da classe