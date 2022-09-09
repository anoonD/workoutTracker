#include "excercise.h"

namespace wt {
    excercise::excercise() {}

    excercise::~excercise() {}

    excercise::excercise(std::string name, std::string muscleName, muscleGroups muscleGroup, int reps, int weight)
        : m_name(name), m_muscleName(muscleName), m_muscleGroup(muscleGroup), m_reps(reps), m_weight(weight)
    {}


}