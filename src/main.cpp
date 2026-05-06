// Copyright 2026 <Your Name>
#include "tpqueue.h"

int main() {
    TPQueue<SYM> pqueue;
    pqueue.push(SYM{'a', 4});
    pqueue.push(SYM{'b', 7});
    SYM c1 = pqueue.pop();
    SYM c2 = pqueue.pop();
    (void)c1;
    (void)c2;
    return 0;
}
