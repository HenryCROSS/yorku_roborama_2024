#include <configs.hpp>

bool G::left_on_line = true;
bool G::right_on_line = true;

template<>
int G::DELTA<Veh_Version::MK_1> = 15;
template<>
int G::SPEED<Veh_Version::MK_1> = 75;
template<>
int G::TURN_SPEED<Veh_Version::MK_1> = 75;


template<>
int G::DELTA<Veh_Version::MK_2> = 15;
template<>
int G::SPEED<Veh_Version::MK_2> = 100;
template<>
int G::TURN_SPEED<Veh_Version::MK_2> = 75;