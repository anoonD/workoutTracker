#include <iostream>
#include <unordered_map>

namespace wt {
    enum class muscleGroups { // Main muscle groups
        Null = -1,
        Core,
        Shoulders,
        Arms,
        Legs,
        Back,
        Chest
    };

    std::unordered_map<std::string, muscleGroups> muscles;  
            muscleStruct(muscleGroups::Core, "Abdominals"),
            muscleStruct(muscleGroups::Core, "Abductors"),
            muscleStruct(muscleGroups::Arms, "Biceps"),
            muscleStruct(muscleGroups::Arms, "Triceps"),
            muscleStruct(muscleGroups::Arms, "Forearms"),
            muscleStruct(muscleGroups::Back, "Lats"),
            muscleStruct(muscleGroups::Back, "Upper Back"),
            muscleStruct(muscleGroups::Back, "Lower Back"),
            muscleStruct(muscleGroups::Chest, "Chest"),
            muscleStruct(muscleGroups::Legs, "Quadriceps"),
            muscleStruct(muscleGroups::Legs, "Calves"),
            muscleStruct(muscleGroups::Legs, "Hamstrings"),
            muscleStruct(muscleGroups::Legs, "Glutes"),
            muscleStruct(muscleGroups::Shoulders, "Shoulders"),
            muscleStruct(muscleGroups::Shoulders, "Traps"),
            muscleStruct(muscleGroups::Shoulders, "Neck"),
    };
}