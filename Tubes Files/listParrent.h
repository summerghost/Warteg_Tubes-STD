#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

struct infotypeParent {
    string Warteg;
    string IDWarteg;
    int kapasitas;
};

typedef struct parent *address_parent;

struct parent {
    infotypeParent info;
    address_parent next;
};

struct List_Parent {
    address_parent first;
    address_parentlast;
};
void createListChild(List_Parent &L);
address_child CreateElmChild(infotypeParent in);
void insertFirstParent(List_Parent &L, address_parent P);
void insertAfterParent(List_Parent &L, address_parent Prec, address_parent P);
void insertLastParent(List_Parent &L, address_parent P);


void insertSortedParent(List_parent &L, infotypeParent X);
void deleteFirstParent(List_Parent &L, address_parent &P);
void deleteAfterParent(List_Parent &L, address_parent Prec, address_parent &P);
void deleteLastParent(List_Parent &L, address_parent &P);
void deleteSpesificParent(List_Parent &L, string X);
address_child findElmParent(List_Parent &L, string X);
void printInfoParent(List_Parent L);

void inputDataWarteg(List_Parent L,infotypeParent &in);

