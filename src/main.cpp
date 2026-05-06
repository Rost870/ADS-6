// Copyright 2026 <Your Name>
#include "tpqueue.h"

struct SYM {
    char ch;
    int prior;
};

int main() {
    TPQueue<SYM> pqueue;
    pqueue.push(SYM{'a', 4});
    pqueue.push(SYM{'b', 7});
    SYM c1 = pqueue.pop();
    SYM c2 = pqueue.pop();
    return 0;
}
