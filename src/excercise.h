#pragma once
#include "wt.h"

namespace wt {
    class excercise {
    private:
        std::string m_name;
        std::string m_muscleName;
        muscleGroups m_muscleGroup;
        int m_reps;
        double m_weight;

    public:
        /* Constructors and Destructors */
        excercise();
        ~excercise();
        excercise(std::string name, std::string muscleName, muscleGroups muscleGroup, int reps, int weight);
    };
}