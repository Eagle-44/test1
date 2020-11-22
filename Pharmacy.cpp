#include <iostream>
#include "Pharmacy.h"

Pharmacy::Pharmacy(int LENGTH){
    this->LENGTH=LENGTH;
    ArrOfMedic = new Medicine[LENGTH];
}

Pharmacy::~Pharmacy() {
    delete []ArrOfMedic;
}

void Pharmacy::addMedicinetoarray(Medicine medicine,int number) {
    if(number <= LENGTH && number >= 0){
        ArrOfMedic[number]=medicine;
    }
}
Medicine Pharmacy::getMedicineFromMedicineArray(int i) {
    return ArrOfMedic[i];
}
void Pharmacy::deleteMedicinetoarray(int i) {

    if(i <= LENGTH && i >= 0){
        for(int a = i; a < LENGTH-1; a++){
            ArrOfMedic[a]=ArrOfMedic[a+1];

        }
        LENGTH = LENGTH - 1;
    }
}

void Pharmacy::getLowerprieces() {
    int i, j, first;
    Medicine temp;
    for (i = LENGTH - 1; i > 0; i--) {
        first = 0;
        for (j = 1; j <= i; j++) {
            if (ArrOfMedic[j].getPrice() > ArrOfMedic[first].getPrice())
                first = j;
        }
        temp = ArrOfMedic[first];
        ArrOfMedic[first] = ArrOfMedic[i];
        ArrOfMedic[i] = temp;
    }
    for(i = 0;i < LENGTH;i++){
        std::cout<<"Name: "<< ArrOfMedic[i].getName()<<" ";
        if(ArrOfMedic[i].getPrescription()==1){
            std::cout<<", Prescription: true"<<" ";
        }else{
            std::cout<<", Prescription: false"<<" ";
        }

        std::cout<<"Price: "<< ArrOfMedic[i].getPrice()<<" "<<std::endl;
    }

}

void Pharmacy::Discounts() {
    for(int i = 0;i < LENGTH;i++){
        ArrOfMedic[i].setPrice(ArrOfMedic[i].getPrice() - ((ArrOfMedic[i].getPrice()/100))*10);
    }
}