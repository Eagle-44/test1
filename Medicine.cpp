#include <iostream>
#include "Medicine.h"

Medicine::Medicine() {}
Medicine::Medicine(int quantity, string name, bool prescription, int day, int month, int year, double price) : quantity(quantity), name(name), prescription(prescription), day(day), month(month),year(year), price(price) {}
Medicine::~Medicine() {}

int Medicine::getQuantity(){
    return quantity;
}

string Medicine::getName(){
    return name;
}

bool Medicine::getPrescription(){
    return prescription;
}

int Medicine::getDay(){
    return day;
}

int Medicine::getMonth(){
    return month;
}

int Medicine::getYear() {
    return year;
}

double Medicine::getPrice(){
    return price;
}

void Medicine::setPrice(double price){
    this->price = price;
}

void Medicine::printInfo(){
    std::cout<<"Quantity: "<< quantity <<std::endl;
    std::cout<<"Name: "<< name <<std::endl;
    if(prescription == 1){
        std::cout<<"Prescription: true"<<std::endl;
    }else{
        std::cout<<"Prescription: false"<<std::endl;
    }

    std::cout<<"Expired date: "<< day <<"/"<<month<<"/"<<year<<std::endl;
    std::cout<<"Price: "<< price <<std::endl<<std::endl;
}