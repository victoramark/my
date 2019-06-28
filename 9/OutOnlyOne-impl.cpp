#include "OutOnlyOne.cpp"
#include "Airplane.h"
#include "Train.h"
#include "Container.h"

template void OutOnlyOne<Airplane>(List *lst, ofstream &ofst);
template void OutOnlyOne<Train>(List *lst, ofstream &ofst);