#include <iostream>
#include <unordered_map>

namespace wt {
    enum class muscleGroups { // Main { muscle groups
        Null = -1,
        Core,
        Shoulders,
        Arms,
        Legs,
        Back,
        Chest
    };

    std::unordered_map<std::string, muscleGroups> muscles = {
            { "Abdominals", muscleGroups::Core},
            { "Abductors", muscleGroups::Core},
            { "Biceps", muscleGroups::Arms},
            { "Triceps", muscleGroups::Arms},
            { "Forearms", muscleGroups::Arms},
            { "Lats", muscleGroups::Back},
            { "Upper Back", muscleGroups::Back},
            { "Lower Back", muscleGroups::Back},
            { "Chest", muscleGroups::Chest},
            { "Quadriceps", muscleGroups::Legs},
            { "Calves", muscleGroups::Legs},
            { "Hamstrings", muscleGroups::Legs},
            { "Glutes", muscleGroups::Legs},
            { "Shoulders", muscleGroups::Shoulders},
            { "Traps", muscleGroups::Shoulders},
            { "Neck", muscleGroups::Shoulders},
    };
}