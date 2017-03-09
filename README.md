[<img src="http://knot.cesar.org.br/images/KNoT_logo_topo1.png" height="80">] (http://knot.cesar.org.br/) KNoT Network of Things
=============================================================================

#### KNoT Thing Library

Copyright (c) 2016, CESAR.
All rights reserved.

This software may be modified and distributed under the terms
of the BSD license. See the [COPYING](COPYING) file for details.

#### Introduction
---

KNoT Thing library is a lightweight C/C++ library built to use minimal CPU
and memory resources. It is intended to run on KNoT Nodes (Things) - see [KNoT
Architecture](http://knot.cesar.org.br/images/architecture_knot.png) for better understanding.

It provides the Radio and Protocol abstractions for the application.

The application builder just need implement the read/write functions for its sensors/actuators, register a Data Item (sensor or actuator) on the library and call the `run()` method on its main loop routine.

#### Compilation and Installation
---

Currently the KNoT Thing library supports only the [Arduino](https://www.arduino.cc/) platform. The build process will generate an Arduino library zip file (KNoTThing.zip) containing all source code. This zip file can be imported on [Arduino IDE](https://www.arduino.cc/en/main/software).

In order to compiler the source code you need following software packages:

- GCC compiler
- GNU C library

**How to build:**

`$ make`

**How to install:**

Refer to Arduino library guide in order to install KNoT Thing library on Arduino IDE: https://www.arduino.cc/en/Guide/Libraries

**Getting start:**

Before starting develop any application is necessary provide some parameters to THING.

To do this edit [config](KNoTThing/src/include/config.h) file.

You should provide two parameters:

- **KNOT_THING_NUM_DATA** (number of sensors/actuators) to be connected
- **THING_NAME** (name of your thing)
