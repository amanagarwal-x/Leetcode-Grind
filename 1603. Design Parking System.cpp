#include<iostream>
#include <vector>
using namespace std;



class ParkingSystem {
public:
    int available[3];
    
    ParkingSystem(int big, int medium, int small) {
        available[0] = big;
        available[1] = medium;
        available[2] = small;
    }
    
    bool addCar(int carType) {
        if (carType == 1 && available[0] != 0){
            available[0] --;
            return true;
        }
        else if (carType == 2 && available[1] != 0){
            available[1] --;
            return true;
        }
        else if (carType == 3 && available[2] != 0){
            available[2] --;
            return true;
        }
        else return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */