
/*
    Header file for advent of code 2025

    This is more of a utility file for

    making sure I don't have to reuse the

    same header files and macros for every problem.

*/

#ifndef ADVENT_2025_H
#define ADVENT_2025_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <pthread.h>
#include <time.h>
#include <ctype.h>
#include <sys/types.h>
#include <errno.h>

#ifndef TRUE
#define TRUE 1
#endif // TRUE

#ifndef FALSE
#define FALSE 0
#endif // FALSE

#ifndef BUZ
#define BUZ 1024
#endif // BUZ

#ifndef DIM
#define DIM printf(% s % s % d, __FILE__, __LINE__, __DATE__)
#endif // DIM

#define min(m, n) ((m) < (n) ? (m) : (n))
#define max(m, n) ((m) > (n) ? (m) : (n))

#endif // ADVENT_2025_H