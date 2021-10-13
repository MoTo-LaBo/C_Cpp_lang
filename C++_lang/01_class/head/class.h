#ifndef _CLASS_H_
#define _CLASS_H_  // 2重の include 防止

/* ---------- class の宣言 ---------- */
/* class名もなるべく head名 に合わせる
  ・ 原則的には 1つの head で 1つの class 宣言
  ・ 複数の class を記述するのは NG
 どうしても fileすうが増えてしまうが, C++ では file を分ける形で作成していく */

// class の頭文字は大文字
/* class は構造体に関数をつけたモノと言う認識に近い */

class Class {
public:
    void set(int num);  // m_num に値を設定する
    int get();          // m_num の値を取得する
private:
    int m_num;
};

#endif  // _CLASS_H_
