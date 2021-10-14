#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class CAmbulance : public CCar {           // CCar class の継承 -> : public CCar を受け継ぐ
public:
    // constructor
    CAmbulance();
    // destructor
    virtual ~CAmbulance();
    // 救命救急活動
    void sevePeople();
private:
    int m_number;
};

#endif // _AMBULANCE_H_
