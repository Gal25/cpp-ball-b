#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

#include <string>
using namespace std;
using namespace ariel;

#include "Game.hpp"
#include "Leauge.hpp"
#include "Team.hpp"
#include "Schedule.hpp"

TEST_CASE("Good input") {
    Team in=Team();
    in->name="Gal";
    in->talent=1;

    Team out= Team();
    b->name="Michal";
    b->talent=0.8;

    Game the_game=Game(in,out);
    CHECK(the_game.in.name="Gal");
    CHECK(the_game.in.name="Michal");
    CHECK(the_game.in.points > 0);
    CHECK(the_game.out.points > 0);
    CHECK(the_game.in.points <= 110);
    CHECK(the_game.in.points <= 110);
    CHECK(the_game.in.points >= 55 );
    CHECK(the_game.out.points <= 50);
    CHECK(the_game.in.points != 0);
    CHECK(the_game.out.points != 0);
}

TEST_CASE("other Good input") {
    Team in=Team();
    in->name="Romi";
    in->talent=0.6;

    Team out= Team();
    b->name="Noy";
    b->talent=0.5;

    Game the_game=Game(in,out);
    CHECK(the_game.in.name="Romi");
    CHECK(the_game.in.name="Noy");
    CHECK(the_game.in.points > 0);
    CHECK(the_game.out.points > 0);
    CHECK(the_game.in.points <= 110);
    CHECK(the_game.in.points <= 110);
    CHECK(the_game.in.points >= 55 );
    CHECK(the_game.out.points <= 50);
    CHECK(the_game.in.points != 0);
    CHECK(the_game.out.points != 0);
}
