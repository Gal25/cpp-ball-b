#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>
#include <cmath>

using namespace std;

#include "Game.hpp"
namespace ariel{

    Game::Game(){

        this->outcome = 0;

    }
    double Game::dev(double avg, int a, int b){
        double a = pow((a - avg),2);
        double b = pow((b - avg), 2);
        return sqrt(a+b);
    }


    Game::Game(Team* other_in, Team* other_out){
        this->in = other_in;
        this->out = other_out;
        int points_in = this->in->get_points();
        int points_out = this->out->get_points();

        points_in = (rand() * 100 +55);
        points_out = (rand() * 100 +50);

        if(in->talent > out->talent){
            points_in += 10;
        }
        else{
            points_out +=10;
        }

        int result = 0;
        if(in->get_points() < out->get_points()){
            this->in->the_wins += 1;
            this->out->the_losses += 1;
            points_in += 1;
            if(points_in > this->outcome){
                this->outcome = points_in;
            }
            this->win= in;
        }
        else if(out->get_points() < in->get_points()){
            this->out->the_wins += 1;
            this->in->the_losses += 1;
            points_out += 1;
            if(points_out > this->outcome){
                this->outcome = points_out;
            }
            this->win= out;
        }
        else{
            double avg_in = (in->the_wins + in->the_losses)/2;
            double avg_out = (out->the_wins +out->the_losses)/2;
            double dev_in = this->dev(avg_in, in->the_wins, in->the_losses);
            double dev_out = this->dev(avg_out, out->the_wins, out->the_losses);
            if(dev_in > dev_out){
                this->outcome = points_in;
                this->win = in;
            }
            else{
                this->outcome = points_out;
                this->win = out;
            }
        }
    }



    Team * Game::winner(){
        return this->win;

    }

}
