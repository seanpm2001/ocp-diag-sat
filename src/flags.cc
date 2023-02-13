#include "flags.h"

#include "absl/flags/flag.h"

ABSL_FLAG(
    bool, sat_use_coarse_grain_queues, false,
    "Whether to use coarse or fine grain lock queues during testing. By "
    "default fine grain lock queues will be used as they are more efficient.");

ABSL_FLAG(
    int64_t, sat_memory, 0,
    "The amount of RAM to test in Megabytes. A value of 0 (the "
    "default) indicates that all free memory should be tested, minus a "
    "reserve for system processes. This reserve will be 15\% of all memory on "
    "systems with less than 2Gb of memory, and 5\% of all memory plus "
    "192Mb on larger systems.");

ABSL_FLAG(int64_t, sat_reserve_memory, 0,
          "The minimum amount of RAM, in Megabytes, to reserve for other "
          "processes during the test if hugepages are not being used.");

ABSL_FLAG(int64_t, sat_hugepage_memory, 0,
          "The minimum amount of hugepage RAM to test in Megabytes.");