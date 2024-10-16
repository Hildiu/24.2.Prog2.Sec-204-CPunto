#include "CPunto.h"

int main()
{
    CPunto p1(45.67, 23.33);
    CPunto p2(12.67, 7.77);

    cout << "La distancia es: " << p1.distancia(p2) << "\n";

//--- los dos puntos ahora son dinamicos
    CPunto   *pPunto1 = new CPunto(89.89, 33.33);
    CPunto  *pPunto2 = new CPunto(12.45, 6.67);
    cout << "La distancia es: " << pPunto1->distancia( *pPunto2  );
    delete pPunto1;
    pPunto1= nullptr;
    delete pPunto2;
    pPunto2 = nullptr;

    return 0;
}
