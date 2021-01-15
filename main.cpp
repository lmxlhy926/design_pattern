#include <iostream>
#include "factory.h"


using namespace std;

int main() {

    OperationFactory fac;
    Operation opr;
    opr = fac.createOperate("+");
    cout << opr.getresult() << endl;

    return 0;
}
