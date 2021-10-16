#include <iostream>
#include "../head/sup1.h"
#include "../head/sub2.h"
#include "../head/sub1.h"
#include "../head/sub2.h"

using namespace std;

int main() {
	CSup1 *s1 = new CSub1();
	CSup2 *s2 = new CSub2();
	delete s1;
	delete s2;
	return 0;
}
