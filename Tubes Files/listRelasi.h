#include <iostream>
#include "listParrent.h"
#include "listChild.h"

using namespace std;

typedef struct Relasi* relateAddress;

struct relasi {
	//address parrent disini//
	addressChild mamin;
	relateAddress next;
	relateAddress prev;
};

struct listRelasi {
	relateAddress first;
	relateAddress last;
};
