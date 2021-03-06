/*

    Copyright 2012 Orson Peters. All rights reserved.

    Redistribution of this work, with or without modification, is permitted if
    Orson Peters is attributed as the original author or licensor of
    this work, but not in any way that suggests that Orson Peters endorses
    you or your use of the work.

    This work is provided by Orson Peters "as is" and any express or implied
    warranties are disclaimed. Orson Peters is not liable for any damage
    arising in any way out of the use of this work.

*/

#ifndef CC_MATH_H_GUARD
#define CC_MATH_H_GUARD

/* Constants */

#define CC_E          2.71828182845904523536028747135266250  /* Euler's number e */
#define CC_E_F          2.71828182845904523536028747135266250f
#define CC_PI         3.14159265358979323846264338327950288  /* Archimedes' constant pi */
#define CC_PI_F         3.14159265358979323846264338327950288f
#define CC_EULER      0.57721566490153286060651209008240243  /* Euler�Mascheroni constant gamma */
#define CC_EULER_F      0.57721566490153286060651209008240243f
#define CC_PHI        1.61803398874989484820458683436563812  /* Golden ratio constant phi */
#define CC_PHI_F        1.61803398874989484820458683436563812f

#define CC_LOG2E      1.44269504088896340735992468100189214  /* log2(e) */
#define CC_LOG2E_F      1.44269504088896340735992468100189214f
#define CC_LOG10E     0.43429448190325182765112891891660508  /* log10(e) */
#define CC_LOG10E_F     0.43429448190325182765112891891660508f
#define CC_LN2        0.69314718055994530941723212145817657  /* ln(2) */
#define CC_LN2_F        0.69314718055994530941723212145817657f
#define CC_LNLN2     -0.36651292058166432701243915823266947  /* ln(ln(2)) */
#define CC_LNLN2_F     -0.36651292058166432701243915823266947f
#define CC_LN10       2.30258509299404568401799145468436421  /* ln(10 */
#define CC_LN10_F       2.30258509299404568401799145468436421f
#define CC_SQRTLN4    1.17741002251547469101156932645969964  /* sqrt(ln(4)) */
#define CC_SQRTLN4_F    1.17741002251547469101156932645969964f
#define CC_SQRT2      1.41421356237309504880168872420969808  /* sqrt(2) */
#define CC_SQRT2_F      1.41421356237309504880168872420969808f
#define CC_SQRTHALF   0.70710678118654752440084436210484904  /* sqrt(1/2) */
#define CC_SQRTHALF_F   0.70710678118654752440084436210484904f

#define CC_PIPI       9.86960440108935861883449099987615114  /* pi*pi */
#define CC_PIPI_F       9.86960440108935861883449099987615114f
#define CC_TWOPI      6.28318530717958647692528676655900577  /* 2*pi */
#define CC_TWOPI_F      6.28318530717958647692528676655900577f
#define CC_HALFPI     1.57079632679489661923132169163975144  /* pi/2 */
#define CC_HALFPI_F     1.57079632679489661923132169163975144f
#define CC_PI_2       1.57079632679489661923132169163975144  /* pi/2 */
#define CC_PI_2_F       1.57079632679489661923132169163975144f
#define CC_PI_4       0.78539816339744830961566084581987572  /* pi/4 */
#define CC_PI_4_F       0.78539816339744830961566084581987572f
#define CC_1_PI       0.31830988618379067153776752674502872  /* 1/pi */
#define CC_1_PI_F       0.31830988618379067153776752674502872f
#define CC_1_TWOPI    0.15915494309189533576888376337251436  /* 1/(2*pi) */
#define CC_1_TWOPI_F    0.15915494309189533576888376337251436f
#define CC_2_PI       0.63661977236758134307553505349005745  /* 2/pi */
#define CC_2_PI_F       0.63661977236758134307553505349005745f
#define CC_2_SQRTPI   1.12837916709551257389615890312154517  /* 2/sqrt(pi) */
#define CC_2_SQRTPI_F   1.12837916709551257389615890312154517f
#define CC_SQRTPI     1.77245385090551602729816748334114518  /* sqrt(pi) */
#define CC_SQRTPI_F     1.77245385090551602729816748334114518f
#define CC_SQRTHALFPI 1.25331413731550025120788264240552263  /* sqrt(pi/2) */
#define CC_SQRTHALFPI_F 1.25331413731550025120788264240552263f
#define CC_SQRTTWOPI  2.50662827463100050241576528481104525  /* sqrt(pi*2) */
#define CC_SQRTTWOPI_F  2.50662827463100050241576528481104525f
#define CC_PIMIN3     0.14159265358979323846264338327950288  /* pi-3 */
#define CC_PIMIN3_F     0.14159265358979323846264338327950288f
#define CC_4MINPI     0.85840734641020676153735661672049712  /* 4-pi */
#define CC_4MINPI_F     0.85840734641020676153735661672049712f

/* Functions */


/* Returns the larger of a and b. */

int cc_max(int a, int b);
long cc_maxl(long a, long b);
long long cc_maxll(long long a, long long b);
unsigned int cc_maxu(unsigned int a, unsigned int b);
unsigned long cc_maxul(unsigned long a, unsigned long b);
unsigned long long cc_maxull(unsigned long long a, unsigned long long b);
double cc_fmax(double a, double b);
float cc_fmaxf(float a, float b);


/*
    Returns a with the sign of b.
*/

int cc_copysign(int a, int b);
long cc_copysignl(long a, long b);
float cc_fcopysignf(float a, float b);
double cc_fcopysign(double a, double b);


/*
    Returns -1 if x < 0, 0 if x == 0 and 1 if x > 0
*/


int cc_sign(int x);
int cc_signl(long x);
int cc_signll(long long x);
int cc_fsign(double x);
int cc_fsignf(float x);


/*
    Returns the absolute value of x (always positive)
*/


int cc_abs(int x);
long cc_absl(long x);
long long cc_absll(long long x);
float cc_fabsf(float x);
double cc_fabs(double x);


/* Rounds x to the nearest int */

long cc_round(double x);

/*

    Approximation of sin(x). The limrange version has valid range [-pi/2, pi/2] and is faster,
    the others have full range at the cost of speed.

*/

double cc_sin(double x);
double cc_sin_limrange(double x);
float cc_sinf(float x);
float cc_sinf_limrange(float x);

#endif /* CC_MATH_H_GUARD */
