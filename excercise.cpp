#include "excercise.h"

namespace wt {
    excercise::excercise() {}

    excercise::~excercise() {}

    excercise::excercise(std::string name, muscleStruct muscle, int reps, int weight)
        : m_name(name), m_muscle(muscle), m_reps(reps), m_weight(weight)
    {}


}