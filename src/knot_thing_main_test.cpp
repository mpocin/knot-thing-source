extern "C"
{
        #include "knot_thing_main.h"
        #include "knot_thing_config.h"
}

#include "CppUTest/CommandLineTestRunner.h"
#include <CppUTest/TestHarness.h>
#include <stdio.h>


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
	UNSIGNED_LONGS_EQUAL(0, knot_thing_init(THING_NAME));
}

// Number of sensors is lesser than 1
TEST(knot_thing_main, sensor_is_lesser_than_1)
{
        
    UNSIGNED_LONGS_EQUAL(-22, knot_thing_init(THING_NAME));
}

// Number of sensor is greater than 5
TEST(knot_thing_main, sensor_is_greater_than_5)
{
    UNSIGNED_LONGS_EQUAL(-22, knot_thing_init(THING_NAME));
}

// Thing name is null
TEST(knot_thing_main, thing_name_null)
{
    UNSIGNED_LONGS_EQUAL(-22, knot_thing_init(THING_NAME));
}

int main(int argc, char* argv[])
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}

// Thing name

// Number of sensor is negative
