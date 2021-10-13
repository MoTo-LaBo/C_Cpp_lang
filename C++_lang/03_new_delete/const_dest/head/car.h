#ifndef _CAR_H_
#define _CAR_H_

// 自動車 class
class CCar {
public:
    // コンストラクタ
    CCar();
    // デストラクタ
    ~CCar();
    // 移動 method
    void move();
    // 燃料 method
    void supply(int fuel);
private:
    int m_fuel;          // 燃料
    int m_migration;     // 移動距離
};

#endif // _CAR_H_
