#include <configs.hpp>

bool G::left_on_line = true;
bool G::right_on_line = true;

template<>
int G::DELTA<Veh_Version::MK_1> = 0;

template<>
int G::DELTA<Veh_Version::MK_2> = 0;