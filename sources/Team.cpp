#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>

using namespace std;

#include "Team.hpp"
namespace ariel{

    Team::Team(){
        this->name = "";
        this->talent = 0;
        this->points= 0;
        this->the_losses = 0;
        this->the_wins = 0;
    }
    Team::Team(string other_name, double other_talent, int other_points ){
        this->name = other_name;
        this->talent = other_talent;
        this->points = other_points;
    }


    int Team::get_points(){
        return this->points;
    }
}