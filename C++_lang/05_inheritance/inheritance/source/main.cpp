#include "../head/car.h"
#include "../head/ambulance.h"

int main() {
    CCar c;
    c.supply(10);     // 燃料補給
    c.move();         // 移動
    c.move();         // 移動
    CAmbulance a;     // 救急車 class
    a.supply(10);
    a.move();
    a.sevePeople();   // 人々を救うと言う意味
    return 0;
}
