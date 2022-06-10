#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>

using namespace std;

#include "Leauge.hpp"

namespace ariel{
    Leauge::Leauge(){
        for(int i =0; i< 20; i++){
            Team* team;
            team.name = i;
            this.the_teams.push_back(team);
        }
    }

    void Leauge::random(){
        double rand = rand() % 10;
        for(int i = 0; i < 20; i++){
            Team* team;
            team.name = i;
            this->the_teams.push_back(Team(team.name, rand, 0));
        }
    }
    
    Leauge::Leauge(vector<*Team> other_leauge){
        this.the_teams = other_leauge;
    }          

}