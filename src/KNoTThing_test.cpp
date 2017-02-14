#include <CppUTest/TestHarness.h>

extern "C"
{
        #include "KNoTThing.h"
}

/* File to run all tests */

/* The definition of a TEST_GROUP - knot_thing_main */
TEST_GROUP(knot_thing_main)
{
    void setup()
    {
        printf ("Testing began... \n");
    }

    void teardown()
    {
        printf ("The end of the test... \n");
    }
};

// Initialize thing success
TEST(knot_thing_main, initialize_thing_success)
{
	const char thing_name = 'KNoTThing';
	uint8_t num_sensors = 2;
	UNSIGNED_LONGS_EQUAL(0, init(thing_name, num_sensors));
}

// Thing name

// Number of sensors is greater than 1 and less than 5

// Number of sensor is greater than 5

// Number of sensor is negative
