extern "C"
{
        #include "knot_thing_main.h"
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
	//const char *thing_name = '';
	//static uint8_t num_sensors = 2;
	UNSIGNED_LONGS_EQUAL(0, knot_thing_init('text', 2));
        //UNSIGNED_LONGS_EQUAL(0, 22);
	//FAIL("Fail me!");
}

int main(int argc, char* argv[])
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}

// Thing name

// Number of sensors is greater than 1 and less than 5

// Number of sensor is greater than 5

// Number of sensor is negative
