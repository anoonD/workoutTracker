#pragma once
#include "wt.cpp"

namespace wt {
    class excercise {
    private:
        std::string m_name;
        muscleStruct m_muscle;
        int m_reps;
        double m_weight;

    public:
        /* Constructors and Destructors */
        excercise();
        ~excercise();
        excercise(std::string name, muscleStruct muscle, int reps, int weight);
    };
}