#include "Medicine.h"

class Pharmacy {

public:
    Pharmacy(int LENGTH);
    ~Pharmacy();
    void addMedicinetoarray(Medicine medicine,int number );
    Medicine getMedicineFromMedicineArray(int i);
    void deleteMedicinetoarray(int i);
    void getLowerprieces();
    void Discounts();


private:
    int LENGTH;
    Medicine* ArrOfMedic;



};