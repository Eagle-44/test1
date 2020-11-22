#include <string>
using namespace std;

class Medicine {
public:
    Medicine();
    Medicine(int quantity, string name, bool prescription, int day, int month, int year, double price);
    ~Medicine();

    int getQuantity();
    string getName();
    bool getPrescription();
    int getDay();
    int getMonth();
    int getYear();
    void setPrice(double price);
    double getPrice();

    void printInfo();


private:
    int quantity;
    string name;
    bool prescription;
    int day;
    int month;
    int year;
    double price;

};