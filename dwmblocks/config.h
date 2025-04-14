#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
// X(icon, command, update interval, update signal)
#define BLOCKS(X) \
      X("", "sb-cputemp", 5, 13) \
      X("", "sb-loadavg", 5, 12) \
      X("", "sb-ram", 5, 11) \
      X("", "sb-cpu-usage", 5, 10) \
      X("", "sb-bluetooth", 5, 9) \
      X("", "sb-internet", 5, 8) \
      X("", "sb-vpn", 5, 7) \
      X("", "sb-battery", 5, 6) \
      X("", "sb-volume", 10, 3) \
      X("", "sb-layout", 3, 4) \
      X("", "sb-power", 0, 5) \
      X("", "sb-time", 5, 2) \


//#define BLOCKS(X)             \
//    X("", "sb-mail", 600, 1)  \
//    X("", "sb-music", 0, 2)   \
//    X("", "sb-disk", 1800, 3) \
//    X("", "sb-memory", 10, 4) \
//    X("", "sb-loadavg", 5, 5) \
//    X("", "sb-mic", 0, 6)     \
//    X("", "sb-record", 0, 7)  \
//    X("", "sb-volume", 0, 8)  \
//    X("", "sb-battery", 5, 9) \
//    X("", "sb-date", 1, 10)

#endif  // CONFIG_H
