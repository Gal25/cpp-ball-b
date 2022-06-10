#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <vector>
using namespace std;

#include "Team.hpp"

namespace ariel{
    class Leauge{
        private:
            vector<Team*> the_teams;
        public:
        Leauge();
        void random();
        Leauge(vector<Team*> other_leauge);          

    };
}