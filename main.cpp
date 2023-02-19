#include <iostream>
#include "Gate.h"


class RSFlipFlop {
public:
    int Q = 0;
    int Q_bar = 1;

    void update(int R, int S) {
        assert(R + S < 2);
        if (R == 1) {
            Q = 1;
            Q_bar = 0;
        };
        if (S == 1) {
            Q = 0;
            Q_bar = 1;
        };
    }
};


class LevelTriggeredDTypeFlipFlop {
public:
    int Q = 0;
    int Q_bar = 1;

    void update(int data, int clock) {
        if (clock == 1) {
            Q = data;
            Q_bar = !data;
        };
    }
};


class EdgeTriggeredDTypeFlipFlop {
public:
    int Q = 0;
    int Q_bar = 1;
    int clock = 0;

    void update(int aData, int aClock) {
        if ((clock == 0) && (aClock == 1)) {
            Q = aData;
            Q_bar = !aData;
        };
    }
};


class RippleCounter{
    EdgeTriggeredDTypeFlipFlop array

public:
    RippleCounter(int bit_count) {
        EdgeTriggeredDTypeFlipFlop array[bit_count];
        for (int i = 0; i < 4; i++){
            array[i].update(1, 1);
        }
    }

    int * update(int clock){
        array
    }
};


int main() {
    RippleCounter a = RippleCounter(5);


//    RippleCounter array[4];
//    for (int i = 0; i < 4; i++){
//        std::cout << array[i].Q << "\n";
//    }

//    RippleCounter r = RippleCounter(8);
    return 0;
}





