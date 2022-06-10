#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <vector>
using namespace std;

#include "Leauge.hpp"

namespace ariel{
    class Schedule {
        public:
        vector<Game*> the_leauge;
        Leauge* leauge;
        Schedule(vector<Game*> other_leauge , Leauge * other_l);
        Schedule();

    };
}