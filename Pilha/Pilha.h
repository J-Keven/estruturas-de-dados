#ifndef PILHA_H
#define PILHA_H
typedef struct topo Topo;
Topo *Cria();
Topo * insereItem(Topo * pilha, int valor);
Topo * RemoveItem(Topo * pilha);
Topo *Libera(Topo* pilha);
void Mostrar(Topo *pilha);
void MostrarTopo(Topo * pilha);
int QtdElementos(Topo * pilha);
#endif