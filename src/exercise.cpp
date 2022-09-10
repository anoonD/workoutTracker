#include "exercise.h"

namespace wt {
    exercise::exercise() {}

    exercise::~exercise() {}

    exercise::exercise(std::string name, std::string muscleName)
        : m_name(name), m_muscleName(muscleName)
    {}


}