#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>

using namespace std;

#include "Schedule.hpp"
namespace ariel{


        Schedule::Schedule(vector<Game*> other_leauge, Leauge * other_l){
                this.the_leauge = other_leauge;
                this.leauge = other_l;
        }

        Schedule::Schedule(){
                size_t j = 0;
                for(size_t i = 1; i < this->leauge.the_teams.size(); i++){
                        this.the_leauge.push_back(Game(this->leauge.the_teams.at(i), this->leauge.the_teams.at(j)));
                        this.the_leauge.push_back(Game(this->leauge.the_teams.at(j), this->leauge.the_teams.at(i)));
                        j++;
                }    
        }
            
        
}