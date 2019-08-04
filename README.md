# weight-plate-calculator

A simple command line tool written in C to calculate the plates that should be added to a 45lb bar to set it to the desired total weight.

Future enhancements include:

1. Allowing the weight of the bar to be changed
2. Allowing the user to enter the plates that they have (the hard-coded weights are the set that I have)
3. Allowing the user to use metric kilograms in addition to U.S. lbs.

Compiling:

gcc weightPlateCalculator.c -o weightPlateCalculator

Usage:

It will prompt you for the desired total weight and will then return the plate that you should put on each side of the bar. For example, if the desired weight is 135, it will return 45 meaning that a 45lb plate should be put on each side of the bar. Enter 'q' to quit.
