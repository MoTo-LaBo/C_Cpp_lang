class Encap {
public:
    void setNum(int num);  // private指定されたメンバ変数に書き込む
    int getNum();          // private指定されたメンバ変数を読み取る
private:
    int m_num;  // C++だけではなく原則的にメンバ変数は privateにするという慣例がある
};

// カプセル化
/* メンバ変数は直接外部から触らせないようにする。文法的には public にすれば使用はできるが...
    原則的にインスタンスのメンバ変数は使用できないようにする考えが object指向にはある */
