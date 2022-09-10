#pragma once
#include "wt.h"

namespace wt {
    class exercise {
    private:
        std::string m_name;
        std::string m_muscleName;

    public:
        /* Constructors and Destructors */
        exercise();
        ~exercise();
        exercise(std::string name, std::string muscleName);
    };
}