#include <configs.hpp>

bool G::left_on_line = true;
bool G::right_on_line = true;

template<>
int G::DELTA<1> = 1;