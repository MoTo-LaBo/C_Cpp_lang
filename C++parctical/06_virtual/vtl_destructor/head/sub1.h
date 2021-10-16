#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"

class CSub1 : public CSup1 {
public:
	CSub1() { cout << "CSub1の constructor" << endl; }
	~CSub1() { cout << "CSub1の destructor" << endl; }
};

#endif // _SUB1_H_
