[![Build Status](https://travis-ci.org/mpocin/knot-thing-source.svg?branch=master)](https://travis-ci.org/mpocin/knot-thing-source)

KNoT Thing library

Copyright (c) 2016, CESAR.
All rights reserved.

This software may be modified and distributed under the terms
of the BSD license. See the COPYING file for details.

Introduction
============

KNoT Thing library is a lightweight C/C++ library built to use minimal CPU
and memory resources. It is intended to run on KNoT Nodes (Things) (see KNoT
Architecture for better understanding).

It provides the Radio and Protocol abstractions for the application. The application
builder just need implement the read/write functions for its sensors/actuators,
register a Data Item (sensor or actuator) on the library and call the run() method
 on its main loop routine.



Compilation and installation
============================

Currently the KNoT Thing library supports only the Arduino platform. The build process will generate an Arduino library zip file (KNoTThing.zip) containing all source code. This zip file can be imported on Arduino IDE.

In order to compiler the source code you need following software packages:
	- GCC compiler
	- GNU C library

How to build:
	make

How to install:
	Refer to Arduino library guide in order to install KNoT Thing library on Arduino IDE: https://www.arduino.cc/en/Guide/Libraries
