#include <configs.hpp>

bool G::left_on_line = true;
bool G::right_on_line = true;

template<>
int G::DELTA<Veh_Version::MK_1> = 10;
template<>
int G::SPEED<Veh_Version::MK_1> = 100;
template<>
int G::TURN_SPEED<Veh_Version::MK_1> = 70;


template<>
int G::DELTA<Veh_Version::MK_2> = 0;
template<>
int G::SPEED<Veh_Version::MK_2> = 100;
template<>
int G::TURN_SPEED<Veh_Version::MK_2> = 75;