#include "EmployePolyvalent.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << " Test de l Heritage Multiple et Resolution d Ambiguïtes " << std::endl;

    EmployePolyvalent emp(2300.0, 2600.0);

    emp.afficherTousSalaires();


    return 0;
}
