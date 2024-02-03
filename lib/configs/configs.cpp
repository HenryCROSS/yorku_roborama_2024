#include <configs.hpp>

bool G::left_on_line = true;
bool G::right_on_line = true;

template<>
int G::DELTA<Veh_Version::MK_1> = 10;
template<>
int G::SPEED<Veh_Version::MK_1> = 110;
template<>
<<<<<<< HEAD
int G::TURN_SPEED<Veh_Version::MK_1> = 70;
=======
int G::TURN_SPEED<Veh_Version::MK_1> = 50;
>>>>>>> bd55b524aee5417dfd4ccd024261e41cf69d1c2f


template<>
int G::DELTA<Veh_Version::MK_2> = 0;
template<>
int G::SPEED<Veh_Version::MK_2> = 110;
template<>
int G::TURN_SPEED<Veh_Version::MK_2> = 50;