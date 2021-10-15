#include "../head/const.h"

CConst::CConst() {
    m_str = "";
}

void CConst::setStr(const string str) {
    m_str = str;
    // str = "";
}

string CConst::getStr() const {
    // m_str = "";
    return m_str;
}
