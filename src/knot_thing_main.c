/*
 * Copyright (c) 2016, CESAR.
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license. See the LICENSE file for details.
 *
 */

#include <stdint.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "time.h"
#include "knot_thing_config.h"
#include "knot_types.h"
#include "knot_thing_main.h"

// TODO: normalize all returning error codes

// #define KNOT_THING_EMPTY_ITEM		"EMPTY ITEM"
#define MIN_DATA				1
#define MAX_DATA				5

/* Initial number of sensors */
//uint8_t MAX_NUM_SENSORS = 0;

/* Keeps track of max data_items index were there is a sensor/actuator stored */
//static uint8_t max_sensor_id;
//static uint8_t evt_sensor_id;

/* Control the upper lower mensage flow */
//static uint8_t lower_flag[KNOT_THING_DATA_MAX];
//static uint8_t upper_flag[KNOT_THING_DATA_MAX];
/*
typedef struct {
 	// schema values
 	uint8_t			value_type;	// KNOT_VALUE_TYPE_* (int, float, bool, raw)
 	uint8_t			unit;		// KNOT_UNIT_*
 	uint16_t		type_id;	// KNOT_TYPE_ID_*
 	const char		*name;		// App defined data item name data values
 	knot_value_types	last_data;
 	uint8_t			*last_value_raw;
 	// config values
 	knot_config		config;	// Flags indicating when data will be sent
 	// time values
 	uint32_t		last_timeout;	// Stores the last time the data was sent
 	// Data read/write functions
 	knot_data_functions	functions;
} _data_items[KNOT_THING_DATA_MAX];
*/

static uint8_t configuration_is_valid(void)
{
	// Verify number of data is valid
	if(!((KNOT_THING_DATA_NUM >= MIN_DATA) &&
		(KNOT_THING_DATA_NUM <= MAX_DATA)))
		return -EINVAL;

	// Verify name of thing is null
	if(!(strcmp(THING_NAME, "")))
		return -EINVAL;
	
	return 0;
}

int8_t knot_thing_init(const char *thing_name)
{

	if(configuration_is_valid() != 0)
		return -EINVAL;

//	reset_data_items();

	return 0;

/*
	return knot_thing_protocol_init(thing_name, data_item_read,
				data_item_write, knot_thing_create_schema,
				knot_thing_config_data_item, verify_events);*/
}
