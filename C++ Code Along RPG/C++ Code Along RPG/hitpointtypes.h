#pragma once // ensure only one file exists at a time
#include <cstdint> // contains specific integral types



typedef std::uint16_t hptype; // define a datatype with a custom name, can change the datatype in one place

// Unsigned int values do contain a sign bit and can therefore not be negative.
// They can contain larger numbers that int values
// If the uint number becomes negative (underflow), 
// then the result wraps back around the range of ints resulting in a giant number.
// E.g the player health is 2 and they git hit by an atk that does 5 hp, the player health will become massive.
