#ifndef LISTAADJACENCIA_H_INCLUDED
#define LISTAADJACENCIA_H_INCLUDED
#include "Aresta.h"
class ListaAdjacencia
{
private:
    Aresta* pri;
	Aresta* ult;
	Aresta* aux;
public:
   ListaAdjacencia();
   void inicio();
   void proximaAresta();
   Aresta* getAux();
   void inserir(int id);
   bool listaVazia();
   void procurarIdAresta(int id);
   bool existeIdAresta(int id);
   void imprimir();
   void removerAresta(int id);
    ~ListaAdjacencia();
};
#endif // ARESTA_H_INCLUDED