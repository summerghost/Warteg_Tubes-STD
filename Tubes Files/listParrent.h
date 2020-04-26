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
