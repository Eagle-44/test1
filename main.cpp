#include <iostream>
#include "Pharmacy.h"

int main() {
    Pharmacy p(5);
    p.addMedicinetoarray(Medicine(100,"Protamol",true,21,05,2026,12.5),0);
    p.addMedicinetoarray(Medicine(50,"Treesopal",false,01,01,2021,43.5),1);
    p.addMedicinetoarray(Medicine(50,"Sympal",true,19,03,2021,1111),2);
    p.addMedicinetoarray(Medicine(50,"Hrupal",false,06,07,2023,4),3);
    p.addMedicinetoarray(Medicine(50,"Mipal-11",false,02,10,2022,32),4);


    p.Discounts();
    p.deleteMedicinetoarray(0);
    p.getLowerprieces();
    p.getMedicineFromMedicineArray(0).printInfo();


    return 0;
}