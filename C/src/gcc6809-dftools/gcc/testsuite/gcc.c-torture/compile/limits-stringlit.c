#define STR2 "012345678901234567890123456789012345678901234567890123456789\
0123456789012345678901234567890123456789"
#define STR3 STR2 STR2 STR2 STR2 STR2 STR2 STR2 STR2 STR2 STR2
#define STR4 STR3 STR3 STR3 STR3 STR3 STR3 STR3 STR3 STR3 STR3
#ifdef __m6809__ /* for 16-bit target, only go up to 32KB */
#define STR6 STR4 STR4 STR4 STR3 STR3
#else
#define STR5 STR4 STR4 STR4 STR4 STR4 STR4 STR4 STR4 STR4 STR4
#define STR6 STR5 STR5 STR5 STR5 STR5 STR5 STR5 STR5 STR5 STR5
#define STR7 STR6 STR6 STR6 STR6 STR6 STR6 STR6 STR6 STR6 STR6
#define STR8 STR7 STR7 STR7 STR7 STR7 STR7 STR7 STR7 STR7 STR7
#endif

char vlv[] = STR6;