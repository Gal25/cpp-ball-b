#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <vector>
using namespace std;


namespace ariel{
    class Team {
        private:
            string name;
            int points;
        public:
            double talent;
            int the_wins;
            int the_losses;

            Team();
            Team(string other_name, double other_talent, int other_points);

            int get_points();
            
    };
}