// Besides the basic types (int, float, double, char), C also gives you extended keywords (short, long, unsigned) to control how large the number is, or whether it can be negative:
// Type                  | Size (bytes) | Common Range                        | Format Specifier |
// -----------------------|--------------|-------------------------------------|------------------|
//short int             | 2            | -32,768 to 32,767                   | %hd              |
//unsigned int          | 2 or 4       | 0 to 65,535 (2B) / 0 to 4.2B (4B)   | %u               |
//long int              | 4 or 8       | -2.1B to 2.1B (4B) / -9.2E18 to 9.2E18 (8B)| %ld |
//long long int         | 8            | -9,223,372,036,854,775,808 to ...   | %lld             |
//unsigned long int     | 4 or 8       | 0 to 4.2B (4B) / 0 to 18.4E18 (8B)  | %lu              |
//unsigned long long int| 8            | 0 to 18,446,744,073,709,551,615     | %llu             |
//long double           | 8, 12, or 16 | Implementation-dependent            | %Lf              |

//unsigned means the type can only store non-negative values (0 and up).