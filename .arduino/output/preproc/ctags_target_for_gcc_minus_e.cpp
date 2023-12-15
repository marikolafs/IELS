# 1 "C:\\Users\\Maria\\Downloads\\IELS\\.arduino\\output\\sketch\\stubbing.ino.cpp"
# 1 "c:\\Users\\Maria\\Downloads\\IELS//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\Users\\Maria\\Downloads\\IELS\\.arduino\\output\\sketch\\stubbing.ino.cpp"
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 48 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 216 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 242 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 283 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 310 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 362 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 49 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 2 3







extern "C" {


/** \file */

/** \defgroup avr_stdlib <stdlib.h>: General utilities
    \code #include <stdlib.h> \endcode

    This file declares some basic C macros and functions as
    defined by the ISO standard, plus some AVR-specific extensions.
*/

/*@{*/
/** Result type for function div(). */
typedef struct {
 int quot; /**< The Quotient. */
 int rem; /**< The Remainder. */
} div_t;

/** Result type for function ldiv(). */
typedef struct {
 long quot; /**< The Quotient. */
 long rem; /**< The Remainder. */
} ldiv_t;

/** Comparision function type for qsort(), just for convenience. */
typedef int (*__compar_fn_t)(const void *, const void *);
# 112 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 3
/** The abort() function causes abnormal program termination to occur.
    This realization disables interrupts and jumps to _exit() function
    with argument equal to 1. In the limited AVR environment, execution is
    effectively halted by entering an infinite loop. */
extern void abort(void) __attribute__((__noreturn__));

/** The abs() function computes the absolute value of the integer \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern int abs(int __i) __attribute__((__const__));




/** The labs() function computes the absolute value of the long integer
    \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern long labs(long __i) __attribute__((__const__));




/**
     The bsearch() function searches an array of \c nmemb objects, the
     initial member of which is pointed to by \c base, for a member
     that matches the object pointed to by \c key.  The size of each
     member of the array is specified by \c size.

     The contents of the array should be in ascending sorted order
     according to the comparison function referenced by \c compar.
     The \c compar routine is expected to have two arguments which
     point to the key object and to an array member, in that order,
     and should return an integer less than, equal to, or greater than
     zero if the key object is found, respectively, to be less than,
     to match, or be greater than the array member.

     The bsearch() function returns a pointer to a matching member of
     the array, or a null pointer if no match is found.  If two
     members compare as equal, which member is matched is unspecified.
*/
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb,
       size_t __size, int (*__compar)(const void *, const void *));

/* __divmodhi4 and __divmodsi4 from libgcc.a */
/**
     The div() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c div_t that
     contains two int members named \c quot and \c rem.
*/
extern div_t div(int __num, int __denom) __asm__("__divmodhi4") __attribute__((__const__));
/**
     The ldiv() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c ldiv_t that
     contains two long integer members named \c quot and \c rem.
*/
extern ldiv_t ldiv(long __num, long __denom) __asm__("__divmodsi4") __attribute__((__const__));

/**
     The qsort() function is a modified partition-exchange sort, or
     quicksort.

     The qsort() function sorts an array of \c nmemb objects, the
     initial member of which is pointed to by \c base.  The size of
     each object is specified by \c size.  The contents of the array
     base are sorted in ascending order according to a comparison
     function pointed to by \c compar, which requires two arguments
     pointing to the objects being compared.

     The comparison function must return an integer less than, equal
     to, or greater than zero if the first argument is considered to
     be respectively less than, equal to, or greater than the second.
*/
extern void qsort(void *__base, size_t __nmemb, size_t __size,
    __compar_fn_t __compar);

/**
    The strtol() function converts the string in \c nptr to a long
    value.  The conversion is done according to the given base, which
    must be between 2 and 36 inclusive, or be the special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to a long value in the
    obvious manner, stopping at the first character which is not a
    valid digit in the given base.  (In bases above 10, the letter \c 'A'
    in either upper or lower case represents 10, \c 'B' represents 11,
    and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtol() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtol() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtol() function returns the result of the conversion, unless
    the value would underflow or overflow.  If no conversion could be
    performed, 0 is returned.  If an overflow or underflow occurs, \c
    errno is set to \ref avr_errno "ERANGE" and the function return value
    is clamped to \c LONG_MIN or \c LONG_MAX, respectively.
*/
extern long strtol(const char *__nptr, char **__endptr, int __base);

/**
    The strtoul() function converts the string in \c nptr to an
    unsigned long value.  The conversion is done according to the
    given base, which must be between 2 and 36 inclusive, or be the
    special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to an unsigned long value
    in the obvious manner, stopping at the first character which is
    not a valid digit in the given base.  (In bases above 10, the
    letter \c 'A' in either upper or lower case represents 10, \c 'B'
    represents 11, and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtoul() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtoul() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtoul() function return either the result of the conversion
    or, if there was a leading minus sign, the negation of the result
    of the conversion, unless the original (non-negated) value would
    overflow; in the latter case, strtoul() returns ULONG_MAX, and \c
    errno is set to \ref avr_errno "ERANGE".  If no conversion could 
    be performed, 0 is returned.
*/
extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base);

/**
    The atol() function converts the initial portion of the string
    pointed to by \p s to long integer representation. In contrast to

        \code strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern long atol(const char *__s) __attribute__((__pure__));

/**
    The atoi() function converts the initial portion of the string
    pointed to by \p s to integer representation. In contrast to

        \code (int)strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern int atoi(const char *__s) __attribute__((__pure__));

/**
   The exit() function terminates the application.  Since there is no
   environment to return to, \c status is ignored, and code execution
   will eventually reach an infinite loop, thereby effectively halting
   all code processing.  Before entering the infinite loop, interrupts
   are globally disabled.

   In a C++ context, global destructors will be called before halting
   execution.
*/
extern void exit(int __status) __attribute__((__noreturn__));

/**
   The malloc() function allocates \c size bytes of memory.
   If malloc() fails, a NULL pointer is returned.

   Note that malloc() does \e not initialize the returned memory to
   zero bytes.

   See the chapter about \ref malloc "malloc() usage" for implementation
   details.
*/
extern void *malloc(size_t __size) __attribute__((__malloc__));

/**
   The free() function causes the allocated memory referenced by \c
   ptr to be made available for future allocations.  If \c ptr is
   NULL, no action occurs.
*/
extern void free(void *__ptr);

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern size_t __malloc_margin;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_start;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_end;

/**
   Allocate \c nele elements of \c size each.  Identical to calling
   \c malloc() using <tt>nele * size</tt> as argument, except the
   allocated memory will be cleared to zero.
*/
extern void *calloc(size_t __nele, size_t __size) __attribute__((__malloc__));

/**
   The realloc() function tries to change the size of the region
   allocated at \c ptr to the new \c size value.  It returns a
   pointer to the new region.  The returned pointer might be the
   same as the old pointer, or a pointer to a completely different
   region.

   The contents of the returned region up to either the old or the new
   size value (whatever is less) will be identical to the contents of
   the old region, even in case a new region had to be allocated.

   It is acceptable to pass \c ptr as NULL, in which case realloc()
   will behave identical to malloc().

   If the new memory cannot be allocated, realloc() returns NULL, and
   the region at \c ptr will not be changed.
*/
extern void *realloc(void *__ptr, size_t __size) __attribute__((__malloc__));

extern double strtod(const char *__nptr, char **__endptr);

/** \ingroup avr_stdlib
    \fn  double atof (const char *nptr)

    The atof() function converts the initial portion of the string pointed
    to by \a nptr to double representation.

    It is equivalent to calling
	\code strtod(nptr, (char **)0); \endcode
 */
extern double atof(const char *__nptr);

/** Highest number that can be generated by rand(). */


/**
     The rand() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RAND_MAX (as defined by the header file <stdlib.h>).

     The srand() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srand() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.

     In compliance with the C standard, these functions operate on
     \c int arguments.  Since the underlying algorithm already uses
     32-bit calculations, this causes a loss of precision.  See
     \c random() for an alternate set of functions that retains full
     32-bit precision.
*/
extern int rand(void);
/**
   Pseudo-random number generator seeding; see rand().
*/
extern void srand(unsigned int __seed);

/**
   Variant of rand() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern int rand_r(unsigned long *__ctx);
/*@}*/

/*@{*/
/** \name Non-standard (i.e. non-ISO C) functions.
 \ingroup avr_stdlib
*/
/**
   \brief Convert an integer to a string.

   The function itoa() converts the integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.
    
    If radix is 10 and val is negative, a minus sign will be prepended.

   The itoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *itoa (int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__itoa (int, char *, int);
 return __itoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__itoa_ncheck (int, char *, unsigned char);
 return __itoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
 
   \brief Convert a long integer to a string.

   The function ltoa() converts the long integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (long int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   If radix is 10 and val is negative, a minus sign will be prepended.

   The ltoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *ltoa (long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ltoa (long, char *, int);
 return __ltoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ltoa_ncheck (long, char *, unsigned char);
 return __ltoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib

   \brief Convert an unsigned integer to a string.

   The function utoa() converts the unsigned integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The utoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *utoa (unsigned int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__utoa (unsigned int, char *, int);
 return __utoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__utoa_ncheck (unsigned int, char *, unsigned char);
 return __utoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
   \brief Convert an unsigned long integer to a string.

   The function ultoa() converts the unsigned long integer value from
   \c val into an ASCII representation that will be stored under \c s.
   The caller is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned long int) + 1 characters,
   i.e. one character for each bit plus one for the string terminator. Using a
   larger radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The ultoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *ultoa (unsigned long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ultoa (unsigned long, char *, int);
 return __ultoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ultoa_ncheck (unsigned long, char *, unsigned char);
 return __ultoa_ncheck (__val, __s, __radix);
    }
}


/**  \ingroup avr_stdlib
Highest number that can be generated by random(). */


/**
 \ingroup avr_stdlib
     The random() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RANDOM_MAX (as defined by the header file <stdlib.h>).

     The srandom() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srandom() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.
*/
extern long random(void);
/**
 \ingroup avr_stdlib
   Pseudo-random number generator seeding; see random().
*/
extern void srandom(unsigned long __seed);

/**
 \ingroup avr_stdlib
   Variant of random() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern long random_r(unsigned long *__ctx);

/*@}*/

/*@{*/
/** \name Conversion functions for double arguments.
 \ingroup avr_stdlib
 Note that these functions are not located in the default library,
 <tt>libc.a</tt>, but in the mathematical library, <tt>libm.a</tt>.
 So when linking the application, the \c -lm option needs to be
 specified.
*/
/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */




/**
   \ingroup avr_stdlib
   The dtostre() function converts the double value passed in \c val into
   an ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddde±dd" where there is
   one digit before the decimal-point character and the number of
   digits after it is equal to the precision \c prec; if the precision
   is zero, no decimal-point character appears.  If \c flags has the
   DTOSTR_UPPERCASE bit set, the letter \c 'E' (rather than \c 'e' ) will be
   used to introduce the exponent.  The exponent always contains two
   digits; if the value is zero, the exponent is \c "00".

   If \c flags has the DTOSTR_ALWAYS_SIGN bit set, a space character
   will be placed into the leading position for positive numbers.

   If \c flags has the DTOSTR_PLUS_SIGN bit set, a plus sign will be
   used instead of a space character in this case.

   The dtostre() function returns the pointer to the converted string \c s.
*/
extern char *dtostre(double __val, char *__s, unsigned char __prec,
       unsigned char __flags);

/**
   \ingroup avr_stdlib
   The dtostrf() function converts the double value passed in \c val into
   an ASCII representationthat will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddd".  The minimum field
   width of the output string (including the possible \c '.' and the possible
   sign for negative values) is given in \c width, and \c prec determines
   the number of digits after the decimal sign. \c width is signed value,
   negative for left adjustment.

   The dtostrf() function returns the pointer to the converted string \c s.
*/
extern char *dtostrf(double __val, signed char __width,
                     unsigned char __prec, char *__s);

/**
   \ingroup avr_stdlib
    Successful termination for exit(); evaluates to 0.
*/


/**
   \ingroup avr_stdlib
    Unsuccessful termination for exit(); evaluates to a non-zero value.
*/


/*@}*/


/* dummy declarations for libstdc++ compatibility */
extern int atexit(void (*)(void));
extern int system (const char *);
extern char *getenv (const char *);



}
# 24 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdbool.h" 1 3 4
/* Copyright (C) 1998-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */
# 39 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdbool.h" 3 4
/* Supporting _Bool in C++ is a GCC extension.  */
# 51 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdbool.h" 3 4
/* Signal that all the definitions are present.  */
# 25 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */







# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 47 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 2 3
# 58 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 3
extern "C" {


/** \file */
/** \defgroup avr_string <string.h>: Strings
    \code #include <string.h> \endcode

    The string functions perform string operations on NULL terminated
    strings. 

    \note If the strings you are working on resident in program space (flash),
    you will need to use the string functions described in \ref avr_pgmspace. */


/** \ingroup avr_string

    This macro finds the first (least significant) bit set in the
    input value.

    This macro is very similar to the function ffs() except that
    it evaluates its argument at compile-time, so it should only
    be applied to compile-time constant expressions where it will
    reduce to a constant itself.
    Application of this macro to expressions that are not constant
    at compile-time is not recommended, and might result in a huge
    amount of code generated.

    \returns The _FFS() macro returns the position of the first
    (least significant) bit set in the word val, or 0 if no bits are set.
    The least significant bit is position 1.  Only 16 bits of argument
    are evaluted.
*/
# 113 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 3
/** \ingroup avr_string
    \fn int ffs(int val);

    \brief This function finds the first (least significant) bit set in the input value.

    \returns The ffs() function returns the position of the first
    (least significant) bit set in the word val, or 0 if no bits are set.
    The least significant bit is position 1.

    \note For expressions that are constant at compile time, consider
    using the \ref _FFS macro instead.
*/
extern int ffs(int __val) __attribute__((__const__));

/** \ingroup avr_string
    \fn int ffsl(long val);

    \brief Same as ffs(), for an argument of type long. */
extern int ffsl(long __val) __attribute__((__const__));

/** \ingroup avr_string
    \fn int ffsll(long long val);

    \brief Same as ffs(), for an argument of type long long. */
__extension__ extern int ffsll(long long __val) __attribute__((__const__));

/** \ingroup avr_string
    \fn void *memccpy(void *dest, const void *src, int val, size_t len)
    \brief Copy memory area.

    The memccpy() function copies no more than \p len bytes from memory
    area \p src to memory area \p dest, stopping when the character \p val
    is found.

    \returns The memccpy() function returns a pointer to the next character
    in \p dest after \p val, or NULL if \p val was not found in the first
    \p len characters of \p src. */
extern void *memccpy(void *, const void *, int, size_t);

/** \ingroup avr_string
    \fn void *memchr(const void *src, int val, size_t len)
    \brief Scan memory for a character.

    The memchr() function scans the first len bytes of the memory area pointed
    to by src for the character val.  The first byte to match val (interpreted
    as an unsigned character) stops the operation.

    \returns The memchr() function returns a pointer to the matching byte or
    NULL if the character does not occur in the given memory area.  */
extern void *memchr(const void *, int, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn int memcmp(const void *s1, const void *s2, size_t len)
    \brief Compare memory areas

    The memcmp() function compares the first len bytes of the memory areas s1
    and s2. The comparision is performed using unsigned char operations.

    \returns The memcmp() function returns an integer less than, equal to, or
    greater than zero if the first len bytes of s1 is found, respectively, to be
    less than, to match, or be greater than the first len bytes of s2.

    \note Be sure to store the result in a 16 bit variable since you may get
    incorrect results if you use an unsigned char or char due to truncation.

    \warning This function is not -mint8 compatible, although if you only care
    about testing for equality, this function should be safe to use. */
extern int memcmp(const void *, const void *, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn void *memcpy(void *dest, const void *src, size_t len)
    \brief Copy a memory area.

    The memcpy() function copies len bytes from memory area src to memory area
    dest.  The memory areas may not overlap.  Use memmove() if the memory
    areas do overlap.

    \returns The memcpy() function returns a pointer to dest.  */
extern void *memcpy(void *, const void *, size_t);

/** \ingroup avr_string
    \fn void *memmem(const void *s1, size_t len1, const void *s2, size_t len2)

    The memmem() function finds the start of the first occurrence of the
    substring \p s2 of length \p len2 in the memory area \p s1 of length
    \p len1.

    \return The memmem() function returns a pointer to the beginning of
    the substring, or \c NULL if the substring is not found. If \p len2
    is zero, the function returns \p s1. */
extern void *memmem(const void *, size_t, const void *, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn void *memmove(void *dest, const void *src, size_t len)
    \brief Copy memory area.

    The memmove() function copies len bytes from memory area src to memory area
    dest.  The memory areas may overlap.

    \returns The memmove() function returns a pointer to dest.  */
extern void *memmove(void *, const void *, size_t);

/** \ingroup avr_string
    \fn void *memrchr(const void *src, int val, size_t len)

    The memrchr() function is like the memchr() function, except that it
    searches backwards from the end of the \p len bytes pointed to by \p
    src instead of forwards from the front. (Glibc, GNU extension.)

    \return The memrchr() function returns a pointer to the matching
    byte or \c NULL if the character does not occur in the given memory
    area. */
extern void *memrchr(const void *, int, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn void *memset(void *dest, int val, size_t len)
    \brief Fill memory with a constant byte.

    The memset() function fills the first len bytes of the memory area pointed
    to by dest with the constant byte val.

    \returns The memset() function returns a pointer to the memory area dest. */
extern void *memset(void *, int, size_t);

/** \ingroup avr_string
    \fn char *strcat(char *dest, const char *src)
    \brief Concatenate two strings.

    The strcat() function appends the src string to the dest string
    overwriting the '\\0' character at the end of dest, and then adds a
    terminating '\\0' character.  The strings may not overlap, and the dest
    string must have enough space for the result.

    \returns The strcat() function returns a pointer to the resulting string
    dest.  */
extern char *strcat(char *, const char *);

/** \ingroup avr_string
    \fn char *strchr(const char *src, int val)
    \brief Locate character in string.

    The strchr() function returns a pointer to the first occurrence of
    the character \p val in the string \p src.

    Here "character" means "byte" - these functions do not work with
    wide or multi-byte characters.

    \returns The strchr() function returns a pointer to the matched
    character or \c NULL if the character is not found. */
extern char *strchr(const char *, int) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strchrnul(const char *s, int c)

    The strchrnul() function is like strchr() except that if \p c is not
    found in \p s, then it returns a pointer to the null byte at the end
    of \p s, rather than \c NULL. (Glibc, GNU extension.)

    \return The strchrnul() function returns a pointer to the matched
    character, or a pointer to the null byte at the end of \p s (i.e.,
    \c s+strlen(s)) if the character is not found.	*/
extern char *strchrnul(const char *, int) __attribute__((__pure__));

/** \ingroup avr_string
    \fn int strcmp(const char *s1, const char *s2)
    \brief Compare two strings.

    The strcmp() function compares the two strings \p s1 and \p s2.

    \returns The strcmp() function returns an integer less than, equal
    to, or greater than zero if \p s1 is found, respectively, to be less
    than, to match, or be greater than \p s2. A consequence of the
    ordering used by strcmp() is that if \p s1 is an initial substring
    of \p s2, then \p s1 is considered to be "less than" \p s2.	*/
extern int strcmp(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strcpy(char *dest, const char *src)
    \brief Copy a string.

    The strcpy() function copies the string pointed to by src (including the
    terminating '\\0' character) to the array pointed to by dest.  The strings
    may not overlap, and the destination string dest must be large enough to
    receive the copy.

    \returns The strcpy() function returns a pointer to the destination
    string dest.

    \note If the destination string of a strcpy() is not large enough (that
    is, if the programmer was stupid/lazy, and failed to check the size before
    copying) then anything might happen.  Overflowing fixed length strings is
    a favourite cracker technique. */
extern char *strcpy(char *, const char *);

/** \ingroup avr_string
    \fn int strcasecmp(const char *s1, const char *s2)
    \brief Compare two strings ignoring case.

    The strcasecmp() function compares the two strings \p s1 and \p s2,
    ignoring the case of the characters.

    \returns The strcasecmp() function returns an integer less than,
    equal to, or greater than zero if \p s1 is found, respectively, to
    be less than, to match, or be greater than \p s2. A consequence of
    the ordering used by strcasecmp() is that if \p s1 is an initial
    substring of \p s2, then \p s1 is considered to be "less than"
    \p s2. */
extern int strcasecmp(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strcasestr(const char *s1, const char *s2)

    The strcasestr() function finds the first occurrence of the
    substring \p s2 in the string \p s1. This is like strstr(), except
    that it ignores case of alphabetic symbols in searching for the
    substring. (Glibc, GNU extension.)

    \return The strcasestr() function returns a pointer to the beginning
    of the substring, or \c NULL if the substring is not found. If \p s2
    points to a string of zero length, the function returns \p s1. */
extern char *strcasestr(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_string
    \fn size_t strcspn(const char *s, const char *reject)

    The strcspn() function calculates the length of the initial segment
    of \p s which consists entirely of characters not in \p reject.

    \return The strcspn() function returns the number of characters in
    the initial segment of \p s which are not in the string \p reject.
    The terminating zero is not considered as a part of string.	*/
extern size_t strcspn(const char *__s, const char *__reject) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strdup(const char *s1)
    \brief Duplicate a string.

    The strdup() function allocates memory and copies into it the string
    addressed by s1, including the terminating null character.

    \warning The strdup() function calls malloc() to allocate the memory
    for the duplicated string! The user is responsible for freeing the
    memory by calling free().

    \returns The strdup() function returns a pointer to the resulting string
    dest. If malloc() cannot allocate enough storage for the string, strdup()
    will return NULL.

    \warning Be sure to check the return value of the strdup() function to
    make sure that the function has succeeded in allocating the memory!
*/
extern char *strdup(const char *s1);

/** \ingroup avr_string
    \fn size_t strlcat(char *dst, const char *src, size_t siz)
    \brief Concatenate two strings.

    Appends \p src to string \p dst of size \p siz (unlike strncat(),
    \p siz is the full size of \p dst, not space left).  At most \p siz-1
    characters will be copied.  Always NULL terminates (unless \p siz <=
    \p strlen(dst)).

    \returns The strlcat() function returns strlen(src) + MIN(siz,
    strlen(initial dst)).  If retval >= siz, truncation occurred.  */
extern size_t strlcat(char *, const char *, size_t);

/** \ingroup avr_string
    \fn size_t strlcpy(char *dst, const char *src, size_t siz)
    \brief Copy a string.

    Copy \p src to string \p dst of size \p siz.  At most \p siz-1
    characters will be copied.  Always NULL terminates (unless \p siz == 0).

    \returns The strlcpy() function returns strlen(src). If retval >= siz,
    truncation occurred.  */
extern size_t strlcpy(char *, const char *, size_t);

/** \ingroup avr_string
    \fn size_t strlen(const char *src)
    \brief Calculate the length of a string.

    The strlen() function calculates the length of the string src, not
    including the terminating '\\0' character.

    \returns The strlen() function returns the number of characters in
    src.  */
extern size_t strlen(const char *) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strlwr(char *s)
    \brief Convert a string to lower case.

    The strlwr() function will convert a string to lower case. Only the upper
    case alphabetic characters [A .. Z] are converted.  Non-alphabetic
    characters will not be changed.

    \returns The strlwr() function returns a pointer to the converted
    string. */
extern char *strlwr(char *);

/** \ingroup avr_string
    \fn char *strncat(char *dest, const char *src, size_t len)
    \brief Concatenate two strings.

    The strncat() function is similar to strcat(), except that only the first
    n characters of src are appended to dest.

    \returns The strncat() function returns a pointer to the resulting string
    dest.  */
extern char *strncat(char *, const char *, size_t);

/** \ingroup avr_string
    \fn int strncmp(const char *s1, const char *s2, size_t len)
    \brief Compare two strings.

    The strncmp() function is similar to strcmp(), except it only compares the
    first (at most) n characters of s1 and s2.

    \returns The strncmp() function returns an integer less than, equal to, or
    greater than zero if s1 (or the first n bytes thereof) is found,
    respectively, to be less than, to match, or be greater than s2.  */
extern int strncmp(const char *, const char *, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strncpy(char *dest, const char *src, size_t len)
    \brief Copy a string.

    The strncpy() function is similar to strcpy(), except that not more than n
    bytes of src are copied. Thus, if there is no null byte among the first n
    bytes of src, the result will not be null-terminated.

    In the case where the length of src is less than that of n, the remainder
    of dest will be padded with nulls.

    \returns The strncpy() function returns a pointer to the destination
    string dest.  */
extern char *strncpy(char *, const char *, size_t);

/** \ingroup avr_string
    \fn int strncasecmp(const char *s1, const char *s2, size_t len)
    \brief Compare two strings ignoring case.

    The strncasecmp() function is similar to strcasecmp(), except it
    only compares the first \p len characters of \p s1.

    \returns The strncasecmp() function returns an integer less than,
    equal to, or greater than zero if \p s1 (or the first \p len bytes
    thereof) is found, respectively, to be less than, to match, or be
    greater than \p s2. A consequence of the ordering used by
    strncasecmp() is that if \p s1 is an initial substring of \p s2,
    then \p s1 is considered to be "less than" \p s2.  */
extern int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn size_t strnlen(const char *src, size_t len)
    \brief Determine the length of a fixed-size string.

    The strnlen function returns the number of characters in the string
    pointed to by src, not including the terminating '\\0' character, but at
    most len. In doing this, strnlen looks only at the first len characters at
    src and never beyond src+len.

    \returns The strnlen function returns strlen(src), if that is less than
    len, or len if there is no '\\0' character among the first len
    characters pointed to by src. */
extern size_t strnlen(const char *, size_t) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strpbrk(const char *s, const char *accept)

    The strpbrk() function locates the first occurrence in the string
    \p s of any of the characters in the string \p accept.

    \return  The strpbrk() function returns a pointer to the character
    in \p s that matches one of the characters in \p accept, or \c NULL
    if no such character is found. The terminating zero is not
    considered as a part of string: if one or both args are empty, the
    result will be \c NULL. */
extern char *strpbrk(const char *__s, const char *__accept) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strrchr(const char *src, int val)
    \brief Locate character in string.

    The strrchr() function returns a pointer to the last occurrence of the
    character val in the string src.

    Here "character" means "byte" - these functions do not work with wide or
    multi-byte characters.

    \returns The strrchr() function returns a pointer to the matched character
    or NULL if the character is not found. */
extern char *strrchr(const char *, int) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strrev(char *s)
    \brief Reverse a string.

    The strrev() function reverses the order of the string.

    \returns The strrev() function returns a pointer to the beginning of the
    reversed string.  */
extern char *strrev(char *);

/** \ingroup avr_string
    \fn char *strsep(char **sp, const char *delim)
    \brief Parse a string into tokens.

    The strsep() function locates, in the string referenced by \p *sp,
    the first occurrence of any character in the string \p delim (or the
    terminating '\\0' character) and replaces it with a '\\0'.  The
    location of the next character after the delimiter character (or \c
    NULL, if the end of the string was reached) is stored in \p *sp. An
    ``empty'' field, i.e. one caused by two adjacent delimiter
    characters, can be detected by comparing the location referenced by
    the pointer returned in \p *sp to '\\0'.

    \return The strsep() function returns a pointer to the original
    value of \p *sp. If \p *sp is initially \c NULL, strsep() returns
    \c NULL. */
extern char *strsep(char **, const char *);

/** \ingroup avr_string
    \fn size_t strspn(const char *s, const char *accept)

    The strspn() function calculates the length of the initial segment
    of \p s which consists entirely of characters in \p accept.

    \return  The strspn() function returns the number of characters in
    the initial segment of \p s which consist only of characters from \p
    accept. The terminating zero is not considered as a part of string. */
extern size_t strspn(const char *__s, const char *__accept) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strstr(const char *s1, const char *s2)
    \brief Locate a substring.

    The strstr() function finds the first occurrence of the substring \p
    s2 in the string \p s1.  The terminating '\\0' characters are not
    compared.

    \returns The strstr() function returns a pointer to the beginning of
    the substring, or \c NULL if the substring is not found. If \p s2
    points to a string of zero length, the function returns \p s1. */
extern char *strstr(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_string
    \fn char *strtok(char *s, const char *delim)
    \brief Parses the string s into tokens.

    strtok parses the string s into tokens. The first call to strtok
    should have s as its first argument. Subsequent calls should have
    the first argument set to NULL. If a token ends with a delimiter, this
    delimiting character is overwritten with a '\\0' and a pointer to the next
    character is saved for the next call to strtok. The delimiter string
    delim may be different for each call.

    \returns The strtok() function returns a pointer to the next token or
    NULL when no more tokens are found.

    \note strtok() is NOT reentrant. For a reentrant version of this function
    see \c strtok_r().
*/
extern char *strtok(char *, const char *);

/** \ingroup avr_string
    \fn char *strtok_r(char *string, const char *delim, char **last)
    \brief Parses string into tokens.

    strtok_r parses string into tokens. The first call to strtok_r
    should have string as its first argument. Subsequent calls should have
    the first argument set to NULL. If a token ends with a delimiter, this
    delimiting character is overwritten with a '\\0' and a pointer to the next
    character is saved for the next call to strtok_r. The delimiter string
    \p delim may be different for each call. \p last is a user allocated char*
    pointer. It must be the same while parsing the same string. strtok_r is
    a reentrant version of strtok().

    \returns The strtok_r() function returns a pointer to the next token or
    NULL when no more tokens are found. */
extern char *strtok_r(char *, const char *, char **);

/** \ingroup avr_string
    \fn char *strupr(char *s)
    \brief Convert a string to upper case.

    The strupr() function will convert a string to upper case. Only the lower
    case alphabetic characters [a .. z] are converted.  Non-alphabetic
    characters will not be changed.

    \returns The strupr() function returns a pointer to the converted
    string.  The pointer is the same as that passed in since the operation is
    perform in place. */
extern char *strupr(char *);


/* libstdc++ compatibility, dummy declarations */
extern int strcoll(const char *s1, const char *s2);
extern char *strerror(int errnum);
extern size_t strxfrm(char *dest, const char *src, size_t n);



}
# 26 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */




/** \file */
/** \defgroup avr_math <math.h>: Mathematics
    \code #include <math.h> \endcode

    This header file declares basic mathematics constants and
    functions.

    \par Notes:
    - In order to access the functions declared herein, it is usually
      also required to additionally link against the library \c libm.a.
      See also the related \ref faq_libm "FAQ entry".
    - Math functions do not raise exceptions and do not change the
      \c errno variable. Therefore the majority of them are declared
      with const attribute, for better optimization by GCC.	*/


/** \ingroup avr_math	*/
/*@{*/

/** The constant \a e.	*/


/** The logarithm of the \a e to base 2. */


/** The logarithm of the \a e to base 10. */


/** The natural logarithm of the 2.	*/


/** The natural logarithm of the 10.	*/


/** The constant \a pi.	*/


/** The constant \a pi/2.	*/


/** The constant \a pi/4.	*/


/** The constant \a 1/pi.	*/


/** The constant \a 2/pi.	*/


/** The constant \a 2/sqrt(pi).	*/


/** The square root of 2.	*/


/** The constant \a 1/sqrt(2).	*/


/** NAN constant.	*/


/** INFINITY constant.	*/
# 121 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\math.h" 3
extern "C" {


/**
    The cos() function returns the cosine of \a __x, measured in radians.
 */
extern double cos(double __x) __attribute__((__const__));


/**
    The sin() function returns the sine of \a __x, measured in radians.
 */
extern double sin(double __x) __attribute__((__const__));


/**
    The tan() function returns the tangent of \a __x, measured in radians.
 */
extern double tan(double __x) __attribute__((__const__));


/**
    The fabs() function computes the absolute value of a floating-point
    number \a __x.
 */
extern double fabs(double __x) __attribute__((__const__));


/**
    The function fmod() returns the floating-point remainder of <em>__x /
    __y</em>.
 */
extern double fmod(double __x, double __y) __attribute__((__const__));


/**
    The modf() function breaks the argument \a __x into integral and
    fractional parts, each of which has the same sign as the argument. 
    It stores the integral part as a double in the object pointed to by
    \a __iptr.

    The modf() function returns the signed fractional part of \a __x.

    \note This implementation skips writing by zero pointer.  However,
    the GCC 4.3 can replace this function with inline code that does not
    permit to use NULL address for the avoiding of storing.
 */
extern double modf(double __x, double *__iptr);

/** An alias for modf(). */
extern float modff (float __x, float *__iptr);

/**
    The sqrt() function returns the non-negative square root of \a __x.
 */
extern double sqrt(double __x) __attribute__((__const__));

/** An alias for sqrt(). */
extern float sqrtf (float) __attribute__((__const__));

/**
    The cbrt() function returns the cube root of \a __x.
 */
extern double cbrt(double __x) __attribute__((__const__));


/**
    The hypot() function returns <em>sqrt(__x*__x + __y*__y)</em>. This
    is the length of the hypotenuse of a right triangle with sides of
    length \a __x and \a __y, or the  distance of the point (\a __x, \a
    __y) from the origin. Using this function  instead of the direct
    formula is wise, since the error is much smaller. No underflow with
    small \a __x and \a __y. No overflow if result is in range.
 */
extern double hypot (double __x, double __y) __attribute__((__const__));


/**
    The function square() returns <em>__x * __x</em>.

    \note This function does not belong to the C standard definition.
 */
extern double square(double __x) __attribute__((__const__));


/**
    The floor() function returns the largest integral value less than or
    equal to \a __x, expressed as a floating-point number.
 */
extern double floor(double __x) __attribute__((__const__));


/**
    The ceil() function returns the smallest integral value greater than
    or equal to \a __x, expressed as a floating-point number.
 */
extern double ceil(double __x) __attribute__((__const__));


/**
    The frexp() function breaks a floating-point number into a normalized
    fraction and an integral power of 2.  It stores the integer in the \c
    int object pointed to by \a __pexp.

    If \a __x is a normal float point number, the frexp() function
    returns the value \c v, such that \c v has a magnitude in the
    interval [1/2, 1) or zero, and \a __x equals \c v times 2 raised to
    the power \a __pexp. If \a __x is zero, both parts of the result are
    zero. If \a __x is not a finite number, the frexp() returns \a __x as
    is and stores 0 by \a __pexp.

    \note  This implementation permits a zero pointer as a directive to
    skip a storing the exponent.
 */
extern double frexp(double __x, int *__pexp);


/**
    The ldexp() function multiplies a floating-point number by an integral
    power of 2. It returns the value of \a __x times 2 raised to the power
    \a __exp.
 */
extern double ldexp(double __x, int __exp) __attribute__((__const__));


/**
    The exp() function returns the exponential value of \a __x.
 */
extern double exp(double __x) __attribute__((__const__));


/**
    The cosh() function returns the hyperbolic cosine of \a __x.
 */
extern double cosh(double __x) __attribute__((__const__));


/**
    The sinh() function returns the hyperbolic sine of \a __x.
 */
extern double sinh(double __x) __attribute__((__const__));


/**
    The tanh() function returns the hyperbolic tangent of \a __x.
 */
extern double tanh(double __x) __attribute__((__const__));


/**
    The acos() function computes the principal value of the arc cosine of
    \a __x.  The returned value is in the range [0, pi] radians. A domain
    error occurs for arguments not in the range [-1, +1].
 */
extern double acos(double __x) __attribute__((__const__));


/**
    The asin() function computes the principal value of the arc sine of
    \a __x.  The returned value is in the range [-pi/2, pi/2] radians. A
    domain error occurs for arguments not in the range [-1, +1].
 */
extern double asin(double __x) __attribute__((__const__));


/**
    The atan() function computes the principal value of the arc tangent
    of \a __x.  The returned value is in the range [-pi/2, pi/2] radians.
 */
extern double atan(double __x) __attribute__((__const__));


/**
    The atan2() function computes the principal value of the arc tangent
    of <em>__y / __x</em>, using the signs of both arguments to determine
    the quadrant of the return value.  The returned value is in the range
    [-pi, +pi] radians.
 */
extern double atan2(double __y, double __x) __attribute__((__const__));


/**
    The log() function returns the natural logarithm of argument \a __x.
 */
extern double log(double __x) __attribute__((__const__));


/**
    The log10() function returns the logarithm of argument \a __x to base 10.
 */
extern double log10(double __x) __attribute__((__const__));


/**
    The function pow() returns the value of \a __x to the exponent \a __y.
 */
extern double pow(double __x, double __y) __attribute__((__const__));


/**
    The function isnan() returns 1 if the argument \a __x represents a
    "not-a-number" (NaN) object, otherwise 0.
 */
extern int isnan(double __x) __attribute__((__const__));


/**
    The function isinf() returns 1 if the argument \a __x is positive
    infinity, -1 if \a __x is negative infinity, and 0 otherwise.

    \note The GCC 4.3 can replace this function with inline code that
    returns the 1 value for both infinities (gcc bug #35509).
 */
extern int isinf(double __x) __attribute__((__const__));


/**
    The isfinite() function returns a nonzero value if \a __x is finite:
    not plus or minus infinity, and not NaN.
 */
__attribute__((__const__)) static inline int isfinite (double __x)
{
    unsigned char __exp;
    __asm__ (
 "mov	%0, %C1		\n\t"
 "lsl	%0		\n\t"
 "mov	%0, %D1		\n\t"
 "rol	%0		"
 : "=r" (__exp)
 : "r" (__x) );
    return __exp != 0xff;
}


/**
    The copysign() function returns \a __x but with the sign of \a __y.
    They work even if \a __x or \a __y are NaN or zero.
*/
__attribute__((__const__)) static inline double copysign (double __x, double __y)
{
    __asm__ (
 "bst	%D2, 7	\n\t"
 "bld	%D0, 7	"
 : "=r" (__x)
 : "0" (__x), "r" (__y) );
    return __x;
}


/**
    The signbit() function returns a nonzero value if the value of \a __x
    has its sign bit set.  This is not the same as `\a __x < 0.0',
    because IEEE 754 floating point allows zero to be signed. The
    comparison `-0.0 < 0.0' is false, but `signbit (-0.0)' will return a
    nonzero value.
 */
extern int signbit (double __x) __attribute__((__const__));


/**
    The fdim() function returns <em>max(__x - __y, 0)</em>. If \a __x or
    \a __y or both are NaN, NaN is returned.
 */
extern double fdim (double __x, double __y) __attribute__((__const__));


/**
    The fma() function performs floating-point multiply-add. This is the
    operation <em>(__x * __y) + __z</em>, but the intermediate result is
    not rounded to the destination type.  This can sometimes improve the
    precision of a calculation.
 */
extern double fma (double __x, double __y, double __z) __attribute__((__const__));


/**
    The fmax() function returns the greater of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmax (double __x, double __y) __attribute__((__const__));


/**
    The fmin() function returns the lesser of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmin (double __x, double __y) __attribute__((__const__));


/**
    The trunc() function rounds \a __x to the nearest integer not larger
    in absolute value.
 */
extern double trunc (double __x) __attribute__((__const__));


/**
    The round() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    Overflow is impossible.

    \return The rounded value. If \a __x is an integral or infinite, \a
    __x itself is returned. If \a __x is \c NaN, then \c NaN is returned.
 */
extern double round (double __x) __attribute__((__const__));


/**
    The lround() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    This function is similar to round() function, but it differs in type of
    return value and in that an overflow is possible.

    \return The rounded long integer value. If \a __x is not a finite number
    or an overflow was, this realization returns the \c LONG_MIN value
    (0x80000000).
 */
extern long lround (double __x) __attribute__((__const__));


/**
    The lrint() function rounds \a __x to the nearest integer, rounding the
    halfway cases to the even integer direction. (That is both 1.5 and 2.5
    values are rounded to 2). This function is similar to rint() function,
    but it differs in type of return value and in that an overflow is
    possible.

    \return The rounded long integer value. If \a __x is not a finite
    number or an overflow was, this realization returns the \c LONG_MIN
    value (0x80000000).
 */
extern long lrint (double __x) __attribute__((__const__));



}


/*@}*/
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/







# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdint.h" 1 3 4
# 9 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdint.h" 3 4
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 1 3 4
/* Copyright (c) 2002,2004,2005 Marek Michalkiewicz
   Copyright (c) 2005, Carlos Lamas
   Copyright (c) 2005,2007 Joerg Wunsch
   Copyright (c) 2013 Embecosm
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
 * ISO/IEC 9899:1999  7.18 Integer types <stdint.h>
 */




/** \file */
/** \defgroup avr_stdint <stdint.h>: Standard Integer Types
    \code #include <stdint.h> \endcode

    Use [u]intN_t if you need exactly N bits.

    Since these typedefs are mandated by the C99 standard, they are preferred
    over rolling your own typedefs.  */


/*
 * __USING_MINT8 is defined to 1 if the -mint8 option is in effect.
 */
# 64 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 3 4
/* Integer types */
# 123 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 3 4
/* actual implementation goes here */

typedef signed int int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef signed int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef signed int int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));

typedef signed int int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));




/** \name Integer types capable of holding object pointers
    These allow you to declare variables of the same size as a pointer. */

/*@{*/

/** \ingroup avr_stdint
    Signed pointer compatible type. */

typedef int16_t intptr_t;

/** \ingroup avr_stdint
    Unsigned pointer compatible type. */

typedef uint16_t uintptr_t;

/*@}*/

/** \name Minimum-width integer types
   Integer types having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    signed int with at least 8 bits. */

typedef int8_t int_least8_t;

/** \ingroup avr_stdint
    unsigned int with at least 8 bits. */

typedef uint8_t uint_least8_t;

/** \ingroup avr_stdint
    signed int with at least 16 bits. */

typedef int16_t int_least16_t;

/** \ingroup avr_stdint
    unsigned int with at least 16 bits. */

typedef uint16_t uint_least16_t;

/** \ingroup avr_stdint
    signed int with at least 32 bits. */

typedef int32_t int_least32_t;

/** \ingroup avr_stdint
    unsigned int with at least 32 bits. */

typedef uint32_t uint_least32_t;


/** \ingroup avr_stdint
    signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_least64_t;

/** \ingroup avr_stdint
    unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_least64_t;


/*@}*/


/** \name Fastest minimum-width integer types
   Integer types being usually fastest having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    fastest signed int with at least 8 bits. */

typedef int8_t int_fast8_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 8 bits. */

typedef uint8_t uint_fast8_t;

/** \ingroup avr_stdint
    fastest signed int with at least 16 bits. */

typedef int16_t int_fast16_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 16 bits. */

typedef uint16_t uint_fast16_t;

/** \ingroup avr_stdint
    fastest signed int with at least 32 bits. */

typedef int32_t int_fast32_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 32 bits. */

typedef uint32_t uint_fast32_t;


/** \ingroup avr_stdint
    fastest signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_fast64_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_fast64_t;


/*@}*/


/** \name Greatest-width integer types
   Types designating integer data capable of representing any value of
   any integer type in the corresponding signed or unsigned category */

/*@{*/






/** \ingroup avr_stdint
    largest signed int available. */

typedef int64_t intmax_t;

/** \ingroup avr_stdint
    largest unsigned int available. */

typedef uint64_t uintmax_t;


/*@}*/


/* Helping macro */
# 298 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 3 4
/** \name Limits of specified-width integer types
   C++ implementations should define these macros only when
   __STDC_LIMIT_MACROS is defined before <stdint.h> is included */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an int8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int8_t can hold. */
# 328 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 3 4
/** \ingroup avr_stdint
    largest value an uint8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint32_t can hold. */





/** \ingroup avr_stdint
    largest positive value an int64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint64_t can hold. */



/*@}*/

/** \name Limits of minimum-width integer types */
/*@{*/

/** \ingroup avr_stdint
    largest positive value an int_least8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least32_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least64_t can hold. */



/*@}*/

/** \name Limits of fastest minimum-width integer types */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an int_fast8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast32_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast64_t can hold. */



/*@}*/

/** \name Limits of integer types capable of holding object pointers */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an intptr_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an intptr_t can hold. */



/** \ingroup avr_stdint
    largest value an uintptr_t can hold. */



/*@}*/

/** \name Limits of greatest-width integer types */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an intmax_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an intmax_t can hold. */



/** \ingroup avr_stdint
    largest value an uintmax_t can hold. */



/*@}*/

/** \name Limits of other integer types
    C++ implementations should define these macros only when
    __STDC_LIMIT_MACROS is defined before <stdint.h> is included */

/*@{*/

/** \ingroup avr_stdint
    largest positive value a ptrdiff_t can hold. */



/** \ingroup avr_stdint
    smallest negative value a ptrdiff_t can hold. */




/* Limits of sig_atomic_t */
/* signal.h is currently not implemented (not avr/signal.h) */

/** \ingroup avr_stdint
    largest positive value a sig_atomic_t can hold. */



/** \ingroup avr_stdint
    smallest negative value a sig_atomic_t can hold. */




/** \ingroup avr_stdint
    largest value a size_t can hold. */




/* Limits of wchar_t */
/* wchar.h is currently not implemented */
/* #define WCHAR_MAX */
/* #define WCHAR_MIN */


/* Limits of wint_t */
/* wchar.h is currently not implemented */
# 615 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 3 4
/** \name Macros for integer constants
    C++ implementations should define these macros only when
    __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.

    These definitions are valid for integer constants without suffix and
    for macros defined as integer constant without suffix */

/* The GNU C preprocessor defines special macros in the implementation
   namespace to allow a definition that works in #if expressions.  */
# 700 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdint.h" 3 4
/*@}*/
# 10 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdint.h" 2 3 4
# 38 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 2 3

/** \file */
/** \defgroup avr_inttypes <inttypes.h>: Integer Type conversions
    \code #include <inttypes.h> \endcode

    This header file includes the exact-width integer definitions from
    <tt><stdint.h></tt>, and extends them with additional facilities
    provided by the implementation.

    Currently, the extensions include two additional integer types
    that could hold a "far" pointer (i.e. a code pointer that can
    address more than 64 KB), as well as standard names for all printf
    and scanf formatting options that are supported by the \ref avr_stdio.
    As the library does not support the full range of conversion
    specifiers from ISO 9899:1999, only those conversions that are
    actually implemented will be listed here.

    The idea behind these conversion macros is that, for each of the
    types defined by <stdint.h>, a macro will be supplied that portably
    allows formatting an object of that type in printf() or scanf()
    operations.  Example:

    \code
    #include <inttypes.h>

    uint8_t smallval;
    int32_t longval;
    ...
    printf("The hexadecimal value of smallval is %" PRIx8
           ", the decimal value of longval is %" PRId32 ".\n",
	   smallval, longval);
    \endcode
*/

/** \name Far pointers for memory access >64K */

/*@{*/
/** \ingroup avr_inttypes
    signed integer type that can hold a pointer > 64 KB */
typedef int32_t int_farptr_t;

/** \ingroup avr_inttypes
    unsigned integer type that can hold a pointer > 64 KB */
typedef uint32_t uint_farptr_t;
/*@}*/




/** \name macros for printf and scanf format specifiers

    For C++, these are only included if __STDC_LIMIT_MACROS
    is defined before including <inttypes.h>.
 */

/*@{*/
/** \ingroup avr_inttypes
    decimal printf format for int8_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least8_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast8_t */


/** \ingroup avr_inttypes
    integer printf format for int8_t */

/** \ingroup avr_inttypes
    integer printf format for int_least8_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast8_t */



/** \ingroup avr_inttypes
    decimal printf format for int16_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least16_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast16_t */


/** \ingroup avr_inttypes
    integer printf format for int16_t */

/** \ingroup avr_inttypes
    integer printf format for int_least16_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast16_t */



/** \ingroup avr_inttypes
    decimal printf format for int32_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least32_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast32_t */


/** \ingroup avr_inttypes
    integer printf format for int32_t */

/** \ingroup avr_inttypes
    integer printf format for int_least32_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast32_t */
# 173 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    decimal printf format for intptr_t */

/** \ingroup avr_inttypes
    integer printf format for intptr_t */


/** \ingroup avr_inttypes
    octal printf format for uint8_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    decimal printf format for uint8_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint8_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint8_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast8_t */



/** \ingroup avr_inttypes
    octal printf format for uint16_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    decimal printf format for uint16_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint16_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint16_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast16_t */



/** \ingroup avr_inttypes
    octal printf format for uint32_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    decimal printf format for uint32_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint32_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint32_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast32_t */
# 328 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    octal printf format for uintptr_t */

/** \ingroup avr_inttypes
    decimal printf format for uintptr_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uintptr_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uintptr_t */



/** \ingroup avr_inttypes
    decimal scanf format for int8_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least8_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast8_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int8_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least8_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast8_t */



/** \ingroup avr_inttypes
    decimal scanf format for int16_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least16_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast16_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int16_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least16_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast16_t */



/** \ingroup avr_inttypes
    decimal scanf format for int32_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least32_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast32_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int32_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least32_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast32_t */
# 420 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    decimal scanf format for intptr_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for intptr_t */


/** \ingroup avr_inttypes
    octal scanf format for uint8_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least8_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast8_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint8_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least8_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast8_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint8_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least8_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast8_t */


/** \ingroup avr_inttypes
    octal scanf format for uint16_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast16_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint16_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast16_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint16_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast16_t */



/** \ingroup avr_inttypes
    octal scanf format for uint32_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast32_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint32_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast32_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint32_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast32_t */
# 539 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    octal scanf format for uintptr_t */

/** \ingroup avr_inttypes
    decimal scanf format for uintptr_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uintptr_t */


/*@}*/
# 89 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 2 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 90 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 2 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */




/** \defgroup avr_sfr_notes Additional notes from <avr/sfr_defs.h>
    \ingroup avr_sfr

   The \c <avr/sfr_defs.h> file is included by all of the \c <avr/ioXXXX.h>
   files, which use macros defined here to make the special function register
   definitions look like C variables or simple constants, depending on the
   <tt>_SFR_ASM_COMPAT</tt> define.  Some examples from \c <avr/iocanxx.h> to
   show how to define such macros:

\code
#define PORTA   _SFR_IO8(0x02)
#define EEAR    _SFR_IO16(0x21)
#define UDR0    _SFR_MEM8(0xC6)
#define TCNT3   _SFR_MEM16(0x94)
#define CANIDT  _SFR_MEM32(0xF0)
\endcode

   If \c _SFR_ASM_COMPAT is not defined, C programs can use names like
   <tt>PORTA</tt> directly in C expressions (also on the left side of
   assignment operators) and GCC will do the right thing (use short I/O
   instructions if possible).  The \c __SFR_OFFSET definition is not used in
   any way in this case.

   Define \c _SFR_ASM_COMPAT as 1 to make these names work as simple constants
   (addresses of the I/O registers).  This is necessary when included in
   preprocessed assembler (*.S) source files, so it is done automatically if
   \c __ASSEMBLER__ is defined.  By default, all addresses are defined as if
   they were memory addresses (used in \c lds/sts instructions).  To use these
   addresses in \c in/out instructions, you must subtract 0x20 from them.

   For more backwards compatibility, insert the following at the start of your
   old assembler source file:

\code
#define __SFR_OFFSET 0
\endcode

   This automatically subtracts 0x20 from I/O space addresses, but it's a
   hack, so it is recommended to change your source: wrap such addresses in
   macros defined here, as shown below.  After this is done, the
   <tt>__SFR_OFFSET</tt> definition is no longer necessary and can be removed.

   Real example - this code could be used in a boot loader that is portable
   between devices with \c SPMCR at different addresses.

\verbatim
<avr/iom163.h>: #define SPMCR _SFR_IO8(0x37)
<avr/iom128.h>: #define SPMCR _SFR_MEM8(0x68)
\endverbatim

\code
#if _SFR_IO_REG_P(SPMCR)
	out	_SFR_IO_ADDR(SPMCR), r24
#else
	sts	_SFR_MEM_ADDR(SPMCR), r24
#endif
\endcode

   You can use the \c in/out/cbi/sbi/sbic/sbis instructions, without the
   <tt>_SFR_IO_REG_P</tt> test, if you know that the register is in the I/O
   space (as with \c SREG, for example).  If it isn't, the assembler will
   complain (I/O address out of range 0...0x3f), so this should be fairly
   safe.

   If you do not define \c __SFR_OFFSET (so it will be 0x20 by default), all
   special register addresses are defined as memory addresses (so \c SREG is
   0x5f), and (if code size and speed are not important, and you don't like
   the ugly \#if above) you can always use lds/sts to access them.  But, this
   will not work if <tt>__SFR_OFFSET</tt> != 0x20, so use a different macro
   (defined only if <tt>__SFR_OFFSET</tt> == 0x20) for safety:

\code
	sts	_SFR_ADDR(SPMCR), r24
\endcode

   In C programs, all 3 combinations of \c _SFR_ASM_COMPAT and
   <tt>__SFR_OFFSET</tt> are supported - the \c _SFR_ADDR(SPMCR) macro can be
   used to get the address of the \c SPMCR register (0x57 or 0x68 depending on
   device). */
# 125 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\sfr_defs.h" 3
/* These only work in C programs.  */
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 127 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\sfr_defs.h" 2 3
# 194 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\sfr_defs.h" 3
/** \name Bit manipulation */

/*@{*/
/** \def _BV
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Converts a bit number into a byte value.

    \note The bit shift is performed by the compiler which then inserts the
    result into the code. Thus, there is no run-time overhead when using
    _BV(). */



/*@}*/
# 219 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\sfr_defs.h" 3
/** \name IO register bit manipulation */

/*@{*/



/** \def bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is set. 
    This will return a 0 if the bit is clear, and non-zero
    if the bit is set. */



/** \def bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is clear. 
    This will return non-zero if the bit is clear, and a 0
    if the bit is set. */



/** \def loop_until_bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is set. */



/** \def loop_until_bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is clear. */



/*@}*/
# 100 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3
# 272 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 1 3
/* Copyright (c) 2007 Atmel Corporation

   All rights reserved.



   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:



   * Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.



   * Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in

     the documentation and/or other materials provided with the

     distribution.



   * Neither the name of the copyright holders nor the names of

     contributors may be used to endorse or promote products derived

     from this software without specific prior written permission.



  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE

  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

  POSSIBILITY OF SUCH DAMAGE. 

*/
# 32 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* $Id: iom328p.h 2444 2014-08-11 22:10:47Z joerg_wunsch $ */

/* avr/iom328p.h - definitions for ATmega328P. */

/* This file should only be included from <avr/io.h>, never directly. */
# 52 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* Registers and associated bit numbers */
# 799 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* Interrupt Vectors */
/* Interrupt Vector 0 is the reset vector. */
# 881 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* Constants */
# 893 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* Fuses */


/* Low Fuse Byte */
# 907 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* High Fuse Byte */
# 918 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\iom328p.h" 3
/* Extended Fuse Byte */







/* Lock Bits */





/* Signature */
# 273 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3
# 715 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 1 3
/* Copyright (c) 2003  Theodore A. Roth
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




/* This file should only be included from <avr/io.h>, never directly. */





/* Define Generic PORTn, DDn, and PINn values. */

/* Port Data Register (generic) */
# 54 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* Port Data Direction Register (generic) */
# 64 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* Port Input Pins (generic) */
# 74 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* Define PORTxn an Pxn values for all possible port pins if not defined already by io.h. */

/* PORT A */
# 119 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT B */
# 162 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT C */
# 205 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT D */
# 248 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT E */
# 291 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT F */
# 334 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT G */
# 377 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT H */
# 420 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT J */
# 463 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT K */
# 506 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\portpins.h" 3
/* PORT L */
# 716 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 1 3
/* Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */





# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */
# 38 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 2 3

/* 
This purpose of this header is to define registers that have not been 
previously defined in the individual device IO header files, and to define 
other symbols that are common across AVR device families.

This file is designed to be included in <avr/io.h> after the individual
device IO header files, and after <avr/sfr_defs.h>

*/

/*------------ Registers Not Previously Defined ------------*/

/* 
These are registers that are not previously defined in the individual
IO header files, OR they are defined here because they are used in parts of
avr-libc even if a device is not selected but a general architecture has
been selected.
*/


/*
Stack pointer register.

AVR architecture 1 has no RAM, thus no stack pointer. 

All other architectures do have a stack pointer.  Some devices have only
less than 256 bytes of possible RAM locations (128 Bytes of SRAM
and no option for external RAM), thus SPH is officially "reserved"
for them.
*/
# 98 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* Status Register */
# 108 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* SREG bit definitions */
# 206 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/*------------ Common Symbols ------------*/

/* 
Generic definitions for registers that are common across multiple AVR devices
and families.
*/

/* Pointer registers definitions */
# 224 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* Status Register */
# 234 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* Stack Pointer (combined) Register */
# 244 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* Stack Pointer High Register */
# 255 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* Stack Pointer Low Register */
# 265 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* RAMPD Register */
# 275 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* RAMPX Register */
# 285 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* RAMPY Register */
# 295 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* RAMPZ Register */
# 305 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/* Extended Indirect Register */
# 315 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\common.h" 3
/*------------ Workaround to old compilers (4.1.2 and earlier)  ------------*/
# 718 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\version.h" 1 3
/* Copyright (c) 2005, Joerg Wunsch                               -*- c -*-
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \defgroup avr_version <avr/version.h>: avr-libc version macros
    \code #include <avr/version.h> \endcode

    This header file defines macros that contain version numbers and
    strings describing the current version of avr-libc.

    The version number itself basically consists of three pieces that
    are separated by a dot: the major number, the minor number, and
    the revision number.  For development versions (which use an odd
    minor number), the string representation additionally gets the
    date code (YYYYMMDD) appended.

    This file will also be included by \c <avr/io.h>.  That way,
    portable tests can be implemented using \c <avr/io.h> that can be
    used in code that wants to remain backwards-compatible to library
    versions prior to the date when the library version API had been
    added, as referenced but undefined C preprocessor macros
    automatically evaluate to 0.
*/




/** \ingroup avr_version
    String literal representation of the current library version. */


/** \ingroup avr_version
    Numerical representation of the current library version.

    In the numerical representation, the major number is multiplied by
    10000, the minor number by 100, and all three parts are then
    added.  It is intented to provide a monotonically increasing
    numerical value that can easily be used in numerical checks.
 */


/** \ingroup avr_version
    String literal representation of the release date. */


/** \ingroup avr_version
    Numerical representation of the release date. */


/** \ingroup avr_version
    Library major version number. */


/** \ingroup avr_version
    Library minor version number. */


/** \ingroup avr_version
    Library revision number. */
# 720 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3





/* Include fuse.h after individual IO header files. */
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\fuse.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/fuse.h - Fuse API */




/* This file must be explicitly included by <avr/io.h>. */





/** \file */
/** \defgroup avr_fuse <avr/fuse.h>: Fuse Support

    \par Introduction

    The Fuse API allows a user to specify the fuse settings for the specific
    AVR device they are compiling for. These fuse settings will be placed
    in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the fuse information embedded in
    the ELF file, by extracting this information and determining if the fuses
    need to be programmed before programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Fuse API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/fuse.h>
    file. These other two files provides everything necessary to set the AVR
    fuses.
    
    \par Fuse API
    
    Each I/O header file must define the FUSE_MEMORY_SIZE macro which is
    defined to the number of fuse bytes that exist in the AVR device.
    
    A new type, __fuse_t, is defined as a structure. The number of fields in 
    this structure are determined by the number of fuse bytes in the 
    FUSE_MEMORY_SIZE macro.
    
    If FUSE_MEMORY_SIZE == 1, there is only a single field: byte, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 2, there are two fields: low, and high, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 3, there are three fields: low, high, and extended,
    of type unsigned char.
    
    If FUSE_MEMORY_SIZE > 3, there is a single field: byte, which is an array
    of unsigned char with the size of the array being FUSE_MEMORY_SIZE.
    
    A convenience macro, FUSEMEM, is defined as a GCC attribute for a 
    custom-named section of ".fuse".
    
    A convenience macro, FUSES, is defined that declares a variable, __fuse, of
    type __fuse_t with the attribute defined by FUSEMEM. This variable
    allows the end user to easily set the fuse data.

    \note If a device-specific I/O header file has previously defined FUSEMEM,
    then FUSEMEM is not redefined. If a device-specific I/O header file has
    previously defined FUSES, then FUSES is not redefined.

    Each AVR device I/O header file has a set of defined macros which specify the
    actual fuse bits available on that device. The AVR fuses have inverted
    values, logical 1 for an unprogrammed (disabled) bit and logical 0 for a
    programmed (enabled) bit. The defined macros for each individual fuse
    bit represent this in their definition by a bit-wise inversion of a mask.
    For example, the FUSE_EESAVE fuse in the ATmega128 is defined as:
    \code
    #define FUSE_EESAVE      ~_BV(3)
    \endcode
    \note The _BV macro creates a bit mask from a bit number. It is then 
    inverted to represent logical values for a fuse memory byte.
    
    To combine the fuse bits macros together to represent a whole fuse byte,
    use the bitwise AND operator, like so:
    \code
    (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN)
    \endcode
    
    Each device I/O header file also defines macros that provide default values
    for each fuse byte that is available. LFUSE_DEFAULT is defined for a Low
    Fuse byte. HFUSE_DEFAULT is defined for a High Fuse byte. EFUSE_DEFAULT
    is defined for an Extended Fuse byte.
    
    If FUSE_MEMORY_SIZE > 3, then the I/O header file defines macros that
    provide default values for each fuse byte like so:
    FUSE0_DEFAULT
    FUSE1_DEFAULT
    FUSE2_DEFAULT
    FUSE3_DEFAULT
    FUSE4_DEFAULT
    ....
    
    \par API Usage Example
    
    Putting all of this together is easy. Using C99's designated initializers:
    
    \code
    #include <avr/io.h>

    FUSES = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or, using the variable directly instead of the FUSES macro,
    
    \code
    #include <avr/io.h>

    __fuse_t __fuse __attribute__((section (".fuse"))) = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    If you are compiling in C++, you cannot use the designated intializers so
    you must do:

    \code
    #include <avr/io.h>

    FUSES = 
    {
        LFUSE_DEFAULT, // .low
        (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN), // .high
        EFUSE_DEFAULT, // .extended
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The FUSES macro defines a global variable to store the fuse data. This 
    variable is assigned to its own linker section. Assign the desired fuse 
    values immediately in the variable initialization.
    
    The .fuse section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .fuse section.
    
    The global variable is declared in the FUSES macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize ALL fields in the __fuse_t structure. This is because
    the fuse bits in all bytes default to a logical 1, meaning unprogrammed. 
    Normal uninitialized data defaults to all locgial zeros. So it is vital that
    all fuse bytes are initialized, even with default data. If they are not,
    then the fuse bits may not programmed to the desired settings.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .fuse section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .fuse <ELF file>
    \endcode
    The section contents shows the address on the left, then the data going from
    lower address to a higher address, left to right.

*/
# 239 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\fuse.h" 3
typedef struct
{
    unsigned char low;
    unsigned char high;
    unsigned char extended;
} __fuse_t;
# 727 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3

/* Include lock.h after individual IO header files. */
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\lock.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/lock.h - Lock Bits API */





/** \file */
/** \defgroup avr_lock <avr/lock.h>: Lockbit Support

    \par Introduction

    The Lockbit API allows a user to specify the lockbit settings for the 
    specific AVR device they are compiling for. These lockbit settings will be 
    placed in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the lockbit information embedded in
    the ELF file, by extracting this information and determining if the lockbits
    need to be programmed after programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Lockbit API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/lock.h>
    file. These other two files provides everything necessary to set the AVR
    lockbits.
    
    \par Lockbit API
    
    Each I/O header file may define up to 3 macros that controls what kinds
    of lockbits are available to the user.
    
    If __LOCK_BITS_EXIST is defined, then two lock bits are available to the
    user and 3 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_0_EXIST is defined, then the two BLB0 lock bits are
    available to the user and 4 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_1_EXIST is defined, then the two BLB1 lock bits are
    available to the user and 4 mode settings are defined for these two bits.

    If __BOOT_LOCK_APPLICATION_TABLE_BITS_EXIST is defined then two lock bits
    are available to set the locking mode for the Application Table Section 
    (which is used in the XMEGA family).
    
    If __BOOT_LOCK_APPLICATION_BITS_EXIST is defined then two lock bits are
    available to set the locking mode for the Application Section (which is used
    in the XMEGA family).
    
    If __BOOT_LOCK_BOOT_BITS_EXIST is defined then two lock bits are available
    to set the locking mode for the Boot Loader Section (which is used in the
    XMEGA family).

    The AVR lockbit modes have inverted values, logical 1 for an unprogrammed 
    (disabled) bit and logical 0 for a programmed (enabled) bit. The defined 
    macros for each individual lock bit represent this in their definition by a 
    bit-wise inversion of a mask. For example, the LB_MODE_3 macro is defined 
    as:
    \code
    #define LB_MODE_3  (0xFC)
`   \endcode
    
    To combine the lockbit mode macros together to represent a whole byte,
    use the bitwise AND operator, like so:
    \code
    (LB_MODE_3 & BLB0_MODE_2)
    \endcode
    
    <avr/lock.h> also defines a macro that provides a default lockbit value:
    LOCKBITS_DEFAULT which is defined to be 0xFF.

    See the AVR device specific datasheet for more details about these
    lock bits and the available mode settings.
    
    A convenience macro, LOCKMEM, is defined as a GCC attribute for a 
    custom-named section of ".lock".
    
    A convenience macro, LOCKBITS, is defined that declares a variable, __lock, 
    of type unsigned char with the attribute defined by LOCKMEM. This variable
    allows the end user to easily set the lockbit data.

    \note If a device-specific I/O header file has previously defined LOCKMEM,
    then LOCKMEM is not redefined. If a device-specific I/O header file has
    previously defined LOCKBITS, then LOCKBITS is not redefined. LOCKBITS is
    currently known to be defined in the I/O header files for the XMEGA devices.

    \par API Usage Example
    
    Putting all of this together is easy:
    
    \code
    #include <avr/io.h>

    LOCKBITS = (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or:
    
    \code
    #include <avr/io.h>

    unsigned char __lock __attribute__((section (".lock"))) = 
        (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The LOCKBITS macro defines a global variable to store the lockbit data. This 
    variable is assigned to its own linker section. Assign the desired lockbit 
    values immediately in the variable initialization.
    
    The .lock section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .lock section.
    
    The global variable is declared in the LOCKBITS macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize the lockbit variable to some meaningful value, even
    if it is the default value. This is because the lockbits default to a 
    logical 1, meaning unprogrammed. Normal uninitialized data defaults to all 
    locgial zeros. So it is vital that all lockbits are initialized, even with 
    default data. If they are not, then the lockbits may not programmed to the 
    desired settings and can possibly put your device into an unrecoverable 
    state.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .lock section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .lock <ELF file>
    \endcode

*/
# 197 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\lock.h" 3
/* Lock Bit Modes */
# 730 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 2 3
# 91 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 2 3
# 106 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/**
   \ingroup avr_pgmspace
   \def PROGMEM

   Attribute to use in order to declare an object being located in
   flash ROM.
 */



extern "C" {
# 386 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/* Although in C, we can get away with just using __c, it does not work in
   C++. We need to use &__c[0] to avoid the compiler puking. Dave Hylands
   explaned it thusly,

     Let's suppose that we use PSTR("Test"). In this case, the type returned
     by __c is a prog_char[5] and not a prog_char *. While these are
     compatible, they aren't the same thing (especially in C++). The type
     returned by &__c[0] is a prog_char *, which explains why it works
     fine. */
# 407 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/* The real thing. */
# 616 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/*
Macro to read data from program memory for avr tiny parts(tiny 4/5/9/10/20/40).
why:
- LPM instruction is not available in AVR_TINY instruction set.
- Programs are executed starting from address 0x0000 in program memory.
But it must be addressed starting from 0x4000 when accessed via data memory.
Reference: TINY device (ATTiny 4,5,9,10,20 and 40) datasheets
Bug: avrtc-536
*/
# 639 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte_near(address_short)
    Read a byte from the program space with a 16-bit (near) address. 
    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word_near(address_short)
    Read a word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword_near(address_short)
    Read a double word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_float_near(address_short)
    Read a float from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_ptr_near(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */
# 1048 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte(address_short)
    Read a byte from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word(address_short)
    Read a word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword(address_short)
    Read a double word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_float(address_short)
    Read a float from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_ptr(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_get_far_address(var)

   This macro facilitates the obtention of a 32 bit "far" pointer (only 24 bits
   used) to data even passed the 64KB limit for the 16 bit ordinary pointer. It
   is similar to the '&' operator, with some limitations.

   Comments:

   - The overhead is minimal and it's mainly due to the 32 bit size operation.

   - 24 bit sizes guarantees the code compatibility for use in future devices.

   - hh8() is an undocumented feature but seems to give the third significant byte
     of a 32 bit data and accepts symbols, complementing the functionality of hi8()
     and lo8(). There is not an equivalent assembler function to get the high
     significant byte.

   - 'var' has to be resolved at linking time as an existing symbol, i.e, a simple
     type variable name, an array name (not an indexed element of the array, if the
     index is a constant the compiler does not complain but fails to get the address
     if optimization is enabled), a struct name or a struct field name, a function
     identifier, a linker defined identifier,...

   - The returned value is the identifier's VMA (virtual memory address) determined
     by the linker and falls in the corresponding memory region. The AVR Harvard
     architecture requires non overlapping VMA areas for the multiple address spaces
     in the processor: Flash ROM, RAM, and EEPROM. Typical offset for this are
     0x00000000, 0x00800xx0, and 0x00810000 respectively, derived from the linker
     script used and linker options. The value returned can be seen then as a
     universal pointer.
*/
# 1146 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \fn const void * memchr_P(const void *s, int val, size_t len)
    \brief Scan flash memory for a character.

    The memchr_P() function scans the first \p len bytes of the flash
    memory area pointed to by \p s for the character \p val.  The first
    byte to match \p val (interpreted as an unsigned character) stops
    the operation.

    \return The memchr_P() function returns a pointer to the matching
    byte or \c NULL if the character does not occur in the given memory
    area.	*/
extern const void * memchr_P(const void *, int __val, size_t __len) __attribute__((__const__));

/** \ingroup avr_pgmspace
    \fn int memcmp_P(const void *s1, const void *s2, size_t len)
    \brief Compare memory areas

    The memcmp_P() function compares the first \p len bytes of the memory
    areas \p s1 and flash \p s2. The comparision is performed using unsigned
    char operations.

    \returns The memcmp_P() function returns an integer less than, equal
    to, or greater than zero if the first \p len bytes of \p s1 is found,
    respectively, to be less than, to match, or be greater than the first
    \p len bytes of \p s2.	*/
extern int memcmp_P(const void *, const void *, size_t) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn void *memccpy_P (void *dest, const void *src, int val, size_t len)

    This function is similar to memccpy() except that \p src is pointer
    to a string in program space.	*/
extern void *memccpy_P(void *, const void *, int __val, size_t);

/** \ingroup avr_pgmspace
    \fn void *memcpy_P(void *dest, const void *src, size_t n)

    The memcpy_P() function is similar to memcpy(), except the src string
    resides in program space.

    \returns The memcpy_P() function returns a pointer to dest.  */
extern void *memcpy_P(void *, const void *, size_t);

/** \ingroup avr_pgmspace
    \fn void *memmem_P(const void *s1, size_t len1, const void *s2, size_t len2)

    The memmem_P() function is similar to memmem() except that \p s2 is
    pointer to a string in program space.	*/
extern void *memmem_P(const void *, size_t, const void *, size_t) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn const void +memrchr_P(const void *src, int val, size_t len)

    The memrchr_P() function is like the memchr_P() function, except
    that it searches backwards from the end of the \p len bytes pointed
    to by \p src instead of forwards from the front. (Glibc, GNU extension.)

    \return The memrchr_P() function returns a pointer to the matching
    byte or \c NULL if the character does not occur in the given memory
    area.	*/
extern const void * memrchr_P(const void *, int __val, size_t __len) __attribute__((__const__));

/** \ingroup avr_pgmspace
    \fn char *strcat_P(char *dest, const char *src)

    The strcat_P() function is similar to strcat() except that the \e src
    string must be located in program space (flash).

    \returns The strcat() function returns a pointer to the resulting string
    \e dest. */
extern char *strcat_P(char *, const char *);

/** \ingroup avr_pgmspace
    \fn const char *strchr_P(const char *s, int val)
    \brief Locate character in program space string.

    The strchr_P() function locates the first occurrence of \p val
    (converted to a char) in the string pointed to by \p s in program
    space. The terminating null character is considered to be part of
    the string.

    The strchr_P() function is similar to strchr() except that \p s is
    pointer to a string in program space.

    \returns The strchr_P() function returns a pointer to the matched
    character or \c NULL if the character is not found. */
extern const char * strchr_P(const char *, int __val) __attribute__((__const__));

/** \ingroup avr_pgmspace
    \fn const char *strchrnul_P(const char *s, int c)

    The strchrnul_P() function is like strchr_P() except that if \p c is
    not found in \p s, then it returns a pointer to the null byte at the
    end of \p s, rather than \c NULL. (Glibc, GNU extension.)

    \return The strchrnul_P() function returns a pointer to the matched
    character, or a pointer to the null byte at the end of \p s (i.e.,
    \c s+strlen(s)) if the character is not found.	*/
extern const char * strchrnul_P(const char *, int __val) __attribute__((__const__));

/** \ingroup avr_pgmspace
    \fn int strcmp_P(const char *s1, const char *s2)

    The strcmp_P() function is similar to strcmp() except that \p s2 is
    pointer to a string in program space.

    \returns The strcmp_P() function returns an integer less than, equal
    to, or greater than zero if \p s1 is found, respectively, to be less
    than, to match, or be greater than \p s2. A consequence of the
    ordering used by strcmp_P() is that if \p s1 is an initial substring
    of \p s2, then \p s1 is considered to be "less than" \p s2. */
extern int strcmp_P(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn char *strcpy_P(char *dest, const char *src)

    The strcpy_P() function is similar to strcpy() except that src is a
    pointer to a string in program space.

    \returns The strcpy_P() function returns a pointer to the destination
    string dest. */
extern char *strcpy_P(char *, const char *);

/** \ingroup avr_pgmspace
    \fn int strcasecmp_P(const char *s1, const char *s2)
    \brief Compare two strings ignoring case.

    The strcasecmp_P() function compares the two strings \p s1 and \p s2,
    ignoring the case of the characters.

    \param s1 A pointer to a string in the devices SRAM.
    \param s2 A pointer to a string in the devices Flash.

    \returns The strcasecmp_P() function returns an integer less than,
    equal to, or greater than zero if \p s1 is found, respectively, to
    be less than, to match, or be greater than \p s2. A consequence of
    the ordering used by strcasecmp_P() is that if \p s1 is an initial
    substring of \p s2, then \p s1 is considered to be "less than" \p s2. */
extern int strcasecmp_P(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn char *strcasestr_P(const char *s1, const char *s2)

    This funtion is similar to strcasestr() except that \p s2 is pointer
    to a string in program space.	*/
extern char *strcasestr_P(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn size_t strcspn_P(const char *s, const char *reject)

    The strcspn_P() function calculates the length of the initial segment
    of \p s which consists entirely of characters not in \p reject. This
    function is similar to strcspn() except that \p reject is a pointer
    to a string in program space.

    \return The strcspn_P() function returns the number of characters in
    the initial segment of \p s which are not in the string \p reject.
    The terminating zero is not considered as a part of string.	*/
extern size_t strcspn_P(const char *__s, const char * __reject) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn size_t strlcat_P(char *dst, const char *src, size_t siz)
    \brief Concatenate two strings.

    The strlcat_P() function is similar to strlcat(), except that the \p src
    string must be located in program space (flash).

    Appends \p src to string \p dst of size \p siz (unlike strncat(),
    \p siz is the full size of \p dst, not space left).  At most \p siz-1
    characters will be copied.  Always NULL terminates (unless \p siz <=
    \p strlen(dst)).

    \returns The strlcat_P() function returns strlen(src) + MIN(siz,
    strlen(initial dst)).  If retval >= siz, truncation occurred.	*/
extern size_t strlcat_P (char *, const char *, size_t );

/** \ingroup avr_pgmspace
    \fn size_t strlcpy_P(char *dst, const char *src, size_t siz)
    \brief Copy a string from progmem to RAM.

    Copy \p src to string \p dst of size \p siz.  At most \p siz-1
    characters will be copied.  Always NULL terminates (unless \p siz == 0).
    The strlcpy_P() function is similar to strlcpy() except that the
    \p src is pointer to a string in memory space.

    \returns The strlcpy_P() function returns strlen(src). If
    retval >= siz, truncation occurred.  */
extern size_t strlcpy_P (char *, const char *, size_t );

/** \ingroup avr_pgmspace
    \fn size_t strnlen_P(const char *src, size_t len)
    \brief Determine the length of a fixed-size string.

    The strnlen_P() function is similar to strnlen(), except that \c src is a
    pointer to a string in program space.

    \returns The strnlen_P function returns strlen_P(src), if that is less than
    \c len, or \c len if there is no '\\0' character among the first \c len
    characters pointed to by \c src. */
extern size_t strnlen_P(const char *, size_t) __attribute__((__const__)); /* program memory can't change */

/** \ingroup avr_pgmspace
    \fn int strncmp_P(const char *s1, const char *s2, size_t n)

    The strncmp_P() function is similar to strcmp_P() except it only compares
    the first (at most) n characters of s1 and s2.

    \returns The strncmp_P() function returns an integer less than, equal to,
    or greater than zero if s1 (or the first n bytes thereof) is found,
    respectively, to be less than, to match, or be greater than s2.  */
extern int strncmp_P(const char *, const char *, size_t) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn int strncasecmp_P(const char *s1, const char *s2, size_t n)
    \brief Compare two strings ignoring case.

    The strncasecmp_P() function is similar to strcasecmp_P(), except it
    only compares the first \p n characters of \p s1.

    \param s1 A pointer to a string in the devices SRAM.
    \param s2 A pointer to a string in the devices Flash.
    \param n The maximum number of bytes to compare.

    \returns The strncasecmp_P() function returns an integer less than,
    equal to, or greater than zero if \p s1 (or the first \p n bytes
    thereof) is found, respectively, to be less than, to match, or be
    greater than \p s2. A consequence of the ordering used by
    strncasecmp_P() is that if \p s1 is an initial substring of \p s2,
    then \p s1 is considered to be "less than" \p s2.  */
extern int strncasecmp_P(const char *, const char *, size_t) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn char *strncat_P(char *dest, const char *src, size_t len)
    \brief Concatenate two strings.

    The strncat_P() function is similar to strncat(), except that the \e src
    string must be located in program space (flash).

    \returns The strncat_P() function returns a pointer to the resulting string
    dest.  */
extern char *strncat_P(char *, const char *, size_t);

/** \ingroup avr_pgmspace
    \fn char *strncpy_P(char *dest, const char *src, size_t n)

    The strncpy_P() function is similar to strcpy_P() except that not more
    than n bytes of src are copied.  Thus, if there is no null byte among the
    first n bytes of src, the result will not be null-terminated.

    In the case where the length of src is less than that of n, the remainder
    of dest will be padded with nulls.

    \returns The strncpy_P() function returns a pointer to the destination
    string dest.  */
extern char *strncpy_P(char *, const char *, size_t);

/** \ingroup avr_pgmspace
    \fn char *strpbrk_P(const char *s, const char *accept)

    The strpbrk_P() function locates the first occurrence in the string
    \p s of any of the characters in the flash string \p accept. This
    function is similar to strpbrk() except that \p accept is a pointer
    to a string in program space.

    \return  The strpbrk_P() function returns a pointer to the character
    in \p s that matches one of the characters in \p accept, or \c NULL
    if no such character is found. The terminating zero is not considered
    as a part of string: if one or both args are empty, the result will
    \c NULL. */
extern char *strpbrk_P(const char *__s, const char * __accept) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn const char *strrchr_P(const char *s, int val)
    \brief Locate character in string.

    The strrchr_P() function returns a pointer to the last occurrence of
    the character \p val in the flash string \p s.

    \return The strrchr_P() function returns a pointer to the matched
    character or \c NULL if the character is not found. */
extern const char * strrchr_P(const char *, int __val) __attribute__((__const__));

/** \ingroup avr_pgmspace
    \fn char *strsep_P(char **sp, const char *delim)
    \brief Parse a string into tokens.

    The strsep_P() function locates, in the string referenced by \p *sp,
    the first occurrence of any character in the string \p delim (or the
    terminating '\\0' character) and replaces it with a '\\0'.  The
    location of the next character after the delimiter character (or \c
    NULL, if the end of the string was reached) is stored in \p *sp. An
    ``empty'' field, i.e. one caused by two adjacent delimiter
    characters, can be detected by comparing the location referenced by
    the pointer returned in \p *sp to '\\0'. This function is similar to
    strsep() except that \p delim is a pointer to a string in program
    space.

    \return The strsep_P() function returns a pointer to the original
    value of \p *sp. If \p *sp is initially \c NULL, strsep_P() returns
    \c NULL. */
extern char *strsep_P(char **__sp, const char * __delim);

/** \ingroup avr_pgmspace
    \fn size_t strspn_P(const char *s, const char *accept)

    The strspn_P() function calculates the length of the initial segment
    of \p s which consists entirely of characters in \p accept. This
    function is similar to strspn() except that \p accept is a pointer
    to a string in program space.

    \return  The strspn_P() function returns the number of characters in
    the initial segment of \p s which consist only of characters from \p
    accept. The terminating zero is not considered as a part of string.	*/
extern size_t strspn_P(const char *__s, const char * __accept) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn char *strstr_P(const char *s1, const char *s2)
    \brief Locate a substring.

    The strstr_P() function finds the first occurrence of the substring
    \p s2 in the string \p s1.  The terminating '\\0' characters are not
    compared. The strstr_P() function is similar to strstr() except that
    \p s2 is pointer to a string in program space.

    \returns The strstr_P() function returns a pointer to the beginning
    of the substring, or NULL if the substring is not found. If \p s2
    points to a string of zero length, the function returns \p s1. */
extern char *strstr_P(const char *, const char *) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn char *strtok_P(char *s, const char * delim)
    \brief Parses the string into tokens.

    strtok_P() parses the string \p s into tokens. The first call to
    strtok_P() should have \p s as its first argument. Subsequent calls
    should have the first argument set to NULL. If a token ends with a
    delimiter, this delimiting character is overwritten with a '\\0' and a
    pointer to the next character is saved for the next call to strtok_P().
    The delimiter string \p delim may be different for each call.

    The strtok_P() function is similar to strtok() except that \p delim
    is pointer to a string in program space.

    \returns The strtok_P() function returns a pointer to the next token or
    NULL when no more tokens are found.

    \note strtok_P() is NOT reentrant. For a reentrant version of this
    function see strtok_rP().
 */
extern char *strtok_P(char *__s, const char * __delim);

/** \ingroup avr_pgmspace
    \fn char *strtok_rP (char *string, const char *delim, char **last)
    \brief Parses string into tokens.

    The strtok_rP() function parses \p string into tokens. The first call to
    strtok_rP() should have string as its first argument. Subsequent calls
    should have the first argument set to NULL. If a token ends with a
    delimiter, this delimiting character is overwritten with a '\\0' and a
    pointer to the next character is saved for the next call to strtok_rP().
    The delimiter string \p delim may be different for each call. \p last is
    a user allocated char* pointer. It must be the same while parsing the
    same string. strtok_rP() is a reentrant version of strtok_P().

    The strtok_rP() function is similar to strtok_r() except that \p delim
    is pointer to a string in program space.

    \returns The strtok_rP() function returns a pointer to the next token or
    NULL when no more tokens are found. */
extern char *strtok_rP(char *__s, const char * __delim, char **__last);

/** \ingroup avr_pgmspace
    \fn size_t strlen_PF(uint_farptr_t s)
    \brief Obtain the length of a string

    The strlen_PF() function is similar to strlen(), except that \e s is a
    far pointer to a string in program space.

    \param s A far pointer to the string in flash

    \returns The strlen_PF() function returns the number of characters in
    \e s. The contents of RAMPZ SFR are undefined when the function returns. */
extern size_t strlen_PF(uint_farptr_t src) __attribute__((__const__)); /* program memory can't change */

/** \ingroup avr_pgmspace
    \fn size_t strnlen_PF(uint_farptr_t s, size_t len)
    \brief Determine the length of a fixed-size string

    The strnlen_PF() function is similar to strnlen(), except that \e s is a
    far pointer to a string in program space.

    \param s A far pointer to the string in Flash
    \param len The maximum number of length to return

    \returns The strnlen_PF function returns strlen_P(\e s), if that is less
    than \e len, or \e len if there is no '\\0' character among the first \e
    len characters pointed to by \e s. The contents of RAMPZ SFR are
    undefined when the function returns. */
extern size_t strnlen_PF(uint_farptr_t src, size_t len) __attribute__((__const__)); /* program memory can't change */

/** \ingroup avr_pgmspace
    \fn void *memcpy_PF(void *dest, uint_farptr_t src, size_t n)
    \brief Copy a memory block from flash to SRAM

    The memcpy_PF() function is similar to memcpy(), except the data
    is copied from the program space and is addressed using a far pointer.

    \param dest A pointer to the destination buffer
    \param src A far pointer to the origin of data in flash memory
    \param n The number of bytes to be copied

    \returns The memcpy_PF() function returns a pointer to \e dst. The contents
    of RAMPZ SFR are undefined when the function returns. */
extern void *memcpy_PF(void *dest, uint_farptr_t src, size_t len);

/** \ingroup avr_pgmspace
    \fn char *strcpy_PF(char *dst, uint_farptr_t src)
    \brief Duplicate a string

    The strcpy_PF() function is similar to strcpy() except that \e src is a far
    pointer to a string in program space.

    \param dst A pointer to the destination string in SRAM
    \param src A far pointer to the source string in Flash

    \returns The strcpy_PF() function returns a pointer to the destination
    string \e dst. The contents of RAMPZ SFR are undefined when the funcion
    returns. */
extern char *strcpy_PF(char *dest, uint_farptr_t src);

/** \ingroup avr_pgmspace
    \fn char *strncpy_PF(char *dst, uint_farptr_t src, size_t n)
    \brief Duplicate a string until a limited length

    The strncpy_PF() function is similar to strcpy_PF() except that not more
    than \e n bytes of \e src are copied.  Thus, if there is no null byte among
    the first \e n bytes of \e src, the result will not be null-terminated.

    In the case where the length of \e src is less than that of \e n, the
    remainder of \e dst will be padded with nulls.

    \param dst A pointer to the destination string in SRAM
    \param src A far pointer to the source string in Flash
    \param n The maximum number of bytes to copy

    \returns The strncpy_PF() function returns a pointer to the destination
    string \e dst. The contents of RAMPZ SFR are undefined when the function
    returns. */
extern char *strncpy_PF(char *dest, uint_farptr_t src, size_t len);

/** \ingroup avr_pgmspace
    \fn char *strcat_PF(char *dst, uint_farptr_t src)
    \brief Concatenates two strings

    The strcat_PF() function is similar to strcat() except that the \e src
    string must be located in program space (flash) and is addressed using
    a far pointer

    \param dst A pointer to the destination string in SRAM
    \param src A far pointer to the string to be appended in Flash

    \returns The strcat_PF() function returns a pointer to the resulting
    string \e dst. The contents of RAMPZ SFR are undefined when the function
    returns */
extern char *strcat_PF(char *dest, uint_farptr_t src);

/** \ingroup avr_pgmspace
    \fn size_t strlcat_PF(char *dst, uint_farptr_t src, size_t n)
    \brief Concatenate two strings

    The strlcat_PF() function is similar to strlcat(), except that the \e src
    string must be located in program space (flash) and is addressed using
    a far pointer.

    Appends src to string dst of size \e n (unlike strncat(), \e n is the
    full size of \e dst, not space left).  At most \e n-1 characters
    will be copied.  Always NULL terminates (unless \e n <= strlen(\e dst)).

    \param dst A pointer to the destination string in SRAM
    \param src A far pointer to the source string in Flash
    \param n The total number of bytes allocated to the destination string

    \returns The strlcat_PF() function returns strlen(\e src) + MIN(\e n,
    strlen(initial \e dst)).  If retval >= \e n, truncation occurred. The
    contents of RAMPZ SFR are undefined when the funcion returns. */
extern size_t strlcat_PF(char *dst, uint_farptr_t src, size_t siz);

/** \ingroup avr_pgmspace
    \fn char *strncat_PF(char *dst, uint_farptr_t src, size_t n)
    \brief Concatenate two strings

    The strncat_PF() function is similar to strncat(), except that the \e src
    string must be located in program space (flash) and is addressed using a
    far pointer.

    \param dst A pointer to the destination string in SRAM
    \param src A far pointer to the source string in Flash
    \param n The maximum number of bytes to append

    \returns The strncat_PF() function returns a pointer to the resulting
    string \e dst. The contents of RAMPZ SFR are undefined when the function
    returns. */
extern char *strncat_PF(char *dest, uint_farptr_t src, size_t len);

/** \ingroup avr_pgmspace
    \fn int strcmp_PF(const char *s1, uint_farptr_t s2)
    \brief Compares two strings

    The strcmp_PF() function is similar to strcmp() except that \e s2 is a far
    pointer to a string in program space.

    \param s1 A pointer to the first string in SRAM
    \param s2 A far pointer to the second string in Flash

    \returns The strcmp_PF() function returns an integer less than, equal to,
    or greater than zero if \e s1 is found, respectively, to be less than, to
    match, or be greater than \e s2. The contents of RAMPZ SFR are undefined
    when the function returns. */
extern int strcmp_PF(const char *s1, uint_farptr_t s2) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn int strncmp_PF(const char *s1, uint_farptr_t s2, size_t n)
    \brief Compare two strings with limited length

    The strncmp_PF() function is similar to strcmp_PF() except it only
    compares the first (at most) \e n characters of \e s1 and \e s2.

    \param s1 A pointer to the first string in SRAM
    \param s2 A far pointer to the second string in Flash
    \param n The maximum number of bytes to compare

    \returns The strncmp_PF() function returns an integer less than, equal
    to, or greater than zero if \e s1 (or the first \e n bytes thereof) is found,
    respectively, to be less than, to match, or be greater than \e s2. The
    contents of RAMPZ SFR are undefined when the function returns. */
extern int strncmp_PF(const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn int strcasecmp_PF(const char *s1, uint_farptr_t s2)
    \brief Compare two strings ignoring case

    The strcasecmp_PF() function compares the two strings \e s1 and \e s2, ignoring
    the case of the characters.

    \param s1 A pointer to the first string in SRAM
    \param s2 A far pointer to the second string in Flash

    \returns The strcasecmp_PF() function returns an integer less than, equal
    to, or greater than zero if \e s1 is found, respectively, to be less than, to
    match, or be greater than \e s2. The contents of RAMPZ SFR are undefined
    when the function returns. */
extern int strcasecmp_PF(const char *s1, uint_farptr_t s2) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn int strncasecmp_PF(const char *s1, uint_farptr_t s2, size_t n)
    \brief Compare two strings ignoring case

    The strncasecmp_PF() function is similar to strcasecmp_PF(), except it
    only compares the first \e n characters of \e s1 and the string in flash is
    addressed using a far pointer.

    \param s1 A pointer to a string in SRAM
    \param s2 A far pointer to a string in Flash
    \param n The maximum number of bytes to compare

    \returns The strncasecmp_PF() function returns an integer less than, equal
    to, or greater than zero if \e s1 (or the first \e n bytes thereof) is found,
    respectively, to be less than, to match, or be greater than \e s2. The
    contents of RAMPZ SFR are undefined when the function returns.  */
extern int strncasecmp_PF(const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));

/** \ingroup avr_pgmspace
    \fn char *strstr_PF(const char *s1, uint_farptr_t s2)
    \brief Locate a substring.

    The strstr_PF() function finds the first occurrence of the substring \c s2
    in the string \c s1.  The terminating '\\0' characters are not
    compared.
    The strstr_PF() function is similar to strstr() except that \c s2 is a
    far pointer to a string in program space.

    \returns The strstr_PF() function returns a pointer to the beginning of the
    substring, or NULL if the substring is not found.
    If \c s2 points to a string of zero length, the function returns \c s1. The
    contents of RAMPZ SFR are undefined when the function returns. */
extern char *strstr_PF(const char *s1, uint_farptr_t s2);

/** \ingroup avr_pgmspace
    \fn size_t strlcpy_PF(char *dst, uint_farptr_t src, size_t siz)
    \brief Copy a string from progmem to RAM.

    Copy src to string dst of size siz.  At most siz-1 characters will be
    copied. Always NULL terminates (unless siz == 0).

    \returns The strlcpy_PF() function returns strlen(src). If retval >= siz,
    truncation occurred.  The contents of RAMPZ SFR are undefined when the
    function returns. */
extern size_t strlcpy_PF(char *dst, uint_farptr_t src, size_t siz);

/** \ingroup avr_pgmspace
    \fn int memcmp_PF(const void *s1, uint_farptr_t s2, size_t len)
    \brief Compare memory areas

    The memcmp_PF() function compares the first \p len bytes of the memory
    areas \p s1 and flash \p s2. The comparision is performed using unsigned
    char operations. It is an equivalent of memcmp_P() function, except
    that it is capable working on all FLASH including the exteded area
    above 64kB.

    \returns The memcmp_PF() function returns an integer less than, equal
    to, or greater than zero if the first \p len bytes of \p s1 is found,
    respectively, to be less than, to match, or be greater than the first
    \p len bytes of \p s2.  */
extern int memcmp_PF(const void *, uint_farptr_t, size_t) __attribute__((__pure__));
# 1779 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
extern size_t __strlen_P(const char *) __attribute__((__const__)); /* internal helper function */
__attribute__((__always_inline__)) static __inline__ size_t strlen_P(const char * s);
static __inline__ size_t strlen_P(const char *s) {
  return __builtin_constant_p(__builtin_strlen(s))
     ? __builtin_strlen(s) : __strlen_P(s);
}



}
# 29 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 30 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\interrupt.h" 2 3


/* Auxiliary macro for ISR_ALIAS(). */



/** 
\file 
\@{ 
*/


/** \name Global manipulation of the interrupt flag

    The global interrupt flag is maintained in the I bit of the status
    register (SREG).

    Handling interrupts frequently requires attention regarding atomic
    access to objects that could be altered by code running within an
    interrupt context, see <util/atomic.h>.

    Frequently, interrupts are being disabled for periods of time in
    order to perform certain operations without being disturbed; see
    \ref optim_code_reorder for things to be taken into account with
    respect to compiler optimizations.
*/
# 103 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\interrupt.h" 3
/** \name Macros for writing interrupt handler functions */
# 283 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\interrupt.h" 3
/** \name ISR attributes */
# 342 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\interrupt.h" 3
/* \@} */
# 31 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/binary.h" 1

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/binary.h"
/*
  binary.h - Definitions for binary constants
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 33 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2


extern "C"{


void yield(void);
# 87 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
// undefine stdlib's abs if encountered
# 117 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
// avr-libc defines _NOP() since 1.6.2




typedef unsigned int word;



typedef bool boolean;
typedef uint8_t byte;

void init(void);
void initVariant(void);

int atexit(void (*func)()) __attribute__((weak));

void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t val);
int digitalRead(uint8_t pin);
int analogRead(uint8_t pin);
void analogReference(uint8_t mode);
void analogWrite(uint8_t pin, int val);

unsigned long millis(void);
unsigned long micros(void);
void delay(unsigned long ms);
void delayMicroseconds(unsigned int us);
unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout);

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val);
uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder);

void attachInterrupt(uint8_t interruptNum, void (*userFunc)(void), int mode);
void detachInterrupt(uint8_t interruptNum);

void setup(void);
void loop(void);

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.



// On the ATmega1280, the addresses of some of the port registers are
// greater than 255, so we can't store them in uint8_t's.
extern const uint16_t 
# 164 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 3
                     __attribute__((__progmem__)) 
# 164 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
                             port_to_mode_PGM[];
extern const uint16_t 
# 165 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 3
                     __attribute__((__progmem__)) 
# 165 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
                             port_to_input_PGM[];
extern const uint16_t 
# 166 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 3
                     __attribute__((__progmem__)) 
# 166 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
                             port_to_output_PGM[];

extern const uint8_t 
# 168 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 3
                    __attribute__((__progmem__)) 
# 168 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
                            digital_pin_to_port_PGM[];
// extern const uint8_t PROGMEM digital_pin_to_bit_PGM[];
extern const uint8_t 
# 170 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 3
                    __attribute__((__progmem__)) 
# 170 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
                            digital_pin_to_bit_mask_PGM[];
extern const uint8_t 
# 171 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 3
                    __attribute__((__progmem__)) 
# 171 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
                            digital_pin_to_timer_PGM[];

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.
// 
// These perform slightly better as macros compared to inline functions
//
# 227 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h"
} // extern "C"



# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WCharacter.h" 1
/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\ctype.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\ctype.h" 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 48 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\ctype.h" 3
extern "C" {


/** \file */
/** \defgroup ctype <ctype.h>: Character Operations
    These functions perform various operations on characters.

    \code #include <ctype.h>\endcode 

*/

/** \name Character classification routines

    These functions perform character classification. They return true or
    false status depending whether the character passed to the function falls
    into the function's classification (i.e. isdigit() returns true if its
    argument is any value '0' though '9', inclusive). If the input is not
    an unsigned char value, all of this function return false.	*/

 /* @{ */

/** \ingroup ctype

    Checks for an alphanumeric character. It is equivalent to <tt>(isalpha(c)
    || isdigit(c))</tt>. */

extern int isalnum(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an alphabetic character. It is equivalent to <tt>(isupper(c) ||
    islower(c))</tt>. */

extern int isalpha(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks whether \c c is a 7-bit unsigned char value that fits into the
    ASCII character set. */

extern int isascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a blank character, that is, a space or a tab. */

extern int isblank(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a control character. */

extern int iscntrl(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a digit (0 through 9). */

extern int isdigit(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character except space. */

extern int isgraph(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a lower-case character. */

extern int islower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character including space. */

extern int isprint(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character which is not a space or an alphanumeric
    character. */

extern int ispunct(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for white-space characters.  For the avr-libc library, these are:
    space, form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'),
    horizontal tab ('\\t'), and vertical tab ('\\v'). */

extern int isspace(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an uppercase letter. */

extern int isupper(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 8 9 a b c d e
    f A B C D E F. */

extern int isxdigit(int __c) __attribute__((__const__));

/* @} */

/** \name Character convertion routines 

    This realization permits all possible values of integer argument.
    The toascii() function clears all highest bits. The tolower() and
    toupper() functions return an input argument as is, if it is not an
    unsigned char value.	*/

/* @{ */

/** \ingroup ctype

    Converts \c c to a 7-bit unsigned char value that fits into the ASCII
    character set, by clearing the high-order bits.

    \warning Many people will be unhappy if you use this function. This
    function will convert accented letters into random characters. */

extern int toascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to lower case, if possible. */

extern int tolower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to upper case, if possible. */

extern int toupper(int __c) __attribute__((__const__));

/* @} */


}
# 24 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WCharacter.h" 2


# 25 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WCharacter.h"
// WCharacter.h prototypes
inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));


// Checks for an alphanumeric character. 
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( isalnum(c) == 0 ? false : true);
}


// Checks for an alphabetic character. 
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? false : true);
}


// Checks whether c is a 7-bit unsigned char value 
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
  return ( isascii (c) == 0 ? false : true);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? false : true);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? false : true);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? false : true);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? false : true);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? false : true);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? false : true);
}


// Checks for any printable character which is not a space 
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? false : true);
}


// Checks for white-space characters. For the avr-libc library, 
// these are: space, formfeed ('\f'), newline ('\n'), carriage 
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? false : true);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? false : true);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? false : true);
}


// Converts c to a 7-bit unsigned char value that fits into the 
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
  return toascii (c);
}


// Warning:
// Many people will be unhappy if you use this function. 
// This function will convert accented letters into random 
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}
# 232 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */
# 28 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 29 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 30 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h" 2


# 31 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h"
// When compiling programs with this class, the following gcc parameters
// dramatically increase performance and memory (RAM) efficiency, typically
// with little or no increase in code size.
//     -felide-constructors
//     -std=c++0x

class __FlashStringHelper;


// An inherited class for holding the result of a concatenation.  These
// result objects are assumed to be writable by subsequent concatenations.
class StringSumHelper;

// The string class
class String
{
 // use a function pointer to allow for "if (s)" without the
 // complications of an operator bool(). for more information, see:
 // http://www.artima.com/cppsource/safebool.html
 typedef void (String::*StringIfHelperType)() const;
 void StringIfHelper() const {}

public:
 // constructors
 // creates a copy of the initial value.
 // if the initial value is null or invalid, or if memory allocation
 // fails, the string will be marked as invalid (i.e. "if (s)" will
 // be false).
 String(const char *cstr = "");
 String(const String &str);
 String(const __FlashStringHelper *str);

 String(String &&rval);
 String(StringSumHelper &&rval);

 explicit String(char c);
 explicit String(unsigned char, unsigned char base=10);
 explicit String(int, unsigned char base=10);
 explicit String(unsigned int, unsigned char base=10);
 explicit String(long, unsigned char base=10);
 explicit String(unsigned long, unsigned char base=10);
 explicit String(float, unsigned char decimalPlaces=2);
 explicit String(double, unsigned char decimalPlaces=2);
 ~String(void);

 // memory management
 // return true on success, false on failure (in which case, the string
 // is left unchanged).  reserve(0), if successful, will validate an
 // invalid string (i.e., "if (s)" will be true afterwards)
 unsigned char reserve(unsigned int size);
 inline unsigned int length(void) const {return len;}

 // creates a copy of the assigned value.  if the value is null or
 // invalid, or if the memory allocation fails, the string will be
 // marked as invalid ("if (s)" will be false).
 String & operator = (const String &rhs);
 String & operator = (const char *cstr);
 String & operator = (const __FlashStringHelper *str);

 String & operator = (String &&rval);
 String & operator = (StringSumHelper &&rval);


 // concatenate (works w/ built-in types)

 // returns true on success, false on failure (in which case, the string
 // is left unchanged).  if the argument is null or invalid, the
 // concatenation is considered unsuccessful.
 unsigned char concat(const String &str);
 unsigned char concat(const char *cstr);
 unsigned char concat(char c);
 unsigned char concat(unsigned char c);
 unsigned char concat(int num);
 unsigned char concat(unsigned int num);
 unsigned char concat(long num);
 unsigned char concat(unsigned long num);
 unsigned char concat(float num);
 unsigned char concat(double num);
 unsigned char concat(const __FlashStringHelper * str);

 // if there's not enough memory for the concatenated value, the string
 // will be left unchanged (but this isn't signalled in any way)
 String & operator += (const String &rhs) {concat(rhs); return (*this);}
 String & operator += (const char *cstr) {concat(cstr); return (*this);}
 String & operator += (char c) {concat(c); return (*this);}
 String & operator += (unsigned char num) {concat(num); return (*this);}
 String & operator += (int num) {concat(num); return (*this);}
 String & operator += (unsigned int num) {concat(num); return (*this);}
 String & operator += (long num) {concat(num); return (*this);}
 String & operator += (unsigned long num) {concat(num); return (*this);}
 String & operator += (float num) {concat(num); return (*this);}
 String & operator += (double num) {concat(num); return (*this);}
 String & operator += (const __FlashStringHelper *str){concat(str); return (*this);}

 friend StringSumHelper & operator + (const StringSumHelper &lhs, const String &rhs);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const char *cstr);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, char c);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned char num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, float num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, double num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const __FlashStringHelper *rhs);

 // comparison (only works w/ Strings and "strings")
 operator StringIfHelperType() const { return buffer ? &String::StringIfHelper : 0; }
 int compareTo(const String &s) const;
 unsigned char equals(const String &s) const;
 unsigned char equals(const char *cstr) const;
 unsigned char operator == (const String &rhs) const {return equals(rhs);}
 unsigned char operator == (const char *cstr) const {return equals(cstr);}
 unsigned char operator != (const String &rhs) const {return !equals(rhs);}
 unsigned char operator != (const char *cstr) const {return !equals(cstr);}
 unsigned char operator < (const String &rhs) const;
 unsigned char operator > (const String &rhs) const;
 unsigned char operator <= (const String &rhs) const;
 unsigned char operator >= (const String &rhs) const;
 unsigned char equalsIgnoreCase(const String &s) const;
 unsigned char startsWith( const String &prefix) const;
 unsigned char startsWith(const String &prefix, unsigned int offset) const;
 unsigned char endsWith(const String &suffix) const;

 // character access
 char charAt(unsigned int index) const;
 void setCharAt(unsigned int index, char c);
 char operator [] (unsigned int index) const;
 char& operator [] (unsigned int index);
 void getBytes(unsigned char *buf, unsigned int bufsize, unsigned int index=0) const;
 void toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const
  { getBytes((unsigned char *)buf, bufsize, index); }
 const char* c_str() const { return buffer; }
 char* begin() { return buffer; }
 char* end() { return buffer + length(); }
 const char* begin() const { return c_str(); }
 const char* end() const { return c_str() + length(); }

 // search
 int indexOf( char ch ) const;
 int indexOf( char ch, unsigned int fromIndex ) const;
 int indexOf( const String &str ) const;
 int indexOf( const String &str, unsigned int fromIndex ) const;
 int lastIndexOf( char ch ) const;
 int lastIndexOf( char ch, unsigned int fromIndex ) const;
 int lastIndexOf( const String &str ) const;
 int lastIndexOf( const String &str, unsigned int fromIndex ) const;
 String substring( unsigned int beginIndex ) const { return substring(beginIndex, len); };
 String substring( unsigned int beginIndex, unsigned int endIndex ) const;

 // modification
 void replace(char find, char replace);
 void replace(const String& find, const String& replace);
 void remove(unsigned int index);
 void remove(unsigned int index, unsigned int count);
 void toLowerCase(void);
 void toUpperCase(void);
 void trim(void);

 // parsing/conversion
 long toInt(void) const;
 float toFloat(void) const;
 double toDouble(void) const;

protected:
 char *buffer; // the actual char array
 unsigned int capacity; // the array length minus one (for the '\0')
 unsigned int len; // the String length (not counting the '\0')
protected:
 void init(void);
 void invalidate(void);
 unsigned char changeBuffer(unsigned int maxStrLen);
 unsigned char concat(const char *cstr, unsigned int length);

 // copy and move
 String & copy(const char *cstr, unsigned int length);
 String & copy(const __FlashStringHelper *pstr, unsigned int length);

 void move(String &rhs);

};

class StringSumHelper : public String
{
public:
 StringSumHelper(const String &s) : String(s) {}
 StringSumHelper(const char *p) : String(p) {}
 StringSumHelper(char c) : String(c) {}
 StringSumHelper(unsigned char num) : String(num) {}
 StringSumHelper(int num) : String(num) {}
 StringSumHelper(unsigned int num) : String(num) {}
 StringSumHelper(long num) : String(num) {}
 StringSumHelper(unsigned long num) : String(num) {}
 StringSumHelper(float num) : String(num) {}
 StringSumHelper(double num) : String(num) {}
};
# 233 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/HardwareSerial.h" 1
/*
  HardwareSerial.h - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
  Modified 3 December 2013 by Matthijs Kooijman
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 28 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/HardwareSerial.h" 2

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Stream.h" 1

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Stream.h"
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 26 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Stream.h" 2
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h" 1

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h"
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 24 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 1 3
/* Copyright (c) 2002, 2005, 2007 Joerg Wunsch
   All rights reserved.

   Portions of documentation Copyright (c) 1990, 1991, 1993
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/






# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 45 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 2 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdarg.h" 1 3 4
/* Copyright (C) 1989-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 56 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 86 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 46 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 2 3




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 51 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 2 3


/** \file */
/** \defgroup avr_stdio <stdio.h>: Standard IO facilities
    \code #include <stdio.h> \endcode

    <h3>Introduction to the Standard IO facilities</h3>

    This file declares the standard IO facilities that are implemented
    in \c avr-libc.  Due to the nature of the underlying hardware,
    only a limited subset of standard IO is implemented.  There is no
    actual file implementation available, so only device IO can be
    performed.  Since there's no operating system, the application
    needs to provide enough details about their devices in order to
    make them usable by the standard IO facilities.

    Due to space constraints, some functionality has not been
    implemented at all (like some of the \c printf conversions that
    have been left out).  Nevertheless, potential users of this
    implementation should be warned: the \c printf and \c scanf families of functions, although
    usually associated with presumably simple things like the
    famous "Hello, world!" program, are actually fairly complex
    which causes their inclusion to eat up a fair amount of code space.
    Also, they are not fast due to the nature of interpreting the
    format string at run-time.  Whenever possible, resorting to the
    (sometimes non-standard) predetermined conversion facilities that are
    offered by avr-libc will usually cost much less in terms of speed
    and code size.

    <h3>Tunable options for code size vs. feature set</h3>

    In order to allow programmers a code size vs. functionality tradeoff,
    the function vfprintf() which is the heart of the printf family can be
    selected in different flavours using linker options.  See the
    documentation of vfprintf() for a detailed description.  The same
    applies to vfscanf() and the \c scanf family of functions.

    <h3>Outline of the chosen API</h3>

    The standard streams \c stdin, \c stdout, and \c stderr are
    provided, but contrary to the C standard, since avr-libc has no
    knowledge about applicable devices, these streams are not already
    pre-initialized at application startup.  Also, since there is no
    notion of "file" whatsoever to avr-libc, there is no function
    \c fopen() that could be used to associate a stream to some device.
    (See \ref stdio_note1 "note 1".)  Instead, the function \c fdevopen()
    is provided to associate a stream to a device, where the device
    needs to provide a function to send a character, to receive a
    character, or both.  There is no differentiation between "text" and
    "binary" streams inside avr-libc.  Character \c \\n is sent
    literally down to the device's \c put() function.  If the device
    requires a carriage return (\c \\r) character to be sent before
    the linefeed, its \c put() routine must implement this (see
    \ref stdio_note2 "note 2").

    As an alternative method to fdevopen(), the macro
    fdev_setup_stream() might be used to setup a user-supplied FILE
    structure.

    It should be noted that the automatic conversion of a newline
    character into a carriage return - newline sequence breaks binary
    transfers.  If binary transfers are desired, no automatic
    conversion should be performed, but instead any string that aims
    to issue a CR-LF sequence must use <tt>"\r\n"</tt> explicitly.

    For convenience, the first call to \c fdevopen() that opens a
    stream for reading will cause the resulting stream to be aliased
    to \c stdin.  Likewise, the first call to \c fdevopen() that opens
    a stream for writing will cause the resulting stream to be aliased
    to both, \c stdout, and \c stderr.  Thus, if the open was done
    with both, read and write intent, all three standard streams will
    be identical.  Note that these aliases are indistinguishable from
    each other, thus calling \c fclose() on such a stream will also
    effectively close all of its aliases (\ref stdio_note3 "note 3").

    It is possible to tie additional user data to a stream, using
    fdev_set_udata().  The backend put and get functions can then
    extract this user data using fdev_get_udata(), and act
    appropriately.  For example, a single put function could be used
    to talk to two different UARTs that way, or the put and get
    functions could keep internal state between calls there.

    <h3>Format strings in flash ROM</h3>

    All the \c printf and \c scanf family functions come in two flavours: the
    standard name, where the format string is expected to be in
    SRAM, as well as a version with the suffix "_P" where the format
    string is expected to reside in the flash ROM.  The macro
    \c PSTR (explained in \ref avr_pgmspace) becomes very handy
    for declaring these format strings.

    \anchor stdio_without_malloc
    <h3>Running stdio without malloc()</h3>

    By default, fdevopen() requires malloc().  As this is often
    not desired in the limited environment of a microcontroller, an
    alternative option is provided to run completely without malloc().

    The macro fdev_setup_stream() is provided to prepare a
    user-supplied FILE buffer for operation with stdio.

    <h4>Example</h4>

    \code
    #include <stdio.h>

    static int uart_putchar(char c, FILE *stream);

    static FILE mystdout = FDEV_SETUP_STREAM(uart_putchar, NULL,
                                             _FDEV_SETUP_WRITE);

    static int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r', stream);
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }

    int
    main(void)
    {
      init_uart();
      stdout = &mystdout;
      printf("Hello, world!\n");

      return 0;
    }
    \endcode

    This example uses the initializer form FDEV_SETUP_STREAM() rather
    than the function-like fdev_setup_stream(), so all data
    initialization happens during C start-up.

    If streams initialized that way are no longer needed, they can be
    destroyed by first calling the macro fdev_close(), and then
    destroying the object itself.  No call to fclose() should be
    issued for these streams.  While calling fclose() itself is
    harmless, it will cause an undefined reference to free() and thus
    cause the linker to link the malloc module into the application.

    <h3>Notes</h3>

    \anchor stdio_note1 \par Note 1:
    It might have been possible to implement a device abstraction that
    is compatible with \c fopen() but since this would have required
    to parse a string, and to take all the information needed either
    out of this string, or out of an additional table that would need to be
    provided by the application, this approach was not taken.

    \anchor stdio_note2 \par Note 2:
    This basically follows the Unix approach: if a device such as a
    terminal needs special handling, it is in the domain of the
    terminal device driver to provide this functionality.  Thus, a
    simple function suitable as \c put() for \c fdevopen() that talks
    to a UART interface might look like this:

    \code
    int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r');
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }
    \endcode

    \anchor stdio_note3 \par Note 3:
    This implementation has been chosen because the cost of maintaining
    an alias is considerably smaller than the cost of maintaining full
    copies of each stream.  Yet, providing an implementation that offers
    the complete set of standard streams was deemed to be useful.  Not
    only that writing \c printf() instead of <tt>fprintf(mystream, ...)</tt>
    saves typing work, but since avr-gcc needs to resort to pass all
    arguments of variadic functions on the stack (as opposed to passing
    them in registers for functions that take a fixed number of
    parameters), the ability to pass one parameter less by implying
    \c stdin or stdout will also save some execution time.
*/



/*
 * This is an internal structure of the library that is subject to be
 * changed without warnings at any time.  Please do *never* reference
 * elements of it beyond by using the official interfaces provided.
 */
struct __file {
 char *buf; /* buffer pointer */
 unsigned char unget; /* ungetc() buffer */
 uint8_t flags; /* flags, see below */
# 263 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 3
 int size; /* size of buffer */
 int len; /* characters read or written so far */
 int (*put)(char, struct __file *); /* function to write one char to device */
 int (*get)(struct __file *); /* function to read one char from device */
 void *udata; /* User defined and accessible data. */
};



/*@{*/
/**
   \c FILE is the opaque structure that is passed around between the
   various standard IO functions.
*/
typedef struct __file FILE;

/**
   Stream that will be used as an input stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with read intent using \c fdevopen()
   will be assigned to \c stdin.
*/


/**
   Stream that will be used as an output stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with write intent using \c fdevopen()
   will be assigned to both, \c stdin, and \c stderr.
*/


/**
   Stream destined for error output.  Unless specifically assigned,
   identical to \c stdout.

   If \c stderr should point to another stream, the result of
   another \c fdevopen() must be explicitly assigned to it without
   closing the previous \c stderr (since this would also close
   \c stdout).
*/


/**
   \c EOF declares the value that is returned by various standard IO
   functions in case of an error.  Since the AVR platform (currently)
   doesn't contain an abstraction for actual files, its origin as
   "end of file" is somewhat meaningless here.
*/


/** This macro inserts a pointer to user defined data into a FILE
    stream object.

    The user data can be useful for tracking state in the put and get
    functions supplied to the fdevopen() function. */


/** This macro retrieves a pointer to user defined data from a FILE
    stream object. */
# 363 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 3
/**
 * Return code for an error condition during device read.
 *
 * To be used in the get function of fdevopen().
 */


/**
 * Return code for an end-of-file condition during device read.
 *
 * To be used in the get function of fdevopen().
 */
# 399 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 3
extern "C" {



/*
 * Doxygen documentation can be found in fdevopen.c.
 */

extern struct __file *__iob[];
# 418 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 3
/* New prototype for avr-libc 1.4 and above. */
extern FILE *fdevopen(int (*__put)(char, FILE*), int (*__get)(FILE*));




/**
   This function closes \c stream, and disallows and further
   IO to and from it.

   When using fdevopen() to setup the stream, a call to fclose() is
   needed in order to free the internal resources allocated.

   If the stream has been set up using fdev_setup_stream() or
   FDEV_SETUP_STREAM(), use fdev_close() instead.

   It currently always returns 0 (for success).
*/
extern int fclose(FILE *__stream);

/**
   This macro frees up any library resources that might be associated
   with \c stream.  It should be called if \c stream is no longer
   needed, right before the application is going to destroy the
   \c stream object itself.

   (Currently, this macro evaluates to nothing, but this might change
   in future versions of the library.)
*/






/**
   \c vfprintf is the central facility of the \c printf family of
   functions.  It outputs values to \c stream under control of a
   format string passed in \c fmt.  The actual values to print are
   passed as a variable argument list \c ap.

   \c vfprintf returns the number of characters written to \c stream,
   or \c EOF in case of an error.  Currently, this will only happen
   if \c stream has not been opened with write intent.

   The format string is composed of zero or more directives: ordinary
   characters (not \c %), which are copied unchanged to the output
   stream; and conversion specifications, each of which results in
   fetching zero or more subsequent arguments.  Each conversion
   specification is introduced by the \c % character.  The arguments must
   properly correspond (after type promotion) with the conversion
   specifier.  After the \c %, the following appear in sequence:

   - Zero or more of the following flags:
      <ul>
      <li> \c # The value should be converted to an "alternate form".  For
            c, d, i, s, and u conversions, this option has no effect.
            For o conversions, the precision of the number is
            increased to force the first character of the output
            string to a zero (except if a zero value is printed with
            an explicit precision of zero).  For x and X conversions,
            a non-zero result has the string `0x' (or `0X' for X
            conversions) prepended to it.</li>
      <li> \c 0 (zero) Zero padding.  For all conversions, the converted
            value is padded on the left with zeros rather than blanks.
            If a precision is given with a numeric conversion (d, i,
            o, u, i, x, and X), the 0 flag is ignored.</li>
      <li> \c - A negative field width flag; the converted value is to be
            left adjusted on the field boundary.  The converted value
            is padded on the right with blanks, rather than on the
            left with blanks or zeros.  A - overrides a 0 if both are
            given.</li>
      <li> ' ' (space) A blank should be left before a positive number
            produced by a signed conversion (d, or i).</li>
      <li> \c + A sign must always be placed before a number produced by a
            signed conversion.  A + overrides a space if both are
            used.</li>
      </ul>
      
   -   An optional decimal digit string specifying a minimum field width.
       If the converted value has fewer characters than the field width, it
       will be padded with spaces on the left (or right, if the left-adjustment
       flag has been given) to fill out the field width.
   -   An optional precision, in the form of a period . followed by an
       optional digit string.  If the digit string is omitted, the
       precision is taken as zero.  This gives the minimum number of
       digits to appear for d, i, o, u, x, and X conversions, or the
       maximum number of characters to be printed from a string for \c s
       conversions.
   -   An optional \c l or \c h length modifier, that specifies that the
       argument for the d, i, o, u, x, or X conversion is a \c "long int"
       rather than \c int. The \c h is ignored, as \c "short int" is
       equivalent to \c int.
   -   A character that specifies the type of conversion to be applied.

   The conversion specifiers and their meanings are:

   - \c diouxX The int (or appropriate variant) argument is converted
           to signed decimal (d and i), unsigned octal (o), unsigned
           decimal (u), or unsigned hexadecimal (x and X) notation.
           The letters "abcdef" are used for x conversions; the
           letters "ABCDEF" are used for X conversions.  The
           precision, if any, gives the minimum number of digits that
           must appear; if the converted value requires fewer digits,
           it is padded on the left with zeros.
   - \c p  The <tt>void *</tt> argument is taken as an unsigned integer,
           and converted similarly as a <tt>%\#x</tt> command would do.
   - \c c  The \c int argument is converted to an \c "unsigned char", and the
           resulting character is written.
   - \c s  The \c "char *" argument is expected to be a pointer to an array
           of character type (pointer to a string).  Characters from
           the array are written up to (but not including) a
           terminating NUL character; if a precision is specified, no
           more than the number specified are written.  If a precision
           is given, no null character need be present; if the
           precision is not specified, or is greater than the size of
           the array, the array must contain a terminating NUL
           character.
   - \c %  A \c % is written.  No argument is converted.  The complete
           conversion specification is "%%".
   - \c eE The double argument is rounded and converted in the format
           \c "[-]d.ddde±dd" where there is one digit before the
           decimal-point character and the number of digits after it
           is equal to the precision; if the precision is missing, it
           is taken as 6; if the precision is zero, no decimal-point
           character appears.  An \e E conversion uses the letter \c 'E'
           (rather than \c 'e') to introduce the exponent.  The exponent
           always contains two digits; if the value is zero,
           the exponent is 00.
   - \c fF The double argument is rounded and converted to decimal notation
           in the format \c "[-]ddd.ddd", where the number of digits after the
           decimal-point character is equal to the precision specification.
           If the precision is missing, it is taken as 6; if the precision
           is explicitly zero, no decimal-point character appears.  If a
           decimal point appears, at least one digit appears before it.
   - \c gG The double argument is converted in style \c f or \c e (or
           \c F or \c E for \c G conversions).  The precision
           specifies the number of significant digits.  If the
           precision is missing, 6 digits are given; if the precision
           is zero, it is treated as 1.  Style \c e is used if the
           exponent from its conversion is less than -4 or greater
           than or equal to the precision.  Trailing zeros are removed
           from the fractional part of the result; a decimal point
           appears only if it is followed by at least one digit.
   - \c S  Similar to the \c s format, except the pointer is expected to
           point to a program-memory (ROM) string instead of a RAM string.

   In no case does a non-existent or small field width cause truncation of a
   numeric field; if the result of a conversion is wider than the field
   width, the field is expanded to contain the conversion result.

   Since the full implementation of all the mentioned features becomes
   fairly large, three different flavours of vfprintf() can be
   selected using linker options.  The default vfprintf() implements
   all the mentioned functionality except floating point conversions.
   A minimized version of vfprintf() is available that only implements
   the very basic integer and string conversion facilities, but only
   the \c # additional option can be specified using conversion
   flags (these flags are parsed correctly from the format
   specification, but then simply ignored).  This version can be
   requested using the following \ref gcc_minusW "compiler options":

   \code
   -Wl,-u,vfprintf -lprintf_min
   \endcode

   If the full functionality including the floating point conversions
   is required, the following options should be used:

   \code
   -Wl,-u,vfprintf -lprintf_flt -lm
   \endcode

   \par Limitations:
   - The specified width and precision can be at most 255.

   \par Notes:
   - For floating-point conversions, if you link default or minimized
     version of vfprintf(), the symbol \c ? will be output and double
     argument will be skiped. So you output below will not be crashed.
     For default version the width field and the "pad to left" ( symbol
     minus ) option will work in this case.
   - The \c hh length modifier is ignored (\c char argument is
     promouted to \c int). More exactly, this realization does not check
     the number of \c h symbols.
   - But the \c ll length modifier will to abort the output, as this
     realization does not operate \c long \c long arguments.
   - The variable width or precision field (an asterisk \c * symbol)
     is not realized and will to abort the output.

 */

extern int vfprintf(FILE *__stream, const char *__fmt, va_list __ap);

/**
   Variant of \c vfprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vfprintf_P(FILE *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fputc sends the character \c c (though given as type
   \c int) to \c stream.  It returns the character, or \c EOF in case
   an error occurred.
*/
extern int fputc(int __c, FILE *__stream);



/* putc() function implementation, required by standard */
extern int putc(int __c, FILE *__stream);

/* putchar() function implementation, required by standard */
extern int putchar(int __c);



/**
   The macro \c putc used to be a "fast" macro implementation with a
   functionality identical to fputc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fputc.
*/


/**
   The macro \c putchar sends character \c c to \c stdout.
*/


/**
   The function \c printf performs formatted output to stream
   \c stdout.  See \c vfprintf() for details.
*/
extern int printf(const char *__fmt, ...);

/**
   Variant of \c printf() that uses a \c fmt string that resides
   in program memory.
*/
extern int printf_P(const char *__fmt, ...);

/**
   The function \c vprintf performs formatted output to stream
   \c stdout, taking a variable argument list as in vfprintf().

   See vfprintf() for details.
*/
extern int vprintf(const char *__fmt, va_list __ap);

/**
   Variant of \c printf() that sends the formatted characters
   to string \c s.
*/
extern int sprintf(char *__s, const char *__fmt, ...);

/**
   Variant of \c sprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int sprintf_P(char *__s, const char *__fmt, ...);

/**
   Like \c sprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int snprintf(char *__s, size_t __n, const char *__fmt, ...);

/**
   Variant of \c snprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int snprintf_P(char *__s, size_t __n, const char *__fmt, ...);

/**
   Like \c sprintf() but takes a variable argument list for the
   arguments.
*/
extern int vsprintf(char *__s, const char *__fmt, va_list ap);

/**
   Variant of \c vsprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsprintf_P(char *__s, const char *__fmt, va_list ap);

/**
   Like \c vsprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int vsnprintf(char *__s, size_t __n, const char *__fmt, va_list ap);

/**
   Variant of \c vsnprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsnprintf_P(char *__s, size_t __n, const char *__fmt, va_list ap);
/**
   The function \c fprintf performs formatted output to \c stream.
   See \c vfprintf() for details.
*/
extern int fprintf(FILE *__stream, const char *__fmt, ...);

/**
   Variant of \c fprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int fprintf_P(FILE *__stream, const char *__fmt, ...);

/**
   Write the string pointed to by \c str to stream \c stream.

   Returns 0 on success and EOF on error.
*/
extern int fputs(const char *__str, FILE *__stream);

/**
   Variant of fputs() where \c str resides in program memory.
*/
extern int fputs_P(const char *__str, FILE *__stream);

/**
   Write the string pointed to by \c str, and a trailing newline
   character, to \c stdout.
*/
extern int puts(const char *__str);

/**
   Variant of puts() where \c str resides in program memory.
*/
extern int puts_P(const char *__str);

/**
   Write \c nmemb objects, \c size bytes each, to \c stream.
   The first byte of the first object is referenced by \c ptr.

   Returns the number of objects successfully written, i. e.
   \c nmemb unless an output error occured.
 */
extern size_t fwrite(const void *__ptr, size_t __size, size_t __nmemb,
         FILE *__stream);

/**
   The function \c fgetc reads a character from \c stream.  It returns
   the character, or \c EOF in case end-of-file was encountered or an
   error occurred.  The routines feof() or ferror() must be used to
   distinguish between both situations.
*/
extern int fgetc(FILE *__stream);



/* getc() function implementation, required by standard */
extern int getc(FILE *__stream);

/* getchar() function implementation, required by standard */
extern int getchar(void);



/**
   The macro \c getc used to be a "fast" macro implementation with a
   functionality identical to fgetc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fgetc.
*/


/**
   The macro \c getchar reads a character from \c stdin.  Return
   values and error handling is identical to fgetc().
*/


/**
   The ungetc() function pushes the character \c c (converted to an
   unsigned char) back onto the input stream pointed to by \c stream.
   The pushed-back character will be returned by a subsequent read on
   the stream.

   Currently, only a single character can be pushed back onto the
   stream.
   
   The ungetc() function returns the character pushed back after the
   conversion, or \c EOF if the operation fails.  If the value of the
   argument \c c character equals \c EOF, the operation will fail and
   the stream will remain unchanged.
*/
extern int ungetc(int __c, FILE *__stream);

/**
   Read at most <tt>size - 1</tt> bytes from \c stream, until a
   newline character was encountered, and store the characters in the
   buffer pointed to by \c str.  Unless an error was encountered while
   reading, the string will then be terminated with a \c NUL
   character.

   If an error was encountered, the function returns NULL and sets the
   error flag of \c stream, which can be tested using ferror().
   Otherwise, a pointer to the string will be returned.  */
extern char *fgets(char *__str, int __size, FILE *__stream);

/**
   Similar to fgets() except that it will operate on stream \c stdin,
   and the trailing newline (if any) will not be stored in the string.
   It is the caller's responsibility to provide enough storage to hold
   the characters read.  */
extern char *gets(char *__str);

/**
   Read \c nmemb objects, \c size bytes each, from \c stream,
   to the buffer pointed to by \c ptr.

   Returns the number of objects successfully read, i. e.
   \c nmemb unless an input error occured or end-of-file was
   encountered.  feof() and ferror() must be used to distinguish
   between these two conditions.
 */
extern size_t fread(void *__ptr, size_t __size, size_t __nmemb,
        FILE *__stream);

/**
   Clear the error and end-of-file flags of \c stream.
 */
extern void clearerr(FILE *__stream);


/* fast inlined version of clearerr() */



/**
   Test the end-of-file flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int feof(FILE *__stream);


/* fast inlined version of feof() */



/**
   Test the error flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int ferror(FILE *__stream);


/* fast inlined version of ferror() */



extern int vfscanf(FILE *__stream, const char *__fmt, va_list __ap);

/**
   Variant of vfscanf() using a \c fmt string in program memory.
 */
extern int vfscanf_P(FILE *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fscanf performs formatted input, reading the
   input data from \c stream.

   See vfscanf() for details.
 */
extern int fscanf(FILE *__stream, const char *__fmt, ...);

/**
   Variant of fscanf() using a \c fmt string in program memory.
 */
extern int fscanf_P(FILE *__stream, const char *__fmt, ...);

/**
   The function \c scanf performs formatted input from stream \c stdin.

   See vfscanf() for details.
 */
extern int scanf(const char *__fmt, ...);

/**
   Variant of scanf() where \c fmt resides in program memory.
 */
extern int scanf_P(const char *__fmt, ...);

/**
   The function \c vscanf performs formatted input from stream
   \c stdin, taking a variable argument list as in vfscanf().

   See vfscanf() for details.
*/
extern int vscanf(const char *__fmt, va_list __ap);

/**
   The function \c sscanf performs formatted input, reading the
   input data from the buffer pointed to by \c buf.

   See vfscanf() for details.
 */
extern int sscanf(const char *__buf, const char *__fmt, ...);

/**
   Variant of sscanf() using a \c fmt string in program memory.
 */
extern int sscanf_P(const char *__buf, const char *__fmt, ...);
# 940 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdio.h" 3
static __inline__ int fflush(FILE *stream __attribute__((unused)))
{
 return 0;
}



/* only mentioned for libstdc++ support, not implemented in library */


__extension__ typedef long long fpos_t;
extern int fgetpos(FILE *stream, fpos_t *pos);
extern FILE *fopen(const char *path, const char *mode);
extern FILE *freopen(const char *path, const char *mode, FILE *stream);
extern FILE *fdopen(int, const char *);
extern int fseek(FILE *stream, long offset, int whence);
extern int fsetpos(FILE *stream, fpos_t *pos);
extern long ftell(FILE *stream);
extern int fileno(FILE *);
extern void perror(const char *s);
extern int remove(const char *pathname);
extern int rename(const char *oldpath, const char *newpath);
extern void rewind(FILE *stream);
extern void setbuf(FILE *stream, char *buf);
extern int setvbuf(FILE *stream, char *buf, int mode, size_t size);
extern FILE *tmpfile(void);
extern char *tmpnam (char *s);



}


/*@}*/


/*
 * The following constants are currently not used by avr-libc's
 * stdio subsystem.  They are defined here since the gcc build
 * environment expects them to be here.
 */
# 25 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h" 2

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h" 1

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/WString.h"
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h" 2
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Printable.h" 1
/*
  Printable.h - Interface class that allows printing of complex types
  Copyright (c) 2011 Adrian McEwen.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\stdlib.h" 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 24 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Printable.h" 2


# 25 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Printable.h"
class Print;

/** The Printable class provides a way for new classes to allow themselves to be printed.
    By deriving from Printable and implementing the printTo method, it will then be possible
    for users to print out instances of this class by passing them into the usual
    Print::print and Print::println methods.
*/

class Printable
{
  public:
    virtual size_t printTo(Print& p) const = 0;
};
# 28 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h" 2
# 37 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h"
class Print
{
  private:
    int write_error;
    size_t printNumber(unsigned long, uint8_t);
    size_t printFloat(double, uint8_t);
  protected:
    void setWriteError(int err = 1) { write_error = err; }
  public:
    Print() : write_error(0) {}

    int getWriteError() { return write_error; }
    void clearWriteError() { setWriteError(0); }

    virtual size_t write(uint8_t) = 0;
    size_t write(const char *str) {
      if (str == 
# 53 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h" 3 4
                __null
# 53 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Print.h"
                    ) return 0;
      return write((const uint8_t *)str, strlen(str));
    }
    virtual size_t write(const uint8_t *buffer, size_t size);
    size_t write(const char *buffer, size_t size) {
      return write((const uint8_t *)buffer, size);
    }

    // default to zero, meaning "a single write may block"
    // should be overridden by subclasses with buffering
    virtual int availableForWrite() { return 0; }

    size_t print(const __FlashStringHelper *);
    size_t print(const String &);
    size_t print(const char[]);
    size_t print(char);
    size_t print(unsigned char, int = 10);
    size_t print(int, int = 10);
    size_t print(unsigned int, int = 10);
    size_t print(long, int = 10);
    size_t print(unsigned long, int = 10);
    size_t print(double, int = 2);
    size_t print(const Printable&);

    size_t println(const __FlashStringHelper *);
    size_t println(const String &s);
    size_t println(const char[]);
    size_t println(char);
    size_t println(unsigned char, int = 10);
    size_t println(int, int = 10);
    size_t println(unsigned int, int = 10);
    size_t println(long, int = 10);
    size_t println(unsigned long, int = 10);
    size_t println(double, int = 2);
    size_t println(const Printable&);
    size_t println(void);

    virtual void flush() { /* Empty implementation for backward compatibility */ }
};
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Stream.h" 2

// compatibility macros for testing
/*
#define   getInt()            parseInt()
#define   getInt(ignore)    parseInt(ignore)
#define   getFloat()          parseFloat()
#define   getFloat(ignore)  parseFloat(ignore)
#define   getString( pre_string, post_string, buffer, length)
readBytesBetween( pre_string, terminator, buffer, length)
*/

// This enumeration provides the lookahead options for parseInt(), parseFloat()
// The rules set out here are used until either the first valid character is found
// or a time out occurs due to lack of input.
enum LookaheadMode{
    SKIP_ALL, // All invalid characters are ignored.
    SKIP_NONE, // Nothing is skipped, and the stream is not touched unless the first waiting character is valid.
    SKIP_WHITESPACE // Only tabs, spaces, line feeds & carriage returns are skipped.
};



class Stream : public Print
{
  protected:
    unsigned long _timeout; // number of milliseconds to wait for the next char before aborting timed read
    unsigned long _startMillis; // used for timeout measurement
    int timedRead(); // read stream with timeout
    int timedPeek(); // peek stream with timeout
    int peekNextDigit(LookaheadMode lookahead, bool detectDecimal); // returns the next numeric digit in the stream or -1 if timeout

  public:
    virtual int available() = 0;
    virtual int read() = 0;
    virtual int peek() = 0;

    Stream() {_timeout=1000;}

// parsing methods

  void setTimeout(unsigned long timeout); // sets maximum milliseconds to wait for stream data, default is 1 second
  unsigned long getTimeout(void) { return _timeout; }

  bool find(char *target); // reads data from the stream until the target string is found
  bool find(uint8_t *target) { return find ((char *)target); }
  // returns true if target string is found, false if timed out (see setTimeout)

  bool find(char *target, size_t length); // reads data from the stream until the target string of given length is found
  bool find(uint8_t *target, size_t length) { return find ((char *)target, length); }
  // returns true if target string is found, false if timed out

  bool find(char target) { return find (&target, 1); }

  bool findUntil(char *target, char *terminator); // as find but search ends if the terminator string is found
  bool findUntil(uint8_t *target, char *terminator) { return findUntil((char *)target, terminator); }

  bool findUntil(char *target, size_t targetLen, char *terminate, size_t termLen); // as above but search ends if the terminate string is found
  bool findUntil(uint8_t *target, size_t targetLen, char *terminate, size_t termLen) {return findUntil((char *)target, targetLen, terminate, termLen); }

  long parseInt(LookaheadMode lookahead = SKIP_ALL, char ignore = '\x01' /* a char not found in a valid ASCII numeric field*/);
  // returns the first valid (long) integer value from the current position.
  // lookahead determines how parseInt looks ahead in the stream.
  // See LookaheadMode enumeration at the top of the file.
  // Lookahead is terminated by the first character that is not a valid part of an integer.
  // Once parsing commences, 'ignore' will be skipped in the stream.

  float parseFloat(LookaheadMode lookahead = SKIP_ALL, char ignore = '\x01' /* a char not found in a valid ASCII numeric field*/);
  // float version of parseInt

  size_t readBytes( char *buffer, size_t length); // read chars from stream into buffer
  size_t readBytes( uint8_t *buffer, size_t length) { return readBytes((char *)buffer, length); }
  // terminates if length characters have been read or timeout (see setTimeout)
  // returns the number of characters placed in the buffer (0 means no valid data found)

  size_t readBytesUntil( char terminator, char *buffer, size_t length); // as readBytes with terminator character
  size_t readBytesUntil( char terminator, uint8_t *buffer, size_t length) { return readBytesUntil(terminator, (char *)buffer, length); }
  // terminates if length characters have been read, timeout, or if the terminator character  detected
  // returns the number of characters placed in the buffer (0 means no valid data found)

  // Arduino String functions to be added here
  String readString();
  String readStringUntil(char terminator);

  protected:
  long parseInt(char ignore) { return parseInt(SKIP_ALL, ignore); }
  float parseFloat(char ignore) { return parseFloat(SKIP_ALL, ignore); }
  // These overload exists for compatibility with any class that has derived
  // Stream and used parseFloat/Int with a custom ignore character. To keep
  // the public API simple, these overload remains protected.

  struct MultiTarget {
    const char *str; // string you're searching for
    size_t len; // length of string you're searching for
    size_t index; // index used by the search routine.
  };

  // This allows you to search for an arbitrary number of strings.
  // Returns index of the target that is found first or -1 if timeout occurs.
  int findMulti(struct MultiTarget *targets, int tCount);
};
# 30 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/HardwareSerial.h" 2

// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which head is the index of the location
// to which to write the next incoming character and tail is the index of the
// location from which to read.
// NOTE: a "power of 2" buffer size is recommended to dramatically
//       optimize all the modulo operations for ring buffers.
// WARNING: When buffer sizes are increased to > 256, the buffer index
// variables are automatically increased in size, but the extra
// atomicity guards needed for that are not implemented. This will
// often work, but occasionally a race condition can occur that makes
// Serial behave erratically. See https://github.com/arduino/Arduino/issues/2405
# 59 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/HardwareSerial.h"
typedef uint8_t tx_buffer_index_t;




typedef uint8_t rx_buffer_index_t;


// Define config for Serial.begin(baud, config);
# 93 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/HardwareSerial.h"
class HardwareSerial : public Stream
{
  protected:
    volatile uint8_t * const _ubrrh;
    volatile uint8_t * const _ubrrl;
    volatile uint8_t * const _ucsra;
    volatile uint8_t * const _ucsrb;
    volatile uint8_t * const _ucsrc;
    volatile uint8_t * const _udr;
    // Has any byte been written to the UART since begin()
    bool _written;

    volatile rx_buffer_index_t _rx_buffer_head;
    volatile rx_buffer_index_t _rx_buffer_tail;
    volatile tx_buffer_index_t _tx_buffer_head;
    volatile tx_buffer_index_t _tx_buffer_tail;

    // Don't put any members after these buffers, since only the first
    // 32 bytes of this struct can be accessed quickly using the ldd
    // instruction.
    unsigned char _rx_buffer[64];
    unsigned char _tx_buffer[64];

  public:
    inline HardwareSerial(
      volatile uint8_t *ubrrh, volatile uint8_t *ubrrl,
      volatile uint8_t *ucsra, volatile uint8_t *ucsrb,
      volatile uint8_t *ucsrc, volatile uint8_t *udr);
    void begin(unsigned long baud) { begin(baud, 0x06); }
    void begin(unsigned long, uint8_t);
    void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    virtual int availableForWrite(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write; // pull in write(str) and write(buf, size) from Print
    operator bool() { return true; }

    // Interrupt handlers - Not intended to be called externally
    inline void _rx_complete_irq(void);
    void _tx_udr_empty_irq(void);
};


  extern HardwareSerial Serial;
# 159 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/HardwareSerial.h"
extern void serialEventRun(void) __attribute__((weak));
# 234 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 1
/*
  USBAPI.h
  Copyright (c) 2005-2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 24 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 25 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\eeprom.h" 1 3
/* Copyright (c) 2002, 2003, 2004, 2007 Marek Michalkiewicz
   Copyright (c) 2005, 2006 Bjoern Haase
   Copyright (c) 2008 Atmel Corporation
   Copyright (c) 2008 Wouter van Gulik
   Copyright (c) 2009 Dmitry Xmelkov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\eeprom.h" 2 3
# 50 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\eeprom.h" 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 149 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 160 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 416 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */






/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
  /* _Float128 is defined as a basic type, so max_align_t must be
     sufficiently aligned for it.  This code must work in C++, so we
     use __float128 here; that is only available on some
     architectures, but only on i386 is extra alignment needed for
     __float128.  */



} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 51 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\eeprom.h" 2 3


/** \defgroup avr_eeprom <avr/eeprom.h>: EEPROM handling
    \code #include <avr/eeprom.h> \endcode

    This header file declares the interface to some simple library
    routines suitable for handling the data EEPROM contained in the
    AVR microcontrollers.  The implementation uses a simple polled
    mode interface.  Applications that require interrupt-controlled
    EEPROM access to ensure that no time will be wasted in spinloops
    will have to deploy their own implementation.

    \par Notes:

    - In addition to the write functions there is a set of update ones.
    This functions read each byte first and skip the burning if the
    old value is the same with new.  The scaning direction is from
    high address to low, to obtain quick return in common cases.

    - All of the read/write functions first make sure the EEPROM is
    ready to be accessed.  Since this may cause long delays if a
    write operation is still pending, time-critical applications
    should first poll the EEPROM e. g. using eeprom_is_ready() before
    attempting any actual I/O.  But this functions are not wait until
    SELFPRGEN in SPMCSR becomes zero.  Do this manually, if your
    softwate contains the Flash burning.

    - As these functions modify IO registers, they are known to be
    non-reentrant.  If any of these functions are used from both,
    standard and interrupt context, the applications must ensure
    proper protection (e.g. by disabling interrupts before accessing
    them).

    - All write functions force erase_and_write programming mode.
    
    - For Xmega the EEPROM start address is 0, like other architectures.
    The reading functions add the 0x2000 value to use EEPROM mapping into
    data space.
 */


extern "C" {
# 103 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\eeprom.h" 3
/** \def EEMEM
    \ingroup avr_eeprom
    Attribute expression causing a variable to be allocated within the
    .eeprom section.	*/


/** \def eeprom_is_ready
    \ingroup avr_eeprom
    \returns 1 if EEPROM is ready for a new read/write operation, 0 if not.
 */
# 128 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\eeprom.h" 3
/** \def eeprom_busy_wait
    \ingroup avr_eeprom
    Loops until the eeprom is no longer busy.
    \returns Nothing.
 */



/** \ingroup avr_eeprom
    Read one byte from EEPROM address \a __p.
 */
uint8_t eeprom_read_byte (const uint8_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 16-bit word (little endian) from EEPROM address \a __p.
 */
uint16_t eeprom_read_word (const uint16_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 32-bit double word (little endian) from EEPROM address \a __p.
 */
uint32_t eeprom_read_dword (const uint32_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one float value (little endian) from EEPROM address \a __p.
 */
float eeprom_read_float (const float *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read a block of \a __n bytes from EEPROM address \a __src to SRAM
    \a __dst.
 */
void eeprom_read_block (void *__dst, const void *__src, size_t __n);


/** \ingroup avr_eeprom
    Write a byte \a __value to EEPROM address \a __p.
 */
void eeprom_write_byte (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Write a word \a __value to EEPROM address \a __p.
 */
void eeprom_write_word (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Write a 32-bit double word \a __value to EEPROM address \a __p.
 */
void eeprom_write_dword (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Write a float \a __value to EEPROM address \a __p.
 */
void eeprom_write_float (float *__p, float __value);

/** \ingroup avr_eeprom
    Write a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void eeprom_write_block (const void *__src, void *__dst, size_t __n);


/** \ingroup avr_eeprom
    Update a byte \a __value to EEPROM address \a __p.
 */
void eeprom_update_byte (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Update a word \a __value to EEPROM address \a __p.
 */
void eeprom_update_word (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Update a 32-bit double word \a __value to EEPROM address \a __p.
 */
void eeprom_update_dword (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Update a float \a __value to EEPROM address \a __p.
 */
void eeprom_update_float (float *__p, float __value);

/** \ingroup avr_eeprom
    Update a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void eeprom_update_block (const void *__src, void *__dst, size_t __n);


/** \name IAR C compatibility defines	*/
/*@{*/

/** \def _EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def __EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def _EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/** \def __EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/*@}*/


}
# 26 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 44 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 45 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 2 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay_basic.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 38 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay_basic.h" 2 3


static __inline__ void _delay_loop_1(uint8_t __count) __attribute__((__always_inline__));
static __inline__ void _delay_loop_2(uint16_t __count) __attribute__((__always_inline__));


/** \file */
/** \defgroup util_delay_basic <util/delay_basic.h>: Basic busy-wait delay loops
    \code
    #include <util/delay_basic.h>
    \endcode

    The functions in this header file implement simple delay loops
    that perform a busy-waiting.  They are typically used to
    facilitate short delays in the program execution.  They are
    implemented as count-down loops with a well-known CPU cycle
    count per loop iteration.  As such, no other processing can
    occur simultaneously.  It should be kept in mind that the
    functions described here do not disable interrupts.

    In general, for long delays, the use of hardware timers is
    much preferrable, as they free the CPU, and allow for
    concurrent processing of other events while the timer is
    running.  However, in particular for very short delays, the
    overhead of setting up a hardware timer is too much compared
    to the overall delay time.

    Two inline functions are provided for the actual delay algorithms.

*/

/** \ingroup util_delay_basic

    Delay loop using an 8-bit counter \c __count, so up to 256
    iterations are possible.  (The value 256 would have to be passed
    as 0.)  The loop executes three CPU cycles per iteration, not
    including the overhead the compiler needs to setup the counter
    register.

    Thus, at a CPU speed of 1 MHz, delays of up to 768 microseconds
    can be achieved.
*/
void
_delay_loop_1(uint8_t __count)
{
 __asm__ volatile (
  "1: dec %0" "\n\t"
  "brne 1b"
  : "=r" (__count)
  : "0" (__count)
 );
}

/** \ingroup util_delay_basic

    Delay loop using a 16-bit counter \c __count, so up to 65536
    iterations are possible.  (The value 65536 would have to be
    passed as 0.)  The loop executes four CPU cycles per iteration,
    not including the overhead the compiler requires to setup the
    counter register pair.

    Thus, at a CPU speed of 1 MHz, delays of up to about 262.1
    milliseconds can be achieved.
 */
void
_delay_loop_2(uint16_t __count)
{
 __asm__ volatile (
  "1: sbiw %0,1" "\n\t"
  "brne 1b"
  : "=w" (__count)
  : "0" (__count)
 );
}
# 46 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 2 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 47 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 2 3

/** \file */
/** \defgroup util_delay <util/delay.h>: Convenience functions for busy-wait delay loops
    \code
    #define F_CPU 1000000UL  // 1 MHz
    //#define F_CPU 14.7456E6
    #include <util/delay.h>
    \endcode

    \note As an alternative method, it is possible to pass the
    F_CPU macro down to the compiler from the Makefile.
    Obviously, in that case, no \c \#define statement should be
    used.

    The functions in this header file are wrappers around the basic
    busy-wait functions from <util/delay_basic.h>.  They are meant as
    convenience functions where actual time values can be specified
    rather than a number of cycles to wait for.  The idea behind is
    that compile-time constant expressions will be eliminated by
    compiler optimization so floating-point expressions can be used
    to calculate the number of delay cycles needed based on the CPU
    frequency passed by the macro F_CPU.

    \note In order for these functions to work as intended, compiler
    optimizations <em>must</em> be enabled, and the delay time
    <em>must</em> be an expression that is a known constant at
    compile-time.  If these requirements are not met, the resulting
    delay will be much longer (and basically unpredictable), and
    applications that otherwise do not use floating-point calculations
    will experience severe code bloat by the floating-point library
    routines linked into the application.

    The functions available allow the specification of microsecond, and
    millisecond delays directly, using the application-supplied macro
    F_CPU as the CPU clock frequency (in Hertz).

*/


static __inline__ void _delay_us(double __us) __attribute__((__always_inline__));
static __inline__ void _delay_ms(double __ms) __attribute__((__always_inline__));
# 118 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 119 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 2 3


/**
   \ingroup util_delay

   Perform a delay of \c __ms milliseconds, using _delay_loop_2().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 262.14 ms / F_CPU in MHz.

   When the user request delay which exceed the maximum possible one,
   _delay_ms() provides a decreased resolution functionality. In this
   mode _delay_ms() will work with a resolution of 1/10 ms, providing
   delays up to 6.5535 seconds (independent from CPU frequency).  The
   user will not be informed about decreased resolution.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles()
   support, maximal possible delay is 4294967.295 ms/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflows results in
   no delay i.e., 0ms.

   Conversion of \c __ms into clock cycles may not always result in
   integer.  By default, the clock cycles rounded up to next
   integer. This ensures that the user gets at least \c __ms
   microseconds of delay.

   Alternatively, by defining the macro \c __DELAY_ROUND_DOWN__, or
   \c __DELAY_ROUND_CLOSEST__, before including this header file, the
   algorithm can be made to round down, or round to closest integer,
   respectively.

   \note

   The implementation of _delay_ms() based on
   __builtin_avr_delay_cycles() is not backward compatible with older
   implementations.  In order to get functionality backward compatible
   with previous versions, the macro \c "__DELAY_BACKWARD_COMPATIBLE__"
   must be defined before including this header file. Also, the
   backward compatible algorithm will be chosen if the code is
   compiled in a <em>freestanding environment</em> (GCC option
   \c -ffreestanding), as the math functions required for rounding are
   not available to the compiler then.

 */
void
_delay_ms(double __ms)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((
# 174 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h"
          16000000L
# 174 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
               ) / 1e3) * __ms;
# 183 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 210 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
}

/**
   \ingroup util_delay

   Perform a delay of \c __us microseconds, using _delay_loop_1().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 768 us / F_CPU in MHz.

   If the user requests a delay greater than the maximal possible one,
   _delay_us() will automatically call _delay_ms() instead.  The user
   will not be informed about this case.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles()
   support, maximal possible delay is 4294967.295 us/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflow results in
   no delay i.e., 0us.

   Conversion of \c __us into clock cycles may not always result in
   integer.  By default, the clock cycles rounded up to next
   integer. This ensures that the user gets at least \c __us
   microseconds of delay.

   Alternatively, by defining the macro \c __DELAY_ROUND_DOWN__, or
   \c __DELAY_ROUND_CLOSEST__, before including this header file, the
   algorithm can be made to round down, or round to closest integer,
   respectively.

   \note

   The implementation of _delay_ms() based on
   __builtin_avr_delay_cycles() is not backward compatible with older
   implementations.  In order to get functionality backward compatible
   with previous versions, the macro \c __DELAY_BACKWARD_COMPATIBLE__
   must be defined before including this header file. Also, the
   backward compatible algorithm will be chosen if the code is
   compiled in a <em>freestanding environment</em> (GCC option
   \c -ffreestanding), as the math functions required for rounding are
   not available to the compiler then.

 */
void
_delay_us(double __us)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((
# 263 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h"
          16000000L
# 263 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
               ) / 1e6) * __us;
# 272 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 299 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
}
# 28 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 2


# 29 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 34 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/USBAPI.h" 2

// This definitions is useful if you want to reduce the EP_SIZE to 16
// at the moment only 64 and 16 as EP_SIZE for all EPs are supported except the control endpoint
# 235 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2




uint16_t makeWord(uint16_t w);
uint16_t makeWord(byte h, byte l);



unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);

void tone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0);
void noTone(uint8_t _pin);

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned long);
long map(long, long, long, long, long);



# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard/pins_arduino.h" 1
/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\pgmspace.h" 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard/pins_arduino.h" 2
# 43 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard/pins_arduino.h"

# 43 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard/pins_arduino.h"
static const uint8_t SS = (10);
static const uint8_t MOSI = (11);
static const uint8_t MISO = (12);
static const uint8_t SCK = (13);




static const uint8_t SDA = (18);
static const uint8_t SCL = (19);
# 65 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard/pins_arduino.h"
static const uint8_t A0 = (14);
static const uint8_t A1 = (15);
static const uint8_t A2 = (16);
static const uint8_t A3 = (17);
static const uint8_t A4 = (18);
static const uint8_t A5 = (19);
static const uint8_t A6 = (20);
static const uint8_t A7 = (21);
# 236 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard/pins_arduino.h"
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
# 259 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 2
# 2 "C:\\Users\\Maria\\Downloads\\IELS\\.arduino\\output\\sketch\\stubbing.ino.cpp" 2
# 1 "C:\\Users\\Maria\\Downloads\\IELS\\stubbing\\stubbing.ino"
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\libraries\\Wire\\src/Wire.h" 1
/*
  TwoWire.h - TWI/I2C library for Arduino & Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 2012 by Todd Krein (todd@krein.org) to implement repeated starts
  Modified 2020 by Greyson Christoforo (grey@christoforo.net) to implement timeouts
*/




# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\inttypes.h" 3
/* Copyright (c) 2004,2005,2007,2012 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 27 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\libraries\\Wire\\src/Wire.h" 2
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Stream.h" 1

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Stream.h"
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/
# 28 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\libraries\\Wire\\src/Wire.h" 2



// WIRE_HAS_END means Wire has end()


class TwoWire : public Stream
{
  private:
    static uint8_t rxBuffer[];
    static uint8_t rxBufferIndex;
    static uint8_t rxBufferLength;

    static uint8_t txAddress;
    static uint8_t txBuffer[];
    static uint8_t txBufferIndex;
    static uint8_t txBufferLength;

    static uint8_t transmitting;
    static void (*user_onRequest)(void);
    static void (*user_onReceive)(int);
    static void onRequestService(void);
    static void onReceiveService(uint8_t*, int);
  public:
    TwoWire();
    void begin();
    void begin(uint8_t);
    void begin(int);
    void end();
    void setClock(uint32_t);
    void setWireTimeout(uint32_t timeout = 25000, bool reset_with_timeout = false);
    bool getWireTimeoutFlag(void);
    void clearWireTimeoutFlag(void);
    void beginTransmission(uint8_t);
    void beginTransmission(int);
    uint8_t endTransmission(void);
    uint8_t endTransmission(uint8_t);
    uint8_t requestFrom(uint8_t, uint8_t);
    uint8_t requestFrom(uint8_t, uint8_t, uint8_t);
    uint8_t requestFrom(uint8_t, uint8_t, uint32_t, uint8_t, uint8_t);
    uint8_t requestFrom(int, int);
    uint8_t requestFrom(int, int, int);
    virtual size_t write(uint8_t);
    virtual size_t write(const uint8_t *, size_t);
    virtual int available(void);
    virtual int read(void);
    virtual int peek(void);
    virtual void flush(void);
    void onReceive( void (*)(int) );
    void onRequest( void (*)(void) );

    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write;
};

extern TwoWire Wire;
# 2 "C:\\Users\\Maria\\Downloads\\IELS\\stubbing\\stubbing.ino" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Zumo32U4.h
 *
 * \brief Main header file for the Zumo32U4 library.
 *
 * This file includes all the other headers files provided by the library.
 */

       





# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file FastGPIO.h

FastGPIO is a C++ header library for efficient AVR I/O.

For an overview of the features of this library, see
https://github.com/pololu/fastgpio-arduino.
That is the main repository for this library, though copies may exist in other
repositories.

The FastGPIO::Pin class provides static functions for manipulating pins.  See
its class reference for more information.

\class FastGPIO::Pin

@tparam pin The pin number

The FastGPIO::Pin class provides static functions for manipulating pins.  This
class can only be used if the pin number is known at compile time, which means
it does not come from a variable that might change and it does not come from the
result of a complicated calculation.

Here is some example code showing how to use this class to blink an LED:

~~~{.cpp}
#include <FastGPIO.h>

#define LED_PIN 13

void setup() {
}

void loop() {
  FastGPIO::Pin<LED_PIN>::setOutput(0);
  delay(500);
  FastGPIO::Pin<LED_PIN>::setOutput(1);
  delay(500);
}
~~~

*/

       
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 46 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 2



# 48 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
/** @cond */






/** @endcond */

namespace FastGPIO
{
    /** @cond */
    /** The IOStruct struct and the pinStructs array below are not documented in
     * the Doxygen documentation, but can be used by advanced users of this
     * library and are considered to be part of the public API for the purposes
     * of semantic versioning.
     */
    typedef struct IOStruct
    {
        uint8_t pinAddr;
        uint8_t portAddr;
        uint8_t ddrAddr;
        uint8_t bit;

        volatile uint8_t * pin() const
        {
            return (volatile uint8_t *)(uint16_t)pinAddr;
        }

        volatile uint8_t * port() const
        {
            return (volatile uint8_t *)(uint16_t)portAddr;
        }

        volatile uint8_t * ddr() const
        {
            return (volatile uint8_t *)(uint16_t)ddrAddr;
        }
    } IOStruct;
    /** @endcond */
# 149 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
    const IOStruct pinStructs[] = {
        { 
# 150 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 150 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 150 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 150 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 150 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 150 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 0 },
        { 
# 151 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 151 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 151 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 151 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 151 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 151 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 1 },
        { 
# 152 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 152 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 152 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 152 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 152 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 152 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 2 },
        { 
# 153 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 153 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 153 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 153 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 153 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 153 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 3 },
        { 
# 154 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 154 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 154 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 154 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 154 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 154 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 4 },
        { 
# 155 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 155 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 155 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 155 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 155 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 155 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 5 },
        { 
# 156 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 156 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 156 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 156 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 156 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 156 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 6 },
        { 
# 157 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x09) + 0x20))))
# 157 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 157 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0B) + 0x20))))
# 157 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 157 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x0A) + 0x20))))
# 157 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 7 },
        { 
# 158 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x03) + 0x20))))
# 158 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 158 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x05) + 0x20))))
# 158 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 158 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x04) + 0x20))))
# 158 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 0 },
        { 
# 159 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x03) + 0x20))))
# 159 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 159 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x05) + 0x20))))
# 159 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 159 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x04) + 0x20))))
# 159 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 1 },
        { 
# 160 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x03) + 0x20))))
# 160 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 160 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x05) + 0x20))))
# 160 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 160 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x04) + 0x20))))
# 160 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 2 },
        { 
# 161 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x03) + 0x20))))
# 161 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 161 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x05) + 0x20))))
# 161 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 161 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x04) + 0x20))))
# 161 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 3 },
        { 
# 162 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x03) + 0x20))))
# 162 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 162 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x05) + 0x20))))
# 162 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 162 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x04) + 0x20))))
# 162 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 4 },
        { 
# 163 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x03) + 0x20))))
# 163 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 163 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x05) + 0x20))))
# 163 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 163 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x04) + 0x20))))
# 163 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 5 },
        { 
# 164 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 164 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 164 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 164 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 164 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 164 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 0 },
        { 
# 165 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 165 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 165 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 165 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 165 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 165 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 1 },
        { 
# 166 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 166 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 166 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 166 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 166 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 166 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 2 },
        { 
# 167 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 167 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 167 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 167 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 167 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 167 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 3 },
        { 
# 168 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 168 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 168 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 168 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 168 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 168 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 4 },
        { 
# 169 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 169 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 169 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 169 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 169 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 169 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 5 },
        { 
# 170 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 170 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 170 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 170 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 170 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 170 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 6 }, // RESET
        { 
# 171 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x06) + 0x20))))
# 171 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 171 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x08) + 0x20))))
# 171 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 
# 171 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
       ((uint16_t) &((*(volatile uint8_t *)((0x07) + 0x20))))
# 171 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
       , 7 }, // Null pin (IO_NONE)
    };
# 275 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
    template<uint8_t pin> class Pin
    {
    public:
        /*! \brief Configures the pin to be an output driving low.
         *
         * This is equivalent to calling setOutput with an argument of 0,
         * but it has a simpler implementation which means it is more
         * likely to be compiled down to just 2 assembly instructions.
         */
        static inline void setOutputLow() __attribute__((always_inline))
        {
            asm volatile("cbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 286 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 286 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].ddrAddr - 
# 287 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 287 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Configures the pin to be an output driving high.
         *
         * This is equivalent to calling setOutput with an argument of 1,
         * but it has a simpler implementation which means it is more
         * likely to be compiled down to just 2 assembly instructions.
         */
        static inline void setOutputHigh() __attribute__((always_inline))
        {
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 298 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 298 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].ddrAddr - 
# 299 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 299 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Configures the pin to be an output and toggles it.
         */
        static inline void setOutputToggle() __attribute__((always_inline))
        {
            setOutputValueToggle();
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].ddrAddr - 
# 307 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 307 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Sets the pin as an output.
         *
         * @param value Should be 0, LOW, or false to drive the pin low.  Should
         * be 1, HIGH, or true to drive the pin high.
         *
         * The PORT bit is set before the DDR bit to ensure that the output is
         * not accidentally driven to the wrong value during the transition.
         */
        static inline void setOutput(bool value) __attribute__((always_inline))
        {
            setOutputValue(value);
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].ddrAddr - 
# 321 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 321 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Sets the output value of the pin to 0.
         *
         * This is mainly intended to be used on pins that have already been
         * configured as an output in order to make the output drive low.
         *
         * If this is used on an input pin, it has the effect of disabling the
         * input pin's pull-up resistor.
         */
        static inline void setOutputValueLow() __attribute__((always_inline))
        {
            asm volatile("cbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 334 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 334 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Sets the output value of the pin to 1.
         *
         * This is mainly intended to be used on pins that have already been
         * configured as an output in order to make the output drive low.
         *
         * If this is used on an input pin, it has the effect of enabling the
         * input pin's pull-up resistor.
         */
        static inline void setOutputValueHigh() __attribute__((always_inline))
        {
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 347 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 347 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Toggles the output value of the pin.
         *
         * This is mainly intended to be used on pins that have already been
         * configured as an output.  If the pin was driving low, this function
         * changes it to drive high.  If the pin was driving high, this function
         * changes it to drive low.
         *
         * If this function is used on an input pin, it has the effect of
         * toggling the state of the input pin's pull-up resistor.
         */
        static inline void setOutputValueToggle() __attribute__((always_inline))
        {
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].pinAddr - 
# 362 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 362 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Sets the output value of the pin.
         *
         * @param value Should be 0, LOW, or false to drive the pin low.  Should
         * be 1, HIGH, or true to drive the pin high.
         *
         * This is mainly intended to be used on pins that have already been
         * configured as an output.
         *
         * If this function is used on an input pin, it has the effect of
         * toggling setting the state of the input pin's pull-up resistor.
         */
        static inline void setOutputValue(bool value) __attribute__((always_inline))
        {
            if (value)
            {
                asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 380 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
               0x20
# 380 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
               ), "I" (pinStructs[pin].bit));
            }
            else
            {
                asm volatile("cbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 384 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
               0x20
# 384 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
               ), "I" (pinStructs[pin].bit));
            }
        }

        /*! \brief Sets a pin to be a digital input with the internal pull-up
         *  resistor disabled.
         */
        static inline void setInput() __attribute__((always_inline))
        {
            asm volatile("cbi %0, %1\n" : : "I" (pinStructs[pin].ddrAddr - 
# 393 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 393 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
            asm volatile("cbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 394 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 394 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Sets a pin to be a digital input with the internal pull-up
         *  resistor enabled.
         */
        static inline void setInputPulledUp() __attribute__((always_inline))
        {
            asm volatile("cbi %0, %1\n" : : "I" (pinStructs[pin].ddrAddr - 
# 402 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 402 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
            asm volatile("sbi %0, %1\n" : : "I" (pinStructs[pin].portAddr - 
# 403 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
           0x20
# 403 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
           ), "I" (pinStructs[pin].bit));
        }

        /*! \brief Reads the input value of the pin.
         *
         * @return 0 if the pin is low, 1 if the pin is high.
         */
        static inline bool isInputHigh() __attribute__((always_inline))
        {
            return *pinStructs[pin].pin() >> pinStructs[pin].bit & 1;

            /* This is another option but it is less efficient in code
               like "if (isInputHigh()) { ... }":
            bool value;
            asm volatile(
                "ldi %0, 0\n"
                "sbic %2, %1\n"
                "ldi %0, 1\n"
                : "=d" (value)
                : "I" (pinStructs[pin].bit),
                  "I" (pinStructs[pin].pinAddr - __SFR_OFFSET));
            return value;
            */
        }

        /*! \brief Returns 1 if the pin is configured as an output.
         *
         * @return 1 if the pin is an output, 0 if it is an input.
         */
        static inline bool isOutput() __attribute__((always_inline))
        {
            return *pinStructs[pin].ddr() >> pinStructs[pin].bit & 1;
        }

        /*! \brief Returns the output value of the pin.
         *
         * This is mainly intended to be called on pins that have been
         * configured an an output.  If it is called on an input pin, the return
         * value indicates whether the pull-up resistor is enabled or not.
         */
        static inline bool isOutputValueHigh() __attribute__((always_inline))
        {
            return *pinStructs[pin].port() >> pinStructs[pin].bit & 1;
        }

        /*! \brief Returns the full 2-bit state of the pin.
         *
         * Bit 0 of this function's return value is the pin's output value.
         * Bit 1 of the return value is the pin direction; a value of 1
         * means output.  All the other bits are zero.
         */
        static uint8_t getState()
        {
            uint8_t state;
            asm volatile(
                "ldi  %0, 0\n"
                "sbic %2, %1\n"
                "ori  %0, 1\n" // Set state bit 0 to 1 if PORT bit is set.
                "sbic %3, %1\n"
                "ori  %0, 2\n" // Set state bit 1 to 1 if DDR bit is set.
                : "=a" (state)
                : "I" (pinStructs[pin].bit),
                  "I" (pinStructs[pin].portAddr - 
# 465 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
                                                 0x20
# 465 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
                                                             ),
                  "I" (pinStructs[pin].ddrAddr - 
# 466 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
                                                0x20
# 466 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
                                                            ));
            return state;

            /* Equivalent C++ code:
              return isOutput() << 1 | isOutputValueHigh();
            */
        }

        /*! \brief Sets the full 2-bit state of the pin.
         *
         * @param state The state of the pin, as returns from getState.
         * All bits other than bits 0 and 1 are ignored.
         *
         * Sometimes this function will need to change both the PORT bit (which
         * specifies the output value) and the DDR bit (which specifies whether
         * the pin is an output).  If the DDR bit is getting set to 0, this
         * function changes DDR first, and if it is getting set to 1, this
         * function changes DDR last.  This guarantees that the intermediate pin
         * state is always an input state.
         */
        static void setState(uint8_t state)
        {
            asm volatile(
                "bst  %0, 1\n" // Set DDR to 0 if needed
                "brts .+2\n"
                "cbi  %3, %1\n"
                "bst  %0, 0\n" // Copy state bit 0 to PORT bit
                "brts .+2\n"
                "cbi  %2, %1\n"
                "brtc .+2\n"
                "sbi  %2, %1\n"
                "bst  %0, 1\n" // Set DDR to 1 if needed
                "brtc .+2\n"
                "sbi  %3, %1\n"
                :
                : "a" (state),
                  "I" (pinStructs[pin].bit),
                  "I" (pinStructs[pin].portAddr - 
# 503 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
                                                 0x20
# 503 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
                                                             ),
                  "I" (pinStructs[pin].ddrAddr - 
# 504 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h" 3
                                                0x20
# 504 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\FastGPIO/FastGPIO.h"
                                                            ));
        }
    };

    /*! This class saves the state of the specified pin in its constructor when
     * it is created, and restores the pin to that state in its destructor.
     * This can be very useful if a pin is being used for multiple purposes.
     * It allows you to write code that temporarily changes the state of the
     * pin and is guaranteed to restore the state later.
     *
     * For example, if you were controlling both a button and an LED using a
     * single pin and you wanted to see if the button was pressed without
     * affecting the LED, you could write:
     *
     * ~~~{.cpp}
     * bool buttonIsPressed()
     * {
     *     FastGPIO::PinLoan<IO_D5> loan;
     *     FastGPIO::Pin<IO_D5>::setInputPulledUp();
     *     _delay_us(10);
     *     return !FastGPIO::Pin<IO_D5>::isInputHigh();
     * }
     * ~~~
     *
     * This is equivalent to:
     *
     * ~~~{.cpp}
     * bool buttonIsPressed()
     * {
     *     uint8_t state = FastGPIO::Pin<IO_D5>::getState();
     *     FastGPIO::Pin<IO_D5>::setInputPulledUp();
     *     _delay_us(10);
     *     bool value = !FastGPIO::Pin<IO_D5>::isInputHigh();
     *     FastGPIO::Pin<IO_D5>::setState(state);
     *     return value;
     * }
     * ~~~
     */
    template<uint8_t pin> class PinLoan
    {
    public:
        /*! \brief The state of the pin as returned from FastGPIO::Pin::getState. */
        uint8_t state;

        PinLoan()
        {
            state = Pin<pin>::getState();
        }

        ~PinLoan()
        {
            Pin<pin>::setState(state);
        }
    };
};
# 17 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buttons.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/** \file Zumo32U4Buttons.h **/

       

# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Pushbutton/Pushbutton.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Pushbutton.h
 *
 * This is the main header file for the %Pushbutton library.
 *
 * For an overview of the library's features, see
 * https://github.com/pololu/pushbutton-arduino.  That is the main repository
 * for the library, though copies of the library may exist in other
 * repositories. */

       

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 15 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Pushbutton/Pushbutton.h" 2

/*! Indicates the that pull-up resistor should be disabled. */


/*! Indicates the that pull-up resistor should be enabled. */


/*! Indicates that the default (released) state of the button is when the
 *  I/O line reads low. */


/*! Indicates that the default (released) state of the button is when the
 *  I/O line reads high. */


/*! The pin used for the button on the
 * [Zumo Shield for Arduino](http://www.pololu.com/product/2508).
 *
 * This does not really belong here in this general pushbutton library and will
 * probably be removed in the future. */


// \cond
/** \brief A state machine that detects when a boolean value changes from false
 * to true, with debouncing.
 *
 * This should be considered a private implementation detail of the library.
 */
class PushbuttonStateMachine
{
public:

  PushbuttonStateMachine();

  /** This should be called repeatedly in a loop.  It will return true once after
   * each time it detects the given value changing from false to true. */
  bool getSingleDebouncedRisingEdge(bool value);

private:

  uint8_t state;
  uint16_t prevTimeMillis;
};
// \endcond

/*! \brief General pushbutton class that handles debouncing.
 *
 * This is an abstract class used for interfacing with pushbuttons.  It knows
 * about debouncing, but it knows nothing about how to read the current state of
 * the button.  The functions in this class get the current state of the button
 * by calling isPressed(), a virtual function which must be implemented in a
 * subclass of PushbuttonBase, such as Pushbutton.
 *
 * Most users of this library do not need to directly use PushbuttonBase or even
 * know that it exists.  They can use Pushbutton instead.*/
class PushbuttonBase
{
public:

  /*! \brief Waits until the button is pressed and takes care of debouncing.
   *
   * This function waits until the button is in the pressed state and then
   * returns.  Note that if the button is already pressed when you call this
   * function, it will return quickly (in 10 ms). */
  void waitForPress();

  /*! \brief Waits until the button is released and takes care of debouncing.
   *
   * This function waits until the button is in the released state and then
   * returns.  Note that if the button is already released when you call this
   * function, it will return quickly (in 10 ms). */
  void waitForRelease();

  /*! \brief Waits until the button is pressed and then waits until the button
   *  is released, taking care of debouncing.
   *
   * This is equivalent to calling waitForPress() and then waitForRelease(). */
  void waitForButton();

  /*! \brief Uses a state machine to return true once after each time it detects
   *  the button moving from the released state to the pressed state.
   *
   * This is a non-blocking function that is meant to be called repeatedly in a
   * loop.  Each time it is called, it updates a state machine that monitors the
   * state of the button.  When it detects the button changing from the released
   * state to the pressed state, with debouncing, it returns true. */
  bool getSingleDebouncedPress();

  /*! \brief Uses a state machine to return true once after each time it detects the button moving from the pressed state to the released state.
   *
   * This is just like getSingleDebouncedPress() except it has a separate state
   * machine and it watches for when the button goes from the pressed state to
   * the released state.
   *
   * There is no strict guarantee that every debounced button press event
   * returned by getSingleDebouncedPress() will have a corresponding
   * button release event returned by getSingleDebouncedRelease(); the two
   * functions use independent state machines and sample the button at different
   * times. */
  bool getSingleDebouncedRelease();

  /*! \brief indicates whether button is currently pressed without any debouncing.
   *
   * @return 1 if the button is pressed right now, 0 if it is not.
   *
   * This function must be implemented in a subclass of PushbuttonBase, such as
   * Pushbutton. */
  virtual bool isPressed() = 0;

private:

  PushbuttonStateMachine pressState;
  PushbuttonStateMachine releaseState;
};

/** \brief Main class for interfacing with pushbuttons.
 *
 * This class can interface with any pushbutton whose state can be read with
 * the `digitalRead` function, which is part of the Arduino core.
 *
 * See https://github.com/pololu/pushbutton-arduino for an overview
 * of the different ways to use this class. */
class Pushbutton : public PushbuttonBase
{
public:

  /** Constructs a new instance of Pushbutton.
   *
   * @param pin The pin number of the pin. This is used as an argument to
   * `pinMode` and `digitalRead`.
   *
   * @param pullUp Specifies whether the pin's internal pull-up resistor should
   * be enabled.  This should be either #PULL_UP_ENABLED (which is the default if
   * the argument is omitted) or #PULL_UP_DISABLED.
   *
   * @param defaultState Specifies the voltage level that corresponds to the
   * button's default (released) state.  This should be either
   * #DEFAULT_STATE_HIGH (which is the default if this argument is omitted) or
   * #DEFAULT_STATE_LOW. */
  Pushbutton(uint8_t pin, uint8_t pullUp = 1,
      uint8_t defaultState = 1);

  virtual bool isPressed();

private:

  void init()
  {
    if (!initialized)
    {
      initialized = true;
      init2();
    }
  }

  void init2();

  bool initialized;
  uint8_t _pin;
  bool _pullUp;
  bool _defaultState;
};
# 8 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buttons.h" 2

# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\USBPause/USBPause.h" 1
// Copyright Pololu Corporation.  For more information, see https://www.pololu.com/

/*! \file USBPause.h
 *
 * This is the main file for the USBPause library.
 *
 * For an overview of this library, see
 * https://github.com/pololu/usb-pause-arduino.  That is the main repository for
 * this library, though copies may exist in other repositories. */

       

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\avr\\io.h" 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 14 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\USBPause/USBPause.h" 2


# 15 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\USBPause/USBPause.h"
/*! This class disables USB interrupts in its constructor when it is created and
 *  restores them to their previous state in its destructor when it is
 *  destroyed.  This class is tailored to the behavior of the Arduino core USB
 *  code, so it might have to change if that code changes.
 *
 * This class assumes that the only USB interrupts enabled are general device
 * interrupts and endpoint 0 interrupts.
 *
 * It also assumes that the endpoint 0 interrupts will not enable or disable any
 * of the general device interrupts.
 */
class USBPause
{
    /// The saved value of the UDIEN register.
    uint8_t savedUDIEN;

    /// The saved value of the UENUM register.
    uint8_t savedUENUM;

    /// The saved value of the UEIENX register for endpoint 0.
    uint8_t savedUEIENX0;

public:

    USBPause()
    {
        // Disable the general USB interrupt.  This must be done
        // first, because the general USB interrupt might change the
        // state of the EP0 interrupt, but not the other way around.
        savedUDIEN = UDIEN;
        UDIEN = 0;

        // Select endpoint 0.
        savedUENUM = UENUM;
        UENUM = 0;

        // Disable endpoint 0 interrupts.
        savedUEIENX0 = UEIENX;
        UEIENX = 0;
    }

    ~USBPause()
    {
        // Restore endpoint 0 interrupts.
        UENUM = 0;
        UEIENX = savedUEIENX0;

        // Restore endpoint selection.
        UENUM = savedUENUM;

        // Restore general device interrupt.
        UDIEN = savedUDIEN;
    }

};
# 10 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buttons.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 11 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buttons.h" 2


# 12 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buttons.h"
/*! The pin number for the pin connected to button A on the Zumo 32U4. */


/*! The pin number for the pin connected to button B on the Zumo 32U4.  Note
 * that this is not an official Arduino pin number so it cannot be used with
 * functions like digitalRead, but it can be used with the FastGPIO library. */


/*! The pin number for the pin conencted to button C on the Zumo 32U4. */


/*! \brief Interfaces with button A on the Zumo 32U4. */
class Zumo32U4ButtonA : public Pushbutton
{
public:
    Zumo32U4ButtonA() : Pushbutton(14)
    {
    }
};

/*! \brief Interfaces with button B on the Zumo 32U4.
 *
 * The pin used for button B is also used for the TX LED.
 *
 * This class temporarily disables USB interrupts because the Arduino core code
 * has USB interrupts enabled that sometimes write to the pin this button is on.
 *
 * This class temporarily sets the pin to be an input without a pull-up
 * resistor.  The pull-up resistor is not needed because of the resistors on the
 * board. */
class Zumo32U4ButtonB : public PushbuttonBase
{
public:

    virtual bool isPressed()
    {
        USBPause usbPause;
        FastGPIO::PinLoan<5> loan;
        FastGPIO::Pin<5>::setInputPulledUp();
        _delay_us(3);
        return !FastGPIO::Pin<5>::isInputHigh();
    }
};

/*! \brief Interfaces with button C on the Zumo 32U4.
 *
 * The pin used for button C is also used for the RX LED.
 *
 * This class temporarily disables USB interrupts because the Arduino core code
 * has USB interrupts enabled that sometimes write to the pin this button is on.
 *
 * This class temporarily sets the pin to be an input without a pull-up
 * resistor.  The pull-up resistor is not needed because of the resistors on the
 * board. */
class Zumo32U4ButtonC : public PushbuttonBase
{
public:

    virtual bool isPressed()
    {
        USBPause usbPause;
        FastGPIO::PinLoan<17> loan;
        FastGPIO::Pin<17>::setInputPulledUp();
        _delay_us(3);
        return !FastGPIO::Pin<17>::isInputHigh();
    }
};
# 18 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buzzer.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Zumo32U4Buzzer.h */

       

# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuBuzzer\\src/PololuBuzzer.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file PololuBuzzer.h
 *
 * See the PololuBuzzer class reference for more information about this library.
 *
 * The main repository for this library is
 * https://github.com/pololu/pololu-buzzer-arduino, though copies of this
 * library also exist in other repositories.
 *
 * \class PololuBuzzer PololuBuzzer.h
 * \brief Play beeps and music with the buzzer.
 *
 * The PololuBuzzer library allows various sounds to be played through a buzzer,
 * from simple beeps to complex tunes.
 *
 * On the ATmega328P/168 boards, this library uses Timer 2 and pin 3 (PD3/OC2B).
 * On ATmega32U4 boards, this library uses Timer 4 and pin 6 (PD7/OC4D).  This
 * library will conflict will other libraries that use the same timer or pin.
 *
 * Note durations are timed using a timer overflow interrupt
 * (`TIMER2_OVF`/`TIMER4_OVF`), which will briefly interrupt execution of your
 * main program at the frequency of the sound being played. In most cases, the
 * interrupt-handling routine is very short (several microseconds). However,
 * when playing a sequence of notes in `PLAY_AUTOMATIC` mode (the default mode)
 * with the `play()` command, this interrupt takes much longer than normal
 * (perhaps several hundred microseconds) every time it starts a new note. It is
 * important to take this into account when writing timing-critical code.
 *
 * This library is fully compatible with the OrangutanBuzzer functions
 * in the [Pololu AVR C/C++ Library](http://www.pololu.com/docs/0J18)
 * and the [ZumoBuzzer library](https://github.com/pololu/zumo-shield),
 * so any sequences and melodies written for those libraries will also work
 * with the equivalent PololuBuzzer functions. */

       

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 39 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuBuzzer\\src/PololuBuzzer.h" 2

/*! \brief Specifies that the sequence of notes will play with no further action
 *  required by the user. */



/*! \brief Specified that the user will need to call `playCheck()` regularly. */


//                                             n
// Equal Tempered Scale is given by f  = f  * a
//                                   n    o
//
//  where f  is chosen as A above middle C (A4) at f  = 440 Hz
//         o                                        o
//  and a is given by the twelfth root of 2 (~1.059463094359)

/*! \anchor note_macros
 *
 * \name Note Macros
 * \a x specifies the octave of the note
 * @{
 */
# 80 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuBuzzer\\src/PololuBuzzer.h"
/*! \brief silences buzzer for the note duration */


/*! \brief frequency bit that indicates Hz/10<br>
 * e.g. \a frequency = `(445 | DIV_BY_10)` gives a frequency of 44.5 Hz
 */

/*! @} */

class PololuBuzzer
{
  public:

  /*! \brief Plays the specified frequency for the specified duration.
   *
   * \param freq     Frequency to play in Hz (or 0.1 Hz if the `DIV_BY_10` bit
   *                 is set).
   * \param duration Duration of the note in milliseconds.
   * \param volume   Volume of the note (0--15).
   *
   * The \a frequency argument must be between 40 Hz and 10 kHz. If the most
   * significant bit of \a frequency is set, the frequency played is the value
   * of the lower 15 bits of \a frequency in units of 0.1 Hz. Therefore, you can
   * play a frequency of 44.5 Hz by using a \a frequency of `(DIV_BY_10 | 445)`.
   * If the most significant bit of \a frequency is not set, the units for
   * frequency are Hz. The \a volume argument controls the buzzer volume, with
   * 15 being the loudest and 0 being the quietest. A \a volume of 15 supplies
   * the buzzer with a 50% duty cycle PWM at the specified \a frequency.
   * Lowering \a volume by one halves the duty cycle (so 14 gives a 25% duty
   * cycle, 13 gives a 12.5% duty cycle, etc). The volume control is somewhat
   * crude (especially on the ATmega328/168) and should be thought of as a bonus
   * feature.
   *
   * This function plays the note in the background while your program continues
   * to execute. If you call another buzzer function while the note is playing,
   * the new function call will overwrite the previous and take control of the
   * buzzer. If you want to string notes together, you should either use the
   * `play()` function or put an appropriate delay after you start a note
   * playing. You can use the `is_playing()` function to figure out when the
   * buzzer is through playing its note or melody.
   *
   * ### Example ###
   *
   * ~~~{.cpp}
   * PololuBuzzer buzzer;
   *
   * ...
   *
   * // play a 6 kHz note for 250 ms at a lower volume
   * buzzer.playFrequency(6000, 250, 12);
   *
   * // wait for buzzer to finish playing the note
   * while (buzzer.isPlaying());
   *
   * // play a 44.5 Hz note for 1 s at full volume
   * buzzer.playFrequency(DIV_BY_10 | 445, 1000, 15);
   * ~~~
   *
   * \warning \a frequency &times; \a duration / 1000 must be no greater than
   * 0xFFFF (65535). This means you can't use a duration of 65535 ms for
   * frequencies greater than 1 kHz. For example, the maximum duration you can
   * use for a frequency of 10 kHz is 6553 ms. If you use a duration longer than
   * this, you will produce an integer overflow that can result in unexpected
   * behavior.
   */
  static void playFrequency(unsigned int freq, unsigned int duration,
                unsigned char volume);

  /*! \brief Plays the specified note for the specified duration.
   *
   *  \param note     Note to play (see \ref note_macros "Note Macros").
   *  \param duration Duration of the note in milliseconds.
   *  \param volume   Volume of the note (0--15).
   *
   * The \a note argument is an enumeration for the notes of the equal tempered
   * scale (ETS). See \ref note_macros "Note Macros" for more information. The
   * \a volume argument controls the buzzer volume, with 15 being the loudest
   * and 0 being the quietest. A \a volume of 15 supplies the buzzer with a 50%
   * duty cycle PWM at the specified \a frequency. Lowering \a volume by one
   * halves the duty cycle (so 14 gives a 25% duty cycle, 13 gives a 12.5% duty
   * cycle, etc). The volume control is somewhat crude (especially on the
   * ATmega328/168) and should be thought of as a bonus feature.
   *
   * This function plays the note in the background while your program continues
   * to execute. If you call another buzzer function while the note is playing,
   * the new function call will overwrite the previous and take control of the
   * buzzer. If you want to string notes together, you should either use the
   * `play()` function or put an appropriate delay after you start a note
   * playing. You can use the `is_playing()` function to figure out when the
   * buzzer is through playing its note or melody.
   */
  static void playNote(unsigned char note, unsigned int duration,
          unsigned char volume);

  /*! \brief Plays the specified sequence of notes.
   *
   *  \param sequence Char array containing a sequence of notes to play.
   *
   * If the play mode is `PLAY_AUTOMATIC` (default), the sequence of notes will
   * play with no further action required by the user. If the play mode is
   * `PLAY_CHECK`, the user will need to call `playCheck()` in the main loop to
   * initiate the playing of each new note in the sequence. The play mode can be
   * changed while the sequence is playing. The sequence syntax is modeled after
   * the PLAY commands in GW-BASIC, with just a few differences.
   *
   * The notes are specified by the characters **C**, **D**, **E**, **F**,
   * **G**, **A**, and **B**, and they are played by default as "quarter notes"
   * with a length of 500 ms. This corresponds to a tempo of 120 beats/min.
   * Other durations can be specified by putting a number immediately after the
   * note. For example, C8 specifies C played as an eighth note, with half the
   * duration of a quarter note. The special note **R** plays a rest (no sound).
   * The sequence parser is case-insensitive and ignores spaces, which may be
   * used to format your music nicely.
   *
   * Various control characters alter the sound:
   * <table>
   * <tr><th>Control character(s)</th><th>Effect</th></tr>
   * <tr><td><strong>A--G</strong></td>
   *     <td>Specifies a note that will be played.</td></tr>
   * <tr><td><strong>R</strong></td>
   *     <td>Specifies a rest (no sound for the duration of the note).</td></tr>
   * <tr><td><strong>+</strong></strong> or <strong>#</strong> after a note</td>
   *     <td>Raises the preceding note one half-step.</td></tr>
   * <tr><td><strong>-</strong> after a note</td>
   *     <td>Lowers the preceding note one half-step.</td></tr>
   * <tr><td><strong>1--2000</strong> after a note</td>
   *     <td>Determines the duration of the preceding note. For example, C16
   *         specifies C played as a sixteenth note (1/16th the length of a
   *         whole note).</td></tr>
   * <tr><td><strong>.</strong> after a note</td>
   *     <td>"Dots" the preceding note, increasing the length by 50%. Each
   *         additional dot adds half as much as the previous dot, so that "A.."
   *         is 1.75 times the length of "A".</td></tr>
   * <tr><td><strong>></strong> before a note</td>
   *     <td>Plays the following note one octave higher.</td></tr>
   * <tr><td><strong><</strong> before a note</td>
   *     <td>Plays the following note one octave lower.</td></tr>
   * <tr><td><strong>O</strong> followed by a number</td>
   *     <td>Sets the octave. (default: **O4**)</td></tr>
   * <tr><td><strong>T</strong> followed by a number</td>
   *     <td>Sets the tempo in beats per minute (BPM). (default: **T120**)</td></tr>
   * <tr><td><strong>L</strong> followed by a number</td>
   *     <td>Sets the default note duration to the type specified by the number:
   *         4 for quarter notes, 8 for eighth notes, 16 for sixteenth notes,
   *         etc. (default: **L4**)</td></tr>
   * <tr><td><strong>V</strong> followed by a number</td>
   *     <td>Sets the music volume (0--15). (default: **V15**)</td></tr>
   * <tr><td><strong>MS</strong></td>
   *     <td>Sets all subsequent notes to play play staccato -- each note is
   *     played for 1/2 of its allotted time, followed by an equal period of
   *     silence.</td></tr>
   * <tr><td><strong>ML</strong></td>
   *     <td>Sets all subsequent notes to play legato -- each note is played for
   *     full length. This is the default setting.</td></tr>
   * <tr><td><strong>!</strong></td>
   *     <td>Resets the octave, tempo, duration, volume, and staccato setting to
   *     their default values. These settings persist from one `play()` to the
   *     next, which allows you to more conveniently break up your music into
   *     reusable sections.</td></tr>
   * </table>
   *
   * This function plays the string of notes in the background while your
   * program continues to execute. If you call another buzzer function while the
   * melody is playing, the new function call will overwrite the previous and
   * take control of the buzzer. If you want to string melodies together, you
   * should put an appropriate delay after you start a melody playing. You can
   * use the `is_playing()` function to figure out when the buzzer is through
   * playing the melody.
   *
   * ### Example ###
   *
   * ~~~{.cpp}
   * PololuBuzzer buzzer;
   *
   * ...
   *
   * // play a C major scale up and back down:
   * buzzer.play("!L16 V8 cdefgab>cbagfedc");
   * while (buzzer.isPlaying());
   *
   * // the first few measures of Bach's fugue in D-minor
   * buzzer.play("!T240 L8 agafaea dac+adaea fa<aa<bac#a dac#adaea f4");
   * ~~~
   */
  static void play(const char *sequence);

  static void play(const __FlashStringHelper *sequence)
  {
    playFromProgramSpace((const char *)sequence);
  }

  /*! \brief Plays the specified sequence of notes from program space.
   *
   * \param sequence Char array in program space containing a sequence of notes
   *                 to play.
   *
   * A version of `play()` that takes a pointer to program space instead of RAM.
   * This is desirable since RAM is limited and the string must be in program
   * space anyway.
   *
   * ### Example ###
   *
   * ~~~{.cpp}
   * #include <avr/pgmspace.h>
   *
   * PololuBuzzer buzzer;
   * const char melody[] PROGMEM = "!L16 V8 cdefgab>cbagfedc";
   *
   * ...
   *
   * buzzer.playFromProgramSpace(melody);
   * ~~~
   */
  static void playFromProgramSpace(const char *sequence);

  /*! \brief Controls whether `play()` sequence is played automatically or
   *         must be driven with `playCheck()`.
   *
   * \param mode Play mode (either `PLAY_AUTOMATIC` or `PLAY_CHECK`).
   *
   * This method lets you determine whether the notes of the `play()` sequence
   * are played automatically in the background or are driven by the
   * `playCheck()` method. If \a mode is `PLAY_AUTOMATIC`, the sequence will
   * play automatically in the background, driven by the timer overflow
   * interrupt. The interrupt will take a considerable amount of time to execute
   * when it starts the next note in the sequence playing, so it is recommended
   * that you do not use automatic-play if you cannot tolerate being interrupted
   * for more than a few microseconds. If \a mode is `PLAY_CHECK`, you can
   * control when the next note in the sequence is played by calling the
   * `playCheck()` method at acceptable points in your main loop. If your main
   * loop has substantial delays, it is recommended that you use automatic-play
   * mode rather than play-check mode. Note that the play mode can be changed
   * while the sequence is being played. The mode is set to `PLAY_AUTOMATIC` by
   * default.
   */
  static void playMode(unsigned char mode);

  /*! \brief Starts the next note in a sequence, if necessary, in `PLAY_CHECK`
   *         mode.
   *
   *  \return 0 if sequence is complete, 1 otherwise.
   *
   * This method only needs to be called if you are in `PLAY_CHECK` mode. It
   * checks to see whether it is time to start another note in the sequence
   * initiated by `play()`, and starts it if so. If it is not yet time to start
   * the next note, this method returns without doing anything. Call this as
   * often as possible in your main loop to avoid delays between notes in the
   * sequence. This method returns 0 (false) if the melody to be played is
   * complete, otherwise it returns 1 (true).
   */
  static unsigned char playCheck();

  /*! \brief Checks whether a note, frequency, or sequence is being played.
   *
   * \return 1 if the buzzer is current playing a note, frequency, or sequence;
   *         0 otherwise.
   *
   * This method returns 1 (true) if the buzzer is currently playing a
   * note/frequency or if it is still playing a sequence started by `play()`.
   * Otherwise, it returns 0 (false). You can poll this method to determine when
   * it's time to play the next note in a sequence, or you can use it as the
   * argument to a delay loop to wait while the buzzer is busy.
   */
  static unsigned char isPlaying();

  /*! \brief Stops any note, frequency, or melody being played.
   *
   * This method will immediately silence the buzzer and terminate any
   * note/frequency/melody that is currently playing.
   */
  static void stopPlaying();


  private:

  // initializes timer for buzzer control
  static void init2();
  static void init();
};
# 8 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Buzzer.h" 2

/*! \brief Plays beeps and music on the buzzer on the Zumo 32U4.
 *
 * This class uses Timer 4 and pin 6 (PD7/OC4D) to play beeps and melodies on
 * the Zumo 32U4 buzzer.
 *
 * Note durations are timed using a timer overflow interrupt
 * (`TIMER4_OVF`), which will briefly interrupt execution of your
 * main program at the frequency of the sound being played. In most cases, the
 * interrupt-handling routine is very short (several microseconds). However,
 * when playing a sequence of notes in `PLAY_AUTOMATIC` mode (the default mode)
 * with the `play()` command, this interrupt takes much longer than normal
 * (perhaps several hundred microseconds) every time it starts a new note. It is
 * important to take this into account when writing timing-critical code.
 */
class Zumo32U4Buzzer : public PololuBuzzer
{
    // This is a trivial subclass of PololuBuzzer; it exists because we wanted
    // the Zumo32U4 class names to be consistent and we didn't just use a typedef
    // to define it because that would make the Doxygen documentation harder to
    // understand.
};
# 19 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Encoders.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Zumo32U4Encoders.h */

       



/*! \brief Reads counts from the encoders on the Zumo 32U4.
 *
 * This class allows you to read counts from the encoders on the Zumo 32U4,
 * which lets you tell how much each motor has turned and in what direction.
 *
 * The encoders are monitored in the background using interrupts, so your code
 * can perform other tasks without missing encoder counts.
 *
 * To read the left encoder, this class uses an interrupt service routine (ISR)
 * for PCINT0_vect, so there will be a compile-time conflict with any other code
 * that defines a pin-change ISR.
 *
 * To read the right encoder, this class calls
 * [attachInterrupt()](http://arduino.cc/en/Reference/attachInterrupt), so there
 * will be a compile-time conflict with any other code that defines an ISR for
 * an external interrupt directly instead of using attachInterrupt(). */
class Zumo32U4Encoders
{

public:

    /*! This function initializes the encoders if they have not been initialized
     *  already and starts listening for counts.  This
     *  function is called automatically whenever you call any other function in
     *  this class, so you should not normally need to call it in your code. */
    static void init()
    {
        static bool initialized = 0;
        if (!initialized)
        {
            initialized = true;
            init2();
        }
    }

    /*! Returns the number of counts that have been detected from the left-side
     * encoder.  These counts start at 0.  Positive counts correspond to forward
     * movement of the left side of the Zumo, while negative counts correspond
     * to backwards movement.
     *
     * The count is returned as a signed 16-bit integer.  When the count goes
     * over 32767, it will overflow down to -32768.  When the count goes below
     * -32768, it will overflow up to 32767. */
    static int16_t getCountsLeft();

    /*! This function is just like getCountsLeft() except it applies to the
     *  right-side encoder. */
    static int16_t getCountsRight();

    /*! This function is just like getCountsLeft() except it also clears the
     *  counts before returning.  If you call this frequently enough, you will
     *  not have to worry about the count overflowing. */
    static int16_t getCountsAndResetLeft();

    /*! This function is just like getCountsAndResetLeft() except it applies to
     *  the right-side encoder. */
    static int16_t getCountsAndResetRight();

    /*! This function returns true if an error was detected on the left-side
     * encoder.  It resets the error flag automatically, so it will only return
     * true if an error was detected since the last time checkErrorLeft() was
     * called.
     *
     * If an error happens, it means that both of the encoder outputs changed at
     * the same time from the perspective of the ISR, so the ISR was unable to
     * tell what direction the motor was moving, and the encoder count could be
     * inaccurate.  The most likely cause for an error is that the interrupt
     * service routine for the encoders could not be started soon enough.  If
     * you get encoder errors, make sure you are not disabling interrupts for
     * extended periods of time in your code. */
    static bool checkErrorLeft();

    /*! This function is just like checkErrorLeft() except it applies to
     *  the right-side encoder. */
    static bool checkErrorRight();

private:

    static void init2();
};
# 20 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4IMU.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Zumo32U4IMU.h */

       

/*! \anchor device_addresses
 *
 * \name Device Addresses
 * @{
 */




/*! @} */

/*! \anchor register_addresses
 *
 * \name Register Addresses
 * @{
 */
# 55 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4IMU.h"
/*! @} */

/*! \brief The type of the inertial sensors. */
enum class Zumo32U4IMUType : uint8_t {
  /*! Unknown or unrecognized */
  Unknown,
  /*! LSM303D accelerometer + magnetometer, L3GD20H gyro */
  LSM303D_L3GD20H,
  /*! LSM6DS33 gyro + accelerometer, LIS3MDL magnetometer */
  LSM6DS33_LIS3MDL
};

/*! \brief Interfaces with the inertial sensors on the Zumo 32U4.
 *
 * This class allows you to configure and get readings from the I2C sensors that
 * make up the Zumo 32U4's inertial measurement unit (IMU): gyro, accelerometer,
 * and magnetometer.
 *
 * You must call `Wire.start()` before using any of this library's functions
 * that access the sensors. */
class Zumo32U4IMU
{
public:

  /*! \brief Represents a 3-dimensional vector with x, y, and z
   * components. */
  template <typename T> struct vector
  {
    T x, y, z;
  };

  /*! \brief Raw accelerometer readings. */
  vector<int16_t> a = {0, 0, 0};

  /*! \brief Raw gyro readings. */
  vector<int16_t> g = {0, 0, 0};

  /*! \brief Raw magnetometer readings. */
  vector<int16_t> m = {0, 0, 0};

  /*! \brief Returns 0 if the last I2C communication with the IMU was
   * successful, or a non-zero status code if there was an error. */
  uint8_t getLastError() { return lastError; }

  /*! \brief Initializes the inertial sensors and detects their type.
   *
   *  \return True if the sensor type was detected succesfully; false otherwise.
   */
  bool init();

  /*! \brief Returns the type of the inertial sensors on the Zumo 32U4.
   *
   * \return The sensor type as a member of the Zumo32U4IMUType enum. If the
   * type is not known (e.g. if init() has not been called yet), this will be
   * Zumo32U4IMUType::Unknown. */
  Zumo32U4IMUType getType() { return type; }

  /*! \brief Enables all of the inertial sensors with a default configuration.
   */
  void enableDefault();

  /*! \brief Configures the sensors with settings optimized for turn sensing. */
  void configureForTurnSensing();

  /*! \brief Configures the sensors with settings optimized for balancing. */
  void configureForBalancing();

  /*! \brief Configures the sensors with settings optimized for the FaceUphill
   * example program. */
  void configureForFaceUphill();

  /*! \brief Writes an 8-bit sensor register.
   *
   * \param addr Device address.
   * \param reg Register address.
   * \param value 8-bit register value to be written. */
  void writeReg(uint8_t addr, uint8_t reg, uint8_t value);

  /*! \brief Reads an 8-bit sensor register.
   *
   * \param addr Device address.
   * \param reg Register address.
   *
   * \return 8-bit register value read from the device. */
  uint8_t readReg(uint8_t addr, uint8_t reg);

  /*! \brief Takes a reading from the accelerometer and makes the measurements
   * available in #a. */
  void readAcc();

  /*! \brief Takes a reading from the gyro and makes the measurements available
   * in #g. */
  void readGyro();

    /*! \brief Takes a reading from the magnetometer and makes the measurements
   * available in #m. */
  void readMag();

    /*! \brief Takes a reading from all three sensors (accelerometer, gyro, and
     * magnetometer) and makes their measurements available in the respective
     * vectors. */
  void read();

  /*! \brief Indicates whether the accelerometer has new measurement data ready.
   *
   * \return True if there is new accelerometer data available; false otherwise.
   */
  bool accDataReady();

  /*! \brief Indicates whether the gyro has new measurement data ready.
   *
   * \return True if there is new gyro data available; false otherwise.
   */
  bool gyroDataReady();

  /*! \brief Indicates whether the magnetometer has new measurement data ready.
   *
   * \return True if there is new magnetometer data available; false otherwise.
   */
  bool magDataReady();

private:

  uint8_t lastError = 0;
  Zumo32U4IMUType type = Zumo32U4IMUType::Unknown;

  int16_t testReg(uint8_t addr, uint8_t reg);
  void readAxes16Bit(uint8_t addr, uint8_t firstReg, vector<int16_t> & v);
};
# 21 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4IRPulses.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/** \file Zumo32U4IRPulses.h */

       



/** \brief Emits pulses of infrared (IR) light using the IR LEDs on the Zumo
32U4 Main Board.

Timer 3 is used to generate a PWM signal, so this library might conflict with
other libraries that use Timer 3.  When the pulses are stopped, Timer 3 can be
used for other purposes.

Pin A1 (PF6) is used to select which set of LEDs to turn on: the left-side LEDs
or the right-side LEDs.

Pin 5 (PC6/OC3A) is used as a PWM output to turn the LEDs on and off.

This class does not do anything with the IR LEDs or detectors on the Zumo 32U4
Front Sensor Array.
 */
class Zumo32U4IRPulses
{
public:

    /** This enum defines the two different sets of LEDs that can be used to
        emit pulses. */
    enum Direction
    {
        /** The LEDs on the left side of the robot. */
        Left = 0,

        /** The LEDs on the right side of the robot. */
        Right = 1
    };

    /** The default frequency is 16000000 / (420 + 1) = 38.005 kHz */
    static const uint16_t defaultPeriod = 420;

    /** \brief Starts emitting IR pulses.
     *
     * \param direction Specifies which set of LEDs to turn on.
     * \param brightness A number that specifies
     *   how long each pulse is.  The pulse length will be
     *   (1 + brightness) / (16 MHz).
     *   If \c brightness is greater than or equal to \c period, then the LEDs
     *   will just be on constantly.
     * \param period A number that specifies the frequency of the pulses.
     *   The interval between consecutive the rising edges of pulses will be
     *   (1 + period) / (16 MHz).
     *   The default value is 420, which results in a period very close to
     *   38 kHz. */
    static void start(Direction direction, uint16_t brightness,
      uint16_t period = defaultPeriod);

    /** \brief Stops emitting IR pulses.
     *
     * Timer 3 can be used for other purposes after calling this
     * function. */
    static void stop();
};
# 22 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4LCD.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Zumo32U4LCD.h */

       

# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuHD44780/PololuHD44780.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file PololuHD44780.h
 *
 * This is the main header file for the %PololuHD44780 library.
 *
 * For an overview of the library's features, see
 * https://github.com/pololu/pololu-hd44780-arduino.  That is the main
 * repository for the library, though copies of the library may exist in other
 * repositories. */

       
# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 14 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuHD44780/PololuHD44780.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 15 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuHD44780/PololuHD44780.h" 2


# 16 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuHD44780/PololuHD44780.h"
/*! \brief General class for handling the HD44780 protocol.
 *
 * This is an abstract class that knows about the HD44780 LCD commands but
 * does not directly read or write from the actual LCD.  To make a usable class,
 * you need to define a subclass of PololuHD44780Base and implement the
 * initPins() and send() functions.
 *
 * The subclass will inherit all the functions from PololuHD44780Base which are
 * documented here.  It will also inherit all of the functions from the Arduino `Print` class.
 * For more information about what the `Print` class provides, see the [Arduino print() documentation](http://arduino.cc/en/Serial/Print) or look at [Print.h in the Arduino IDE source code](https://github.com/arduino/Arduino/blob/master/hardware/arduino/cores/arduino/Print.h).
 *
 * Most users of this library will not need to directly use this class and
 * should use PololuHD44780 or some other subclass of PololuHD44780Base defined
 * in a different library.
 *
 * ## LCD scrolling ##
 *
 * The PololuHD44780Base class provides several functions related to scrolling:
 *
 * * scrollDisplayLeft() scrolls everything on the screen one position to the left.
 * * scrollDisplayRight() scrolls everything on the screen one position to the right.
 * * autoscroll() and noAutoscroll() control whether auto-scrolling is enabled.
 * * home() and clear() both reset the scroll position
 *
 * The HD44780 actually stores 40 columns internally.  By default, the left-most
 * internal columns are the ones that are actually displayed on the screen, but
 * the scrolling features allow that correspondence to change.  The scrolling
 * wraps around, so it is possible to display some of the right-most columns on
 * the screen at the same time as some of the left-most columns.
 *
 * For the gotoXY() function, the x coordinate actually corresponds to the
 * internal column index.  The left-most internal column has an x coordinate of
 * 0, and the right-most has an x coordinate of 39.
 *
 * For example, if you are controlling a 2&times;8 character LCD and you call
 * scrollDisplayLeft() 35 times (or call scrollDisplayRight() 5 times), then the
 * X coordinates of the columns displayed, from left to right, will be 35, 36,
 * 37, 38, 39, 0, 1, and 2.
 *
 */
class PololuHD44780Base : public Print
{
public:

    PololuHD44780Base();

    /*! Initializes the pins so that the send() function can be called
     * successfully.  This is the first step of initializing the LCD. */
    virtual void initPins() = 0;

    /*! Initialize the LCD if it has not already been initialized. */
    void init()
    {
        if (!initialized)
        {
            initialized = true;
            init2();
        }
    }

    /*! Reinitialize the LCD.  This performs the same initialization that is
     *  done automatically the first time any function is called that writes to
     *  the LCD.  This is useful if you want to get it back to a totally clean
     *  state. */
    void reinitialize()
    {
        initialized = true;
        init2();
    }

    /*! Sends data or commands to the LCD.
     *
     * The initPins() function will always be called before the first time this
     * function is called.  This function does not need to worry about the
     * delays necessary to make sure the previous command has finished; that is
     * taken care of by PololuHD44780Base.
     *
     * This function, along with initPins(), comprise the hardware abstraction
     * layer for the LCD, and must be defined in a subclass of
     * PololuHD44780Base.  All other functions use these two functions to
     * communicate with the LCD.
     *
     * @param data The data to send to the LCD.
     * @param rsValue True to drive the RS pin high, false to drive it low.
     * @param only4bits: If true, and the LCD is using a 4-bit interface, only sends
     *   the lower 4 bits of the data. */
    virtual void send(uint8_t data, bool rsValue, bool only4bits) = 0;

private:

    void sendAndDelay(uint8_t data, bool rsValue, bool only4bit);

    /*! Sends an 8-bit command to the LCD. */
    void sendCommand(uint8_t cmd)
    {
        sendAndDelay(cmd, false, false);
    }

    /*! Sends a 4-bit command to the LCD. */
    void sendCommand4Bit(uint8_t cmd)
    {
        sendAndDelay(cmd, false, true);
    }

    /*! Sends 8 bits of a data to the LCD. */
    void sendData(uint8_t data)
    {
        sendAndDelay(data, true, false);
    }

public:

    /*! Clear the contents of the LCDs, resets the cursor position to the upper
     *  left, and resets the scroll position. */
    void clear();

    /*! Defines a custom character.
     * @param picture A pointer to the character dot pattern, in program space.
     * @param number A number between 0 and 7. */
    void loadCustomCharacter(const uint8_t * picture, uint8_t number);

    /*! Defines a custom character from RAM.
     * @param picture A pointer to the character dot pattern, in RAM.
     * @param number A number between 0 and 7. */
    void loadCustomCharacterFromRam(const uint8_t * picture, uint8_t number);

    /*! This overload of loadCustomCharacter is only provided for compatibility
     * with OrangutanLCD; a lot of Orangutan code defines an array of chars for
     * custom character pictures. */
    void loadCustomCharacter(const char * picture, uint8_t number)
    {
        loadCustomCharacter((const uint8_t *)picture, number);
    }

    /*! Defines a custom character.
     * This is provided for compatibility with the LiquidCrystal library. */
    void createChar(uint8_t number, uint8_t picture[])
    {
        loadCustomCharacterFromRam(picture, number);
    }

    /*! Change the location of the cursor.  The cursor (whether visible or invisible),
     *  is the place where the next character written to the LCD will be displayed.
     *
     * Note that the scrolling features of the LCD change the correspondence
     * between the `x` parameter and the physical column that the data is
     * displayed on.  See the "LCD scrolling" section above for more information.
     *
     * @param x The number of the column to go to, with 0 being the leftmost column.
     * @param y The number of the row to go to, with 0 being the top row. */
    void gotoXY(uint8_t x, uint8_t y);

    /*! Changes the location of the cursor.  This is just a wrapper around
     * gotoXY provided for compaitibility with the LiquidCrystal library. */
    void setCursor(uint8_t col, uint8_t row)
    {
        gotoXY(col, row);
    }

    /*! Turns off the display while preserving its state.
     *
     * You can turn the display on again by calling display(). */
    void noDisplay();

    /*! Turns the display on.  This should only be needed if noDisplay() was
     *  previously called. */
    void display();

    /*! Hides the solid cursor.
     *
     * This function clears the LCD's "C" configuration bit without changing
     * the other bits.
     *
     * If the "B" bit is set to 1, a blinking cursor will still be displayed
     * even after calling this function.  For that reason, it is usually better
     * to call hideCursor() instead.  This function is only provided for
     * compatibility with the LiquidCrystal library. */
    void noCursor();

    /*! Shows the solid cursor.
     *
     * This function sets the LCD's "C" configuration bit without changing the
     * other bits.
     *
     * The cursor will normally be a solid line in the bottom row, but there
     * could be a blinking rectangle superimposed on it if previous commands
     * have enabled the blinking cursor.  For this reason, it is usually better
     * to call cursorSolid() or cursorBlinking() instead.  This function is only
     * provided for compatibility with the LiquidCrystal library. */
    void cursor();

    /*! Hides the blinking cursor.
     *
     * This functions clears the LCD's "B" configuration bit without changing
     * the other bits.
     *
     * Calling this function does not enable or disable the solid cursor (a
     * solid line in the bottom row) so it is usually better to call
     * hideCursor() or cursorSolid() instead.  This function is only provided
     * for compatibilty with the LiquidCrystal library. */
    void noBlink();

    /*! Shows the blinking cursor.
     *
     * This function sets the LCD's "B" configuration bit without changing the
     * other bits.
     *
     * The cursor will normally be a blinking rectangle, but there could also be
     * a row of solid black pixels at the bottom if previous commands have
     * enabled the solid cursor.  For this reason, it is usually better to call
     * cursorSolid() or cursorBlinking() instead.  This function is only
     * provided for compatibilty with the LiquidCrystal library. */
    void blink();

    /*! Enables a cursor that appears as a solid line in the bottom row.
     *
     * This sets the LCD's "C" configuration bit and clears its "B" bit.
     *
     * Note that the cursor will not be shown if the display is currently off
     * (due to a call to noDisplay()), or if the cursor position is not within
     * the bounds of the screen. */
    void cursorSolid();

    /*! Enables a cursor that appears as a blinking black rectangle.
     *
     * This sets the LCD's "C" and "B" configuration bits.
     *
     * Note that the cursor will not be shown if the display is currently off
     * (due to a call to noDisplay()), or if the cursor position is not within
     * the bounds of the screen. */
    void cursorBlinking();

    /*! Hides the solid and blinking cursors.
     *
     * This clears the LCD's "C" and "B" configuration bits. */
    void hideCursor();

    /*! Scrolls everything on the screen one position to the left.
     *
     * This command takes about 37 microseconds. */
    void scrollDisplayLeft();

    /*! Scrolls everything on the screen one position to the right.
     *
     * This command takes about 37 microseconds. */
    void scrollDisplayRight();

    /*! Resets the screen scrolling position back to the default and moves the
     *  cursor to the upper left corner of the screen.
     *
     * This command takes about 1600 microseconds, so it would be faster to
     * instead call scrollDisplayLeft() or scrollDisplayRight() the appropriate
     * number of times and then call gotoXY(0, 0). */
    void home();

    /*! Puts the LCD into left-to-right mode: the cursor will shift to the right
     *  after any character is written.  This is the default behavior. */
    void leftToRight();

    /*! Puts the LCD into right-to-left mode: the cursor will shift to the left
     *  after any character is written. */
    void rightToLeft();

    /*! Turns on auto-scrolling.
     *
     * When auto-scrolling is enabled, every time a character is written, the
     * screen will automatically scroll by one column in the appropriate
     * direction. */
    void autoscroll();

    /*! Turns off auto-scrolling.  Auto-scrolling is off by default. */
    void noAutoscroll();

    //void initPrintf();
    //void initPrintf(uint8_t lcdWidth, uint8_t lcdHeight);

    /*! Send an arbitrary command to the LCD.  This is here for compatibility
     * with the LiquidCrystal library. */
    void command(uint8_t cmd)
    {
        sendCommand(cmd);
    }

    /*! Writes a single character to the LCD. */
    virtual size_t write(uint8_t c);

    /*! Writes multiple characters to the LCD.
     *
     * @param buffer Pointer to a string of characters in RAM, not
     *   necessarily null-terminated.
     * @param size The number of characters to write to the LCD, excluding any
     *  null termination character. */
    virtual size_t write(const uint8_t * buffer, size_t size);

    // This allows us to easily call overrides of write that are
    // defined in Print.
    using Print::write;

private:
    bool initialized;

    /* The lower three bits of this store the arguments to the
     * last "Display on/off control" HD44780 command that we sent.
     * bit 2: D: Whether the display is on.
     * bit 1: C: Whether the cursor is shown.
     * bit 0: B: Whether the cursor is blinking. */
    uint8_t displayControl;

    /* The lower two bits of this variable store the arguments to the
     * last "Entry mode set" HD44780 command that we sent.
     * bit 1: I/D: 0 for moving the cursor to the left after data is written,
     *        1 for moving the cursor to the right.
     * bit 0: 1 for autoscrolling. */
    uint8_t entryMode;

    void setEntryMode(uint8_t entryMode);
    void setDisplayControl(uint8_t displayControl);

    void init2();
};

/*! \brief Main class for interfacing with the HD44780 LCDs.
 *
 * This class is suitable for controlling an HD44780 LCD assuming that the LCD's
 * RS, E, DB4, DB5, DB6, and DB7 pins are each connected to a pin on the
 * microcontroller, each of those six microcontroller pins is supported by the
 * Arduino's `pinMode` and `digitalWrite` functions, and those pins are not
 * being used for any other purpose that conflicts with the LCD.
 *
 * This class sets the E pin to be an output driving low the first time you use
 * the LCD, and it assumes that no other code will change that pin.  You cannot
 * use E for any other purposes because if the LCD sees a pulse on the E pin
 * then it might consider that to be a command or data, and the LCD state will
 * become corrupted.
 *
 * For the other pins (RS, DB4, DB5, and DB6), this library reconfigures them
 * each time they are used, so it is OK if you have other code that uses those
 * pins for other purposes.  Before writing to the LCD, you just need to disable
 * any peripherals (such as UARTs) that override the output values of those
 * pins.
 *
 * If you cannot meet these conditions, you might be able to control your LCD
 * using a custom subclass of PololuHD44780Base.  You can use this class as a
 * reference for how to do that. */
class PololuHD44780 : public PololuHD44780Base
{
public:
    /*! Creates a new instance of PololuHD44780.
     *
     * @param rs The pin number for the microcontroller pin that is
     *   connected to the RS pin of the LCD.
     * @param e The pin number for the microcontroller pin that is
     *   connected to the E pin of the LCD.
     * @param db4 The pin number for the microcontroller pin that is
     *   connected to the DB4 pin of the LCD.
     * @param db5 The pin number for the microcontroller pin that is
     *   connected to the DB5 pin of the LCD.
     * @param db6 The pin number for the microcontroller pin that is
     *   connected to the DB6 pin of the LCD.
     * @param db7 The pin number for the microcontroller pin that is
     *   connected to the DB7 pin of the LCD.
     */
    PololuHD44780(uint8_t rs, uint8_t e, uint8_t db4, uint8_t db5,
        uint8_t db6, uint8_t db7)
    {
        this->rs = rs;
        this->e = e;
        this->db4 = db4;
        this->db5 = db5;
        this->db6 = db6;
        this->db7 = db7;
    }

    virtual void initPins()
    {
        digitalWrite(e, 0x0);
        pinMode(e, 0x1);
    }

    virtual void send(uint8_t data, bool rsValue, bool only4bits)
    {
        digitalWrite(rs, rsValue);

        pinMode(rs, 0x1);
        pinMode(db4, 0x1);
        pinMode(db5, 0x1);
        pinMode(db6, 0x1);
        pinMode(db7, 0x1);

        if (!only4bits) { sendNibble(data >> 4); }
        sendNibble(data & 0x0F);
    }

private:

    void sendNibble(uint8_t data)
    {
        digitalWrite(db4, data >> 0 & 1);
        digitalWrite(db5, data >> 1 & 1);
        digitalWrite(db6, data >> 2 & 1);
        digitalWrite(db7, data >> 3 & 1);

        digitalWrite(e, 0x1);
        _delay_us(1); // Must be at least 450 ns.
        digitalWrite(e, 0x0);
        _delay_us(1); // Must be at least 550 ns.
    }

    uint8_t rs, e, db4, db5, db6, db7;
};
# 8 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4LCD.h" 2



/*! \brief Writes data to the LCD on the Zumo 32U4.
 *
 * This library is similar to the Arduino
 * [LiquidCrystal library](http://arduino.cc/en/Reference/LiquidCrystal),
 * but it has some extra features needed on the Zumo 32U4:
 *
 * * This class disables USB interrupts temporarily while writing to the LCD so
 *   that the USB interrupts will not change the RXLED and TXLED pins, which
 *   double as LCD data lines.
 * * This class restores the RS, DB4, DB5, DB6, and DB7 pins to their previous
 *   states when it is done using them so that those pins can also be used for
 *   other purposes such as controlling LEDs.
 *
 * This class inherits from the Arduino Print class, so you can call the
 * `print()` function on it with a variety of arguments.  See the
 * [Arduino print() documentation](http://arduino.cc/en/Serial/Print)
 * for more information.
 *
 * For detailed information about HD44780 LCD interface, including what
 * characters can be displayed, see the
 * [HD44780 datasheet](http://www.pololu.com/file/0J72/HD44780.pdf).
 */
class Zumo32U4LCD : public PololuHD44780Base
{
    // Pin assignments
    static const uint8_t rs = 0, e = 1, db4 = 14, db5 = 17, db6 = 13, db7 = 5;

public:

    virtual void initPins()
    {
        FastGPIO::Pin<e>::setOutputLow();
    }

    virtual void send(uint8_t data, bool rsValue, bool only4bits)
    {
        // Temporarily disable USB interrupts because they write some pins
        // we are using as LCD pins.
        USBPause usbPause;

        // Save the state of the RS and data pins.  The state automatically
        // gets restored before this function returns.
        FastGPIO::PinLoan<rs> loanRS;
        FastGPIO::PinLoan<db4> loanDB4;
        FastGPIO::PinLoan<db5> loanDB5;
        FastGPIO::PinLoan<db6> loanDB6;
        FastGPIO::PinLoan<db7> loanDB7;

        // Drive the RS pin high or low.
        FastGPIO::Pin<rs>::setOutput(rsValue);

        // Send the data.
        if (!only4bits) { sendNibble(data >> 4); }
        sendNibble(data & 0x0F);
    }

private:

    void sendNibble(uint8_t data)
    {
        FastGPIO::Pin<db4>::setOutput(data >> 0 & 1);
        FastGPIO::Pin<db5>::setOutput(data >> 1 & 1);
        FastGPIO::Pin<db6>::setOutput(data >> 2 & 1);
        FastGPIO::Pin<db7>::setOutput(data >> 3 & 1);

        FastGPIO::Pin<e>::setOutputHigh();
        _delay_us(1); // Must be at least 450 ns.
        FastGPIO::Pin<e>::setOutputLow();
        _delay_us(1); // Must be at least 550 ns.
    }
};
# 23 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4LineSensors.h" 1
/** \file Zumo32U4LineSensors.h **/

// Doxygen needs this to recognize that Zumo32U4LineSensors::init() overrides
// QTRSensorsRC::init().





       

# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/QTRSensors.h" 1
/// \file QTRSensors.h

/*
  QTRSensors.h - Library for using Pololu QTR reflectance
    sensors and reflectance sensor arrays: QTR-1A, QTR-8A, QTR-1RC, and
    QTR-8RC.  The object used will determine the type of the sensor (either
    QTR-xA or QTR-xRC).  Then simply specify in the constructor which
    Arduino I/O pins are connected to a QTR sensor, and the read() method
    will obtain reflectance measurements for those sensors.  Smaller sensor
    values correspond to higher reflectance (e.g. white) while larger
    sensor values correspond to lower reflectance (e.g. black or a void).

    * QTRSensorsRC should be used for QTR-1RC and QTR-8RC sensors.
    * QTRSensorsAnalog should be used for QTR-1A and QTR-8A sensors.
*/

/*
 * Written by Ben Schmidel et al., October 4, 2010
 * Copyright (c) 2008-2012 Pololu Corporation. For more information, see
 *
 *   http://www.pololu.com
 *   http://forum.pololu.com
 *   http://www.pololu.com/docs/0J19
 *
 * You may freely modify and share this code, as long as you keep this
 * notice intact (including the two links above).  Licensed under the
 * Creative Commons BY-SA 3.0 license:
 *
 *   http://creativecommons.org/licenses/by-sa/3.0/
 *
 * Disclaimer: To the extent permitted by law, Pololu provides this work
 * without any warranty.  It might be defective, in which case you agree
 * to be responsible for all resulting costs and damages.
 */




/// \defgroup read_modes Read modes
///
/// @{

/// \brief Specifies that the reading should be made without turning on the infrared
/// (IR) emitters.
///
/// The reading represents ambient light levels
/// near the sensor.


/// \brief Specifies that the emitters should be turned on for the reading.
///
/// This results in a measure of reflectance.


/// \brief Specifies that a reading should be made in both the on and off states.
///
/// The values returned when this option is used are given by *on + max â€“ off*,
/// where *on* is the reading with the emitters on, *off* is the reading with
/// the emitters off, and *max* is the maximum sensor reading. This option can
/// reduce the amount of interference from uneven ambient lighting. Note that
/// emitter control will only work if you specify a valid emitter pin in the
/// constructor.

/// @}





// This class cannot be instantiated directly (it has no constructor).
// Instead, you should instantiate one of its two derived classes (either the
// QTR-A or QTR-RC version, depending on the type of your sensor).
class QTRSensors
{
  public:

    /// \brief Reads the raw sensor values into an array.
    ///
    /// \param[out] sensor_values A pointer to an array in which to store the
    /// raw sensor readings. There *MUST* be space for as many values as
    /// there were sensors specified in the constructor.
    ///
    /// \param readMode The emitter behavior during the read (see \ref
    /// read_modes). The default is `QTR_EMITTERS_ON`.
    ///
    /// Example usage:
    /// ~~~{.cpp}
    /// unsigned int sensor_values[8];
    /// sensors.read(sensor_values);
    /// ~~~
    ///
    /// The values returned are a measure of the reflectance in abstract units,
    /// with higher values corresponding to lower reflectance (e.g. a black
    /// surface or a void).
    ///
    /// If `measureOffAndOn` is true, measures the values with the emitters on
    /// AND off and returns on - (timeout - off).  If this value is less than
    /// zero, it returns zero.
    ///
    /// This method will call the appropriate derived class's readPrivate(),
    /// which is defined as a virtual function in the base class and overridden
    /// by each derived class's own implementation.
    void read(unsigned int *sensor_values, unsigned char readMode = 1);

    /// \brief Turns the IR LEDs off.
    ///
    ///  This is mainly for use by the read method, and calling this function
    ///  before or after the reading the sensors will have no effect on the
    ///  readings, but you may wish to use it for testing purposes.
    void emittersOff();

    /// \brief Turns the IR LEDs on.
    ///
    ///  This is mainly for use by the read method, and calling this function
    ///  before or after the reading the sensors will have no effect on the
    ///  readings, but you may wish to use it for testing purposes.
    void emittersOn();

    /// \brief Reads the sensors for calibration.
    ///
    /// The sensor values are not returned; instead, the maximum and minimum
    /// values found over time are stored internally and used for the
    /// readCalibrated() method.
    void calibrate(unsigned char readMode = 1);

    /// \brief Resets all calibration that has been done.
    void resetCalibration();

    /// \brief Reads the sensors and provides calibrated values between 0 and
    /// 1000.
    ///
    /// \param[out] sensor_values A pointer to an array in which to store the
    /// calibrated sensor readings. There *MUST* be space for as many values as
    /// there were sensors specified in the constructor.
    ///
    /// \param readMode The emitter behavior during the read (see \ref
    /// read_modes). The default is `QTR_EMITTERS_ON`.
    ///
    /// 0 corresponds to the minimum value read by calibrate() and 1000
    /// corresponds to the maximum value.  Calibration values are
    /// stored separately for each sensor, so that differences in the
    /// sensors are accounted for automatically.
    void readCalibrated(unsigned int *sensor_values, unsigned char readMode = 1);

    /// \brief Reads the sensors, provides calibrated values, and returns an
    /// estimated line position.
    ///
    /// \param[out] sensor_values A pointer to an array in which to store the
    /// raw sensor readings. There *MUST* be space for as many values as
    /// there were sensors specified in the constructor.
    ///
    /// \param readMode The emitter behavior during the read (see \ref
    /// read_modes). The default is `QTR_EMITTERS_ON`.
    ///
    /// \param white_line By default, this function assumes a dark line (high
    /// values) surrounded by white (low values).  If your line is light on
    /// black, set the optional argument `white_line` to true.  In this case,
    /// each sensor value will be replaced by (1000-value) before the averaging.
    ///
    /// This function operates the same as readCalibrated(), but also returns an
    /// estimated position of the robot with respect to a line. The
    /// estimate is made using a weighted average of the sensor indices
    /// multiplied by 1000, so that a return value of 0 indicates that
    /// the line is directly below sensor 0, a return value of 1000
    /// indicates that the line is directly below sensor 1, 2000
    /// indicates that it's below sensor 2000, etc.  Intermediate
    /// values indicate that the line is between two sensors.  The
    /// formula is (where \f$v_0\f$ represents the value from the
    /// first sensor):
    ///
    /// \f[
    /// {(0 \times v_0) + (1000 \times v_1) + (2000 \times v_2) + \cdots
    /// \over
    /// v_0 + v_1 + v_2 + \cdots}
    /// \f]
    int readLine(unsigned int *sensor_values, unsigned char readMode = 1, unsigned char white_line = 0);


    /// \name Calibrated minumum and maximum values
    ///
    /// These start at 1000 and 0, respectively, so that the very first sensor
    /// reading will update both of them.
    ///
    /// The pointers are unallocated until calibrate() is called, and then
    /// allocated to exactly the size required.  Depending on the readMode
    /// argument to calibrate, only the On or Off values may be allocated, as
    /// required.
    ///
    /// These variables are made public so that you can use them for your own
    /// calculations and do things like saving the values to EEPROM, performing
    /// sanity checking, etc.
    ///
    /// @{
    unsigned int *calibratedMinimumOn;
    unsigned int *calibratedMaximumOn;
    unsigned int *calibratedMinimumOff;
    unsigned int *calibratedMaximumOff;
    /// @}

    ~QTRSensors();

  protected:

    QTRSensors()
    {

    };

    void init(unsigned char *pins, unsigned char numSensors, unsigned char emitterPin);

    unsigned char *_pins;
    unsigned char _numSensors;
    unsigned char _emitterPin;
    unsigned int _maxValue; // the maximum value returned by this function
    int _lastValue;

  private:

    virtual void readPrivate(unsigned int *sensor_values) = 0;

    // Handles the actual calibration. calibratedMinimum and
    // calibratedMaximum are pointers to the requested calibration
    // arrays, which will be allocated if necessary.
    void calibrateOnOrOff(unsigned int **calibratedMinimum,
                          unsigned int **calibratedMaximum,
                          unsigned char readMode);
};



// Object to be used for QTR-1RC and QTR-8RC sensors
class QTRSensorsRC : public QTRSensors
{
  public:

    // if this constructor is used, the user must call init() before using
    // the methods in this class
    QTRSensorsRC();

    // this constructor just calls init()
    QTRSensorsRC(unsigned char* pins, unsigned char numSensors,
          unsigned int timeout = 4000, unsigned char emitterPin = 255);

    // The array 'pins' contains the Arduino pin number for each sensor.

    // 'numSensors' specifies the length of the 'pins' array (i.e. the
    // number of QTR-RC sensors you are using).  numSensors must be
    // no greater than 16.

    // 'timeout' specifies the length of time in microseconds beyond
    // which you consider the sensor reading completely black.  That is to say,
    // if the pulse length for a pin exceeds 'timeout', pulse timing will stop
    // and the reading for that pin will be considered full black.
    // It is recommended that you set timeout to be between 1000 and
    // 3000 us, depending on things like the height of your sensors and
    // ambient lighting.  Using timeout allows you to shorten the
    // duration of a sensor-reading cycle while still maintaining
    // useful analog measurements of reflectance

    // 'emitterPin' is the Arduino pin that controls the IR LEDs on the 8RC
    // modules.  If you are using a 1RC (i.e. if there is no emitter pin),
    // or if you just want the emitters on all the time and don't want to
    // use an I/O pin to control it, use a value of 255 (QTR_NO_EMITTER_PIN).
    void init(unsigned char* pins, unsigned char numSensors,
          unsigned int timeout = 2000, unsigned char emitterPin = 255);



  private:

    // Reads the sensor values into an array. There *MUST* be space
    // for as many values as there were sensors specified in the constructor.
    // Example usage:
    // unsigned int sensor_values[8];
    // sensors.read(sensor_values);
    // The values returned are a measure of the reflectance in microseconds.
    void readPrivate(unsigned int *sensor_values);
};



// Object to be used for QTR-1A and QTR-8A sensors
class QTRSensorsAnalog : public QTRSensors
{
  public:

    // if this constructor is used, the user must call init() before using
    // the methods in this class
    QTRSensorsAnalog();

    // this constructor just calls init()
    QTRSensorsAnalog(unsigned char* pins,
        unsigned char numSensors, unsigned char numSamplesPerSensor = 4,
        unsigned char emitterPin = 255);

    // the array 'pins' contains the Arduino analog pin assignment for each
    // sensor.  For example, if pins is {0, 1, 7}, sensor 1 is on
    // Arduino analog input 0, sensor 2 is on Arduino analog input 1,
    // and sensor 3 is on Arduino analog input 7.

    // 'numSensors' specifies the length of the 'analogPins' array (i.e. the
    // number of QTR-A sensors you are using).  numSensors must be
    // no greater than 16.

    // 'numSamplesPerSensor' indicates the number of 10-bit analog samples
    // to average per channel (i.e. per sensor) for each reading.  The total
    // number of analog-to-digital conversions performed will be equal to
    // numSensors*numSamplesPerSensor.  Note that it takes about 100 us to
    // perform a single analog-to-digital conversion, so:
    // if numSamplesPerSensor is 4 and numSensors is 6, it will take
    // 4 * 6 * 100 us = ~2.5 ms to perform a full readLine().
    // Increasing this parameter increases noise suppression at the cost of
    // sample rate.  The recommended value is 4.

    // 'emitterPin' is the Arduino pin that controls the IR LEDs on the 8RC
    // modules.  If you are using a 1RC (i.e. if there is no emitter pin),
    // or if you just want the emitters on all the time and don't want to
    // use an I/O pin to control it, use a value of 255 (QTR_NO_EMITTER_PIN).
    void init(unsigned char* analogPins, unsigned char numSensors,
        unsigned char numSamplesPerSensor = 4, unsigned char emitterPin = 255);



  private:

    // Reads the sensor values into an array. There *MUST* be space
    // for as many values as there were sensors specified in the constructor.
    // Example usage:
    // unsigned int sensor_values[8];
    // sensors.read(sensor_values);
    // The values returned are a measure of the reflectance in terms of a
    // 10-bit ADC average with higher values corresponding to lower
    // reflectance (e.g. a black surface or a void).
    void readPrivate(unsigned int *sensor_values);

    unsigned char _numSamplesPerSensor;
};
# 13 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4LineSensors.h" 2

/** \brief The pin number for the standard pin that is used to read line sensor
 * 1, the left-most sensor. */
static const uint8_t SENSOR_DOWN1 = 18;

/** \brief The pin number for the standard pin that is used to read line sensor
 * 2, the sensor second from the left. */
static const uint8_t SENSOR_DOWN2 = 20;

/** \brief The pin number for standard pin that is used to read line sensor 3,
 * the middle sensor. */
static const uint8_t SENSOR_DOWN3 = 21;

/** \brief The pin number for the standard pin that is used to read line sensor
 * 4, the sensor second from the right. */
static const uint8_t SENSOR_DOWN4 = 4;

/** \brief The pin number for the standard pin that is used to read line sensor
 * 5, the right-most sensor. */
static const uint8_t SENSOR_DOWN5 = 12;

/** \brief The pin number for the standard pin that is used to enable or disable
 * the IR emitters of the line sensors. */
static const uint8_t SENSOR_LEDON = 11;

/** \brief Gets readings from the five down-facing line sensors on the front
 * sensor array.
 *
 * The functions that this class inherits from QTRSensorsRC, such as read() and
 * calibrate(), are also documented in the
 * [user's guide for the %QTRSensors library](https://www.pololu.com/docs/0J19).
 * %QTRSensors is a separate Arduino library with a [separate GitHub
 * repository](https://github.com/pololu/qtr-sensors-arduino), but we include a
 * copy of it in the Zumo32U4 library since it is needed for the
 * Zumo32U4LineSensors class. (Note that the included copy of QTRSensors is an
 * older version with some differences from the latest standalone QTRSensors
 * library.)
 */
class Zumo32U4LineSensors : public QTRSensorsRC
{
public:

    /** \brief Minimal constructor.
     *
     * If you use this (i.e. by not providing any arguments when you create the
     * Zumo32U4ProximitySensors object), then you will have to call
     * initThreeSensors(), initFiveSensors(), or init() before using the
     * functions in this class. */
    Zumo32U4LineSensors() { }

    /** \brief Constructor that takes pin arguments.
     *
     * This constructor calls init() with the specified arguments. */
    Zumo32U4LineSensors(uint8_t * pins, uint8_t numSensors,
        uint8_t emitterPin = SENSOR_LEDON)
    {
        init(pins, numSensors, emitterPin);
    }

    /** \brief Configures this object to use just three line sensors.
     *
     * This function configures this object to just use line sensors 1, 3, and
     * 5. */
    void initThreeSensors(uint8_t emitterPin = SENSOR_LEDON)
    {
        uint8_t pins[] = { SENSOR_DOWN1, SENSOR_DOWN3, SENSOR_DOWN5 };
        init(pins, sizeof(pins), 2000, emitterPin);
    }

    /** \brief Configures this object to use all five line sensors.
     *
     * For this configuration to work, jumpers on the front sensor array must be
     * installed in order to connect pin 20 to DN2 and connect pin 4 to DN4. */
    void initFiveSensors(uint8_t emitterPin = SENSOR_LEDON)
    {
        uint8_t pins[] = { SENSOR_DOWN1, SENSOR_DOWN2, SENSOR_DOWN3,
                           SENSOR_DOWN4, SENSOR_DOWN5 };
        init(pins, sizeof(pins), 2000, emitterPin);
    }

    /** \brief Configures this object to use a custom set of pins.
     *
     * \param pins A pointer to an array with the pin numbers for the sensors.
     * \param numSensors The number of sensors.
     * \param timeout Specifies the length of time in microseconds beyond
     *   which you consider the sensor reading completely black.
     * \param emitterPin The number of the pin that controls the
     *   emitters for the line sensors.  You can specify a value of
     *   QTR_NO_EMITTER_PIN for this parameter if you want this object to not do
     *   anything to the emitters. */
    void init(uint8_t * pins, uint8_t numSensors,
        uint16_t timeout = 2000, uint8_t emitterPin = SENSOR_LEDON)
    {
        QTRSensorsRC::init(pins, numSensors, timeout, emitterPin);
    }
};
# 24 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4Motors.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/*! \file Zumo32U4Motors.h */

       



/*! \brief Controls motor speed and direction on the Zumo 32U4.
 *
 * This library uses Timer 1, so it will conflict with any other libraries using
 * that timer. */
class Zumo32U4Motors
{
  public:

    /** \brief Flips the direction of the left motor.
     *
     * You can call this function with an argument of \c true if the left motor
     * of your Zumo was not installed in the standard way and you want a
     * positive speed argument to correspond to forward movement.
     *
     * \param flip If true, then positive motor speeds will correspond to the
     * direction pin being high.  If false, then positive motor speeds will
     * correspond to the direction pin being low.
     */
    static void flipLeftMotor(bool flip);

    /** \brief Flips the direction of the right motor.
     *
     * You can call this function with an argument of \c true if the right motor
     * of your Zumo was not installed in the standard way and you want a
     * positive speed argument to correspond to forward movement.
     *
     * \param flip If true, then positive motor speeds will correspond to the
     * direction pin being high.  If false, then positive motor speeds will
     * correspond to the direction pin being low. */
    static void flipRightMotor(bool flip);

    /** \brief Sets the speed for the left motor.
     *
     * \param speed A number from -400 to 400 representing the speed and
     * direction of the left motor.  Values of -400 or less result in full speed
     * reverse, and values of 400 or more result in full speed forward. */
    static void setLeftSpeed(int16_t speed);

    /** \brief Sets the speed for the right motor.
     *
     * \param speed A number from -400 to 400 representing the speed and
     * direction of the right motor. Values of -400 or less result in full speed
     * reverse, and values of 400 or more result in full speed forward. */
    static void setRightSpeed(int16_t speed);

    /** \brief Sets the speeds for both motors.
     *
     * \param leftSpeed A number from -400 to 400 representing the speed and
     * direction of the right motor. Values of -400 or less result in full speed
     * reverse, and values of 400 or more result in full speed forward.
     * \param rightSpeed A number from -400 to 400 representing the speed and
     * direction of the right motor. Values of -400 or less result in full speed
     * reverse, and values of 400 or more result in full speed forward. */
    static void setSpeeds(int16_t leftSpeed, int16_t rightSpeed);

  private:

    static inline void init()
    {
        static bool initialized = false;

        if (!initialized)
        {
            initialized = true;
            init2();
        }
    }

    static void init2();
};
# 25 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 1
// Copyright (C) Pololu Corporation.  See www.pololu.com for details.

       

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 6 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 2


# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h" 1
// Copyright (C) Pololu Corporation.  See www.pololu.com for details.

/// @file PololuSH1106Main.h

       

# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h" 1
// Copyright (C) Pololu Corporation.  See www.pololu.com for details.

/// @file PololuOLEDHelpers.h

       

# 1 "C:\\Users\\Maria\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 8 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h" 2

/// @brief This array defines the appearance of characters 32 through 255.
///
/// It is defined using the "weak" attribute, which means you can supply a
/// definition in your own program if you want to override the default font.
extern const 
# 13 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h" 3
            __attribute__((__progmem__)) 
# 13 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h"
                    uint8_t pololuOledFont[][5] ;

namespace PololuOLEDHelpers {

/// @cond

static const uint8_t repeatBitsTable[16] 
# 19 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h" 3
                                        __attribute__((__progmem__)) 
# 19 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h"
                                                = {
  0b00000000,
  0b00000011,
  0b00001100,
  0b00001111,
  0b00110000,
  0b00110011,
  0b00111100,
  0b00111111,
  0b11000000,
  0b11000011,
  0b11001100,
  0b11001111,
  0b11110000,
  0b11110011,
  0b11111100,
  0b11111111
};

static inline uint8_t repeatBits(uint8_t d)
{
  return 
# 40 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h" 3
        (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(
# 40 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h"
        repeatBitsTable + d
# 40 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h" 3
        )); uint8_t __result; __asm__ __volatile__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; }))
# 40 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuOLEDHelpers.h"
                                          ;
}

/// @endcond


}
# 8 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h" 2
# 18 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h"
/// @brief This class makes it easy to display text and graphics on a
/// 128x64 SH1106 OLED.
///
/// @section core Core class
///
/// Instead of passing pin numbers to this class to specify what pins your
/// OLED is on, you pass a core class as a first template parameter.  The
/// core class must implement the following public functions which take care of
/// communication with the SH1106 at a low level:
///
/// - void initPins();
/// - void reset();
/// - void sh1106TransferStart();
/// - void sh1106TransferEnd();
/// - void sh1106CommandMode();
/// - void sh1106DataMode();
/// - void sh1106Write(uint8_t);
///
/// For an example implementation of a core class, see PololuSH1106Core.
///
/// @section text-buffer Text buffer
///
/// This class holds a text buffer to keep track of what text to show on the
/// screen.  The clear(), write(), and print() functions all write to the
/// text buffer.
///
/// This class inherits from the Arduino Print class
/// (via PololuSH1106Main), so you can call print() with a variety of arguments.
/// See the [Arduino print() documentation](http://arduino.cc/en/Serial/Print)
/// for more information.
///
/// The default contents of the text buffer, and the contents after you call
/// clear(), consists entirely of space characters.
///
/// You can also use the getLinePointer() function to get a pointer
/// to a specific line in the text buffer, and then manipulate the characters
/// using arbitrary code.
///
/// @section font Font
///
/// This library maps each character code from 0 to 255 to a corresponding
/// 8x5 image.
///
/// Characters from 0 to 7 are custom characters: they are blank by default, but
/// you can use loadCustomCharacter() or loadCustomCharacterFromRam() to
/// specify their appearance.
///
/// Characters 8 through 31 are hardcoded to be blank.
///
/// Characters 32 through 255 come from pololuOledFont.
///
/// It is possible to change the appearance (but not the size) of the font used
/// for characters 32 through 255 without modifying this library.
/// To do so, simply copy the file font.cpp into your sketch directory,
/// remove `__attribute__((weak))`, and then make your changes.
///
/// @section graphics-buffer Graphics buffer
///
/// This class can be configured to hold a pointer to an external 1024-byte
/// graphics buffer that will get mixed (XORed) with the text.
/// Each byte of the graphics buffer represents a 1x8 vertical column of pixels,
/// with the least-significant bit holding the top-most pixel.
/// The first byte represents the pixels in the upper left corner of the screen,
/// and the bytes in the buffer are ordered left-to-right, then top-to-bottom.
/// (So byte at offset 128 is displayed immediately below the byte at offset 0.)
///
/// You can define and manipulate this graphics buffer using your own code, or
/// you can use a third-party library such as Adafruit_SSD1306 to do it.
///
/// @section lcd-compat HD44780 LCD class compatibility
///
/// This class implements clear(), gotoXY(), write(),
/// print() (provided by the Arduino Print class),
/// loadCustomCharacter(), and loadCustomCharacterFromRam(),
/// so a class based on PololuSH1106Main can be used as a
/// a drop-in replacement for a class based on PololuHD44780Base from the
/// [PololuHD44780 library](https://github.com/pololu/pololu-hd44780-arduino)
/// in most applications.
///
/// However, one difference between the SH1106 OLED and the HD44780 LCD is that
/// if you have an application that frequently clears the screen and then
/// redraws it, you will probably notice a flickering effect due to the fast
/// response time of the OLED.
/// To solve this, you can call noAutoDisplay() before clear() to tell
/// the library to refrain from writing to the display automatically.
/// Then, when you are done using functions such as clear(), gotoXY(), write(),
/// and print() to update the desired text on the screen, you can call
/// display() to write the new contents to the entire screen without flicker.
///
/// The display() function turns auto-display mode back on, so you will need to
/// call noAutoDisplay() again whenever you want to do a flickerless update.
template<class C> class PololuSH1106Main : public Print
{
public:

  PololuSH1106Main()
  {
    memset(textBuffer, ' ', sizeof(textBuffer));
    setLayout8x2();
  }

  //// Low-level helpers
private:

  void clearDisplayRam()
  {
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0x00 | 2);
    for (uint8_t page = 0; page < 8; page++)
    {
      core.sh1106CommandMode();
      core.sh1106Write(0xB0 | page);
      core.sh1106Write(0x10 | 0);
      core.sh1106DataMode();
      for (uint8_t i = 0; i < 128; i++)
      {
        core.sh1106Write(0);
      }
    }
    core.sh1106TransferEnd();
    clearDisplayRamOnNextDisplay = false;
  }

  void configureDefault()
  {
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0xA0 | 1); // flip horizontally
    core.sh1106Write(0xC0 | 8); // flip vertically
    core.sh1106Write(0x81);
    core.sh1106Write(0xFF); // maximum brightness
    core.sh1106Write(0xAE | 1);
    core.sh1106TransferEnd();
  }

  //////// Initialization and settings

private:

  void init2()
  {
    core.initPins();
    core.reset();
    clearDisplayRam();
    configureDefault();
    initialized = true;
  }

public:

  /// @brief Initializes the OLED if it has not already been initialized.
  ///
  /// This resets the OLED, clears the contents of the OLED RAM, sets some
  /// default settings, and turns on the display.
  ///
  /// Most users do not have to call this, because it is automatically called
  /// by any public function in this class that writes to the OLED.
  void init() { if (!initialized) { init2(); } }

  /// @brief Reinitializes the OLED and its settings.
  ///
  /// This redoes the initialization that is automatically done by init() the
  /// first time any function is called that writes to the OLED.
  ///
  /// This can be useful if you want to plug the OLED into the robot after the
  /// library has already been initialized.
  ///
  /// The screen will be blank after calling this, so you might want to call
  /// display() to show the graphics/text that you were shown before.
  void reinitialize()
  {
    init2();
  }

  /// @brief Configures the OLED to invert all the pixels, resulting in
  /// black-on-white text.
  void invert()
  {
    init();
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0xA6 | 1);
    core.sh1106TransferEnd();
  }

  /// @brief Configures the OLED to not invert its pixels (the default).
  void noInvert()
  {
    init();
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0xA6 | 0);
    core.sh1106TransferEnd();
  }

  /// @brief Configures the OLED to rotate its display 180 degrees from normal.
  void rotate180()
  {
    init();
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0xA0);
    core.sh1106Write(0xC0);
    core.sh1106TransferEnd();
  }

  /// @brief Configures the OLED to use the default orientation.
  ///
  /// This is the orientation that results in the text shown on the
  /// [Graphical OLED Display: 128x64, 1.3", White, SPI][3760]
  /// from Pololu being the same orientation as the pin labels.
  ///
  /// [3760]: https://www.pololu.com/product/3760
  void noRotate()
  {
    init();
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0xA0 | 1);
    core.sh1106Write(0xC0 | 8);
    core.sh1106TransferEnd();
  }

  /// @brief Sets the contrast (i.e. brightness) of the OLED.
  ///
  /// @param contrast A number between 0 (darkest, but still visible) and
  /// 255 (brightest, default).
  void setContrast(uint8_t contrast)
  {
    init();
    core.sh1106TransferStart();
    core.sh1106CommandMode();
    core.sh1106Write(0x81);
    core.sh1106Write(contrast);
    core.sh1106TransferEnd();
  }

  /// @brief Configures this library to use its default layout, which allows for
  /// 8 columns and 2 rows of text.
  void setLayout8x2()
  {
    graphicsBuffer = nullptr;
    displayFunction = &PololuSH1106Main::display8x2Text;
    displayPartialFunction = &PololuSH1106Main::display8x2TextPartial;
    clearDisplayRamOnNextDisplay = true;
  }

  /// @brief Configures this library to use a layout with 8 columns and
  /// 2 rows of text, XORed with a graphics buffer.
  ///
  /// @param graphics A pointer to a 1024-byte graphics buffer.
  void setLayout8x2WithGraphics(const uint8_t * graphics)
  {
    graphicsBuffer = graphics;
    displayFunction = &PololuSH1106Main::display8x2TextAndGraphics;
    displayPartialFunction = &PololuSH1106Main::display8x2TextAndGraphicsPartial;
    clearDisplayRamOnNextDisplay = true;
  }

  /// @brief Configures this library to use a layout with
  /// 11 columns and 4 rows of text.
  ///
  /// Note that the last column of text will have one column of pixels
  /// cut off.  You can choose not to use this column or only use it
  /// for narrow characters such as punctuation.
  void setLayout11x4()
  {
    graphicsBuffer = nullptr;
    displayFunction = &PololuSH1106Main::display11x4Text;
    displayPartialFunction = &PololuSH1106Main::display11x4TextPartial;
    clearDisplayRamOnNextDisplay = true;
  }

  /// @brief Configures this library to use a layout with 11 columns and
  /// 4 rows of text, XORed with a graphics buffer.
  ///
  /// @param graphics A pointer to a 1024-byte graphics buffer.
  ///
  /// Note that the last column of text will have one column of pixels
  /// cut off.  You can choose not to use this column or only use it
  /// for narrow characters such as punctuation.
  void setLayout11x4WithGraphics(const uint8_t * graphics)
  {
    graphicsBuffer = graphics;
    displayFunction = &PololuSH1106Main::display11x4TextAndGraphics;
    displayPartialFunction = &PololuSH1106Main::display11x4TextAndGraphicsPartial;
    clearDisplayRamOnNextDisplay = true;
  }

  /// @brief Configures this library to use a layout with
  /// 21 columns and 8 rows of text.
  void setLayout21x8()
  {
    graphicsBuffer = nullptr;
    displayFunction = &PololuSH1106Main::display21x8Text;
    displayPartialFunction = &PololuSH1106Main::display21x8TextPartial;
    clearDisplayRamOnNextDisplay = true;
  }

  /// @brief Configures this library to use a layout with 21 columns and
  /// 8 rows of text, XORed with a graphics buffer.
  ///
  /// @param graphics A pointer to a 1024-byte graphics buffer.
  void setLayout21x8WithGraphics(const uint8_t * graphics)
  {
    graphicsBuffer = graphics;
    displayFunction = &PololuSH1106Main::display21x8TextAndGraphics;
    displayPartialFunction = &PololuSH1106Main::display21x8TextAndGraphicsPartial;
    clearDisplayRamOnNextDisplay = true;
  }

  //////// Display routines

private:

  uint8_t getGlyphColumn(uint8_t glyph, uint8_t pixelX)
  {
    if (glyph >= 0x20)
    {
      return 
# 338 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h" 3
            (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(
# 338 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h"
            &pololuOledFont[glyph - 0x20][pixelX]
# 338 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h" 3
            )); uint8_t __result; __asm__ __volatile__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; }))
# 338 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h"
                                                                ;
    }
    else if (glyph < 8)
    {
      return customChars[glyph][pixelX];
    }
    else
    {
      return 0;
    }
  }

  void writePageGraphics(uint8_t page)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | 0);
    core.sh1106Write(0x00 | 2);
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128;
    for (uint8_t x = 0; x < 128; x++) { core.sh1106Write(*g++); }
  }

  void writeSegmentUpperText(uint8_t page, uint8_t columnAddr,
    const uint8_t * text, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | (columnAddr >> 4));
    core.sh1106Write(0x00 | (columnAddr & 0xF));
    core.sh1106DataMode();
    for (uint8_t i = 0; i < textLength; i++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        uint8_t column = PololuOLEDHelpers::repeatBits(
          getGlyphColumn(glyph, pixelX) & 0xF);
        core.sh1106Write(column);
        core.sh1106Write(column);
      }
      core.sh1106Write(0);
      core.sh1106Write(0);
    }
  }

  void writeSegmentLowerText(uint8_t page, uint8_t columnAddr,
    const uint8_t * text, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | (columnAddr >> 4));
    core.sh1106Write(0x00 | (columnAddr & 0xF));
    core.sh1106DataMode();
    for (uint8_t i = 0; i < textLength; i++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        uint8_t column = PololuOLEDHelpers::repeatBits(
          getGlyphColumn(glyph, pixelX) >> 4);
        core.sh1106Write(column);
        core.sh1106Write(column);
      }
      core.sh1106Write(0);
      core.sh1106Write(0);
    }
  }

  void writeSegmentUpperTextAndGraphics(uint8_t page, uint8_t columnAddr,
    const uint8_t * text, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | (columnAddr >> 4));
    core.sh1106Write(0x00 | (columnAddr & 0xF));
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128 + (columnAddr - 2);
    for (uint8_t i = 0; i < textLength; i++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        uint8_t column = PololuOLEDHelpers::repeatBits(
          getGlyphColumn(glyph, pixelX) & 0xF);
        core.sh1106Write(column ^ *g++);
        core.sh1106Write(column ^ *g++);
      }
      core.sh1106Write(*g++);
      core.sh1106Write(*g++);
    }
  }

  void writeSegmentLowerTextAndGraphics(uint8_t page, uint8_t columnAddr,
    const uint8_t * text, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | (columnAddr >> 4));
    core.sh1106Write(0x00 | (columnAddr & 0xF));
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128 + (columnAddr - 2);
    for (uint8_t i = 0; i < textLength; i++)
    {
      uint8_t glyph = *text++;
      // Note the extra check for g < graphicsBuffer + 1023, which avoids
      // reading past the end of the graphics array in 11x4 mode.
      for (uint8_t pixelX = 0; pixelX < 5 && g < graphicsBuffer + 1023; pixelX++)
      {
        uint8_t column = PololuOLEDHelpers::repeatBits(
          getGlyphColumn(glyph, pixelX) >> 4);
        core.sh1106Write(column ^ *g++);
        core.sh1106Write(column ^ *g++);
      }
      if(g < graphicsBuffer + 1023)
      {
        core.sh1106Write(*g++);
        core.sh1106Write(*g++);
      }
    }
  }

  void writePageUpperTextAndGraphics(uint8_t page, const uint8_t * text,
    uint8_t leftMargin, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | 0);
    core.sh1106Write(0x00 | 2);
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128;
    for (uint8_t i = 0; i < leftMargin; i++) { core.sh1106Write(*g++); }
    for (uint8_t textX = 0; textX < textLength; textX++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        uint8_t column = PololuOLEDHelpers::repeatBits(
          getGlyphColumn(glyph, pixelX) & 0xF);
        core.sh1106Write(column ^ *g++);
        core.sh1106Write(column ^ *g++);
       }
       core.sh1106Write(*g++);
       core.sh1106Write(*g++);
    }
    for (uint8_t x = leftMargin + textLength * 12; x < 128; x++)
    {
      core.sh1106Write(*g++);
    }
  }

  void writePageLowerTextAndGraphics(uint8_t page, const uint8_t * text,
    uint8_t leftMargin, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | 0);
    core.sh1106Write(0x00 | 2);
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128;
    for (uint8_t i = 0; i < leftMargin; i++) { core.sh1106Write(*g++); }
    for (uint8_t textX = 0; textX < textLength; textX++)
    {
      uint8_t glyph = *text++;
      // Note the extra check for g < graphicsBuffer + 1023, which avoids
      // reading past the end of the graphics array in 11x4 mode.
      for (uint8_t pixelX = 0; pixelX < 5 && g < graphicsBuffer + 1023; pixelX++)
      {
        uint8_t column = PololuOLEDHelpers::repeatBits(
          getGlyphColumn(glyph, pixelX) >> 4);
        core.sh1106Write(column ^ *g++);
        core.sh1106Write(column ^ *g++);
       }
       if(g < graphicsBuffer + 1023)
       {
         core.sh1106Write(*g++);
         core.sh1106Write(*g++);
       }
    }
    for (uint8_t x = leftMargin + textLength * 12; x < 128; x++)
    {
      core.sh1106Write(*g++);
    }
  }

  void writeSegmentText(uint8_t page, uint8_t columnAddr,
    const uint8_t * text, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | (columnAddr >> 4));
    core.sh1106Write(0x00 | (columnAddr & 0xF));
    core.sh1106DataMode();
    for (uint8_t i = 0; i < textLength; i++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        core.sh1106Write(getGlyphColumn(glyph, pixelX));
      }
      core.sh1106Write(0);
    }
  }

  void writeSegmentTextAndGraphics(uint8_t page, uint8_t columnAddr,
    const uint8_t * text, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | (columnAddr >> 4));
    core.sh1106Write(0x00 | (columnAddr & 0xF));
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128 + (columnAddr - 2);
    for (uint8_t i = 0; i < textLength; i++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        core.sh1106Write(getGlyphColumn(glyph, pixelX) ^ *g++);
      }
      core.sh1106Write(*g++);
    }
  }

  void writePageTextAndGraphics(uint8_t page, const uint8_t * text,
    uint8_t leftMargin, uint8_t textLength)
  {
    core.sh1106CommandMode();
    core.sh1106Write(0xB0 | page);
    core.sh1106Write(0x10 | 0);
    core.sh1106Write(0x00 | 2);
    core.sh1106DataMode();
    const uint8_t * g = graphicsBuffer + page * 128;
    for (uint8_t i = 0; i < leftMargin; i++) { core.sh1106Write(*g++); }
    for (uint8_t textX = 0; textX < textLength; textX++)
    {
      uint8_t glyph = *text++;
      for (uint8_t pixelX = 0; pixelX < 5; pixelX++)
      {
        core.sh1106Write(getGlyphColumn(glyph, pixelX) ^ *g++);
       }
       core.sh1106Write(*g++);
    }
    for (uint8_t x = leftMargin + textLength * 6; x < 128; x++)
    {
      core.sh1106Write(*g++);
    }
  }


  //// 8x2 layout //////////////////////////////////////////////////////////////
  // Character size:                 10x16
  // Character horizontal margin:    2
  // Screen left and right margins:  (128 - 8*10 - 7*2)/2 = 17
  // Line 0:                         pages 2 and 3
  // Line 1:                         pages 5 and 6

  void display8x2TextPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    if (x >= 8 || y >= 2) { return; }
    if (width > (uint8_t)(8 - x)) { width = 8 - x; }
    if (width == 0) { return; }

    const uint8_t page = 2 + y * 3;
    const uint8_t columnAddr = 2 + 17 + x * 12;
    const uint8_t * const text = getLinePointer(y) + x;

    core.sh1106TransferStart();
    writeSegmentUpperText(page, columnAddr, text, width);
    writeSegmentLowerText(page + 1, columnAddr, text, width);
    core.sh1106TransferEnd();
  }

  void display8x2Text()
  {
    core.sh1106TransferStart();
    writeSegmentUpperText(2, 2 + 17, getLinePointer(0), 8);
    writeSegmentLowerText(3, 2 + 17, getLinePointer(0), 8);
    writeSegmentUpperText(5, 2 + 17, getLinePointer(1), 8);
    writeSegmentLowerText(6, 2 + 17, getLinePointer(1), 8);
    core.sh1106TransferEnd();
  }

  void display8x2TextAndGraphicsPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    if (x >= 8 || y >= 2) { return; }
    if (width > (uint8_t)(8 - x)) { width = 8 - x; }
    if (width == 0) { return; }

    const uint8_t page = 2 + y * 3;
    const uint8_t columnAddr = 2 + 17 + x * 12;
    uint8_t * const text = getLinePointer(y) + x;

    core.sh1106TransferStart();
    writeSegmentUpperTextAndGraphics(page, columnAddr, text, width);
    writeSegmentLowerTextAndGraphics(page + 1, columnAddr, text, width);
    core.sh1106TransferEnd();
  }

  void display8x2TextAndGraphics()
  {
    core.sh1106TransferStart();
    writePageGraphics(0);
    writePageGraphics(1);
    writePageUpperTextAndGraphics(2, getLinePointer(0), 17, 8);
    writePageLowerTextAndGraphics(3, getLinePointer(0), 17, 8);
    writePageGraphics(4);
    writePageUpperTextAndGraphics(5, getLinePointer(1), 17, 8);
    writePageLowerTextAndGraphics(6, getLinePointer(1), 17, 8);
    writePageGraphics(7);
    core.sh1106TransferEnd();
  }

  //// 11x4 layout /////////////////////////////////////////////////////////////
  //   Character size:               10x16
  //   Character horizontal margin:  2
  //   Screen left margin:           0
  //   Screen right margin:          -2  (or 10 if you don't use the last column; off center: more room for graphics)
  //   Line 0:                       pages 0 and 1
  //   Line 1:                       pages 2 and 3
  //   Line 3:                       pages 4 and 5
  //   Line 4:                       pages 6 and 7

  void display11x4TextPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    if (x >= 11 || y >= 4) { return; }
    if (width > (uint8_t)(11 - x)) { width = 11 - x; }
    if (width == 0) { return; }

    const uint8_t page = y * 2;
    const uint8_t columnAddr = 2 + x * 12;
    const uint8_t * const textStart = getLinePointer(y) + x;

    core.sh1106TransferStart();
    writeSegmentUpperText(page, columnAddr, textStart, width);
    writeSegmentLowerText(page + 1, columnAddr, textStart, width);
    core.sh1106TransferEnd();
  }

  void display11x4Text()
  {
    core.sh1106TransferStart();
    writeSegmentUpperText(0, 2, getLinePointer(0), 11);
    writeSegmentLowerText(1, 2, getLinePointer(0), 11);
    writeSegmentUpperText(2, 2, getLinePointer(1), 11);
    writeSegmentLowerText(3, 2, getLinePointer(1), 11);
    writeSegmentUpperText(4, 2, getLinePointer(2), 11);
    writeSegmentLowerText(5, 2, getLinePointer(2), 11);
    writeSegmentUpperText(6, 2, getLinePointer(3), 11);
    writeSegmentLowerText(7, 2, getLinePointer(3), 11);
    core.sh1106TransferEnd();
  }

  void display11x4TextAndGraphicsPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    if (x >= 11 || y >= 4) { return; }
    if (width > (uint8_t)(10 - x)) { width = 11 - x; }
    if (width == 0) { return; }

    const uint8_t page = y * 2;
    const uint8_t columnAddr = 2 + x * 12;
    uint8_t * const text = getLinePointer(y) + x;

    core.sh1106TransferStart();
    writeSegmentUpperTextAndGraphics(page, columnAddr, text, width);
    writeSegmentLowerTextAndGraphics(page + 1, columnAddr, text, width);
    core.sh1106TransferEnd();
  }

  void display11x4TextAndGraphics()
  {
    core.sh1106TransferStart();
    writePageUpperTextAndGraphics(0, getLinePointer(0), 0, 11);
    writePageLowerTextAndGraphics(1, getLinePointer(0), 0, 11);
    writePageUpperTextAndGraphics(2, getLinePointer(1), 0, 11);
    writePageLowerTextAndGraphics(3, getLinePointer(1), 0, 11);
    writePageUpperTextAndGraphics(4, getLinePointer(2), 0, 11);
    writePageLowerTextAndGraphics(5, getLinePointer(2), 0, 11);
    writePageUpperTextAndGraphics(6, getLinePointer(3), 0, 11);
    writePageLowerTextAndGraphics(7, getLinePointer(3), 0, 11);
    core.sh1106TransferEnd();
  }

  //// 21x8 layout /////////////////////////////////////////////////////////////
  //   Character size:               5x8
  //   Character horizontal margin:  1
  //   Screen left margin:           0
  //   Screen right margin:          3  (off center: more room for graphics)
  //   Line number = Page number

  void display21x8TextPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    if (x >= 21 || y >= 8) { return; }
    if (width > (uint8_t)(21 - x)) { width = 21 - x; }
    if (width == 0) { return; }

    const uint8_t columnAddr = 2 + x * 6;
    const uint8_t * const textStart = getLinePointer(y) + x;

    core.sh1106TransferStart();
    writeSegmentText(y, columnAddr, textStart, width);
    core.sh1106TransferEnd();
  }

  void display21x8Text()
  {
    core.sh1106TransferStart();
    writeSegmentText(0, 2, getLinePointer(0), 21);
    writeSegmentText(1, 2, getLinePointer(1), 21);
    writeSegmentText(2, 2, getLinePointer(2), 21);
    writeSegmentText(3, 2, getLinePointer(3), 21);
    writeSegmentText(4, 2, getLinePointer(4), 21);
    writeSegmentText(5, 2, getLinePointer(5), 21);
    writeSegmentText(6, 2, getLinePointer(6), 21);
    writeSegmentText(7, 2, getLinePointer(7), 21);
    core.sh1106TransferEnd();
  }

  void display21x8TextAndGraphicsPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    if (x >= 21 || y >= 8) { return; }
    if (width > (uint8_t)(21 - x)) { width = 21 - x; }
    if (width == 0) { return; }

    const uint8_t columnAddr = 2 + x * 6;
    uint8_t * const text = getLinePointer(y) + x;

    core.sh1106TransferStart();
    writeSegmentTextAndGraphics(y, columnAddr, text, width);
    core.sh1106TransferEnd();
  }

  void display21x8TextAndGraphics()
  {
    core.sh1106TransferStart();
    writePageTextAndGraphics(0, getLinePointer(0), 0, 21);
    writePageTextAndGraphics(1, getLinePointer(1), 0, 21);
    writePageTextAndGraphics(2, getLinePointer(2), 0, 21);
    writePageTextAndGraphics(3, getLinePointer(3), 0, 21);
    writePageTextAndGraphics(4, getLinePointer(4), 0, 21);
    writePageTextAndGraphics(5, getLinePointer(5), 0, 21);
    writePageTextAndGraphics(6, getLinePointer(6), 0, 21);
    writePageTextAndGraphics(7, getLinePointer(7), 0, 21);
    core.sh1106TransferEnd();
  }

public:

  /// @brief Writes all of the text/graphics to the OLED.
  ///
  /// This also turns on auto display mode, undoing the effect of
  /// noAutoDisplay().
  ///
  /// Note that this function does not always write to the entire display:
  /// for text-only modes, it will normally only write to the portion of the
  /// screen containing text.
  void display()
  {
    init();
    if (clearDisplayRamOnNextDisplay) { clearDisplayRam(); }
    ((*this).*(displayFunction))();
    disableAutoDisplay = false;
  }

  /// @brief Writes a certain region of text/graphics to the OLED.
  ///
  /// This function is like display(), but it only writes text/graphics to the
  /// OLED which are in a region corresponding to one or more consecutive
  /// characters in a line of text.
  /// This function cannot write arbitrary regions.
  ///
  /// Most users will not need to call this because the clear(), write(), and
  /// print() functions automatically write to the display as needed.
  /// You can also use the display() function to write all of the
  /// text/graphics.
  ///
  /// However, this function is useful to users who have disabled auto
  /// display mode, or are directly writing to the text buffer, and want an
  /// efficient way to update part of the screen.
  ///
  /// @param x The row number of the text to update (0 means top row).
  /// @param y The column number of the first character to update
  ///          (0 means left-most column).
  /// @param width The number of characters to update.
  void displayPartial(uint8_t x, uint8_t y, uint8_t width)
  {
    init();
    if (clearDisplayRamOnNextDisplay) { clearDisplayRam(); }
    ((*this).*(displayPartialFunction))(x, y, width);
  }


  //////// Text

  /// @brief Turns off auto display mode.
  ///
  /// This causes the clear(), write(), and print() functions to not perform
  /// any I/O or write any data to the OLED.
  ///
  /// Calling display() will write to the display and turn auto display mode
  /// on again.
  void noAutoDisplay()
  {
    disableAutoDisplay = true;
  }

  /// @brief Gets a pointer to a line of text in this library's text buffer.
  ///
  /// This is for advanced users who want to use their own code to directly
  /// manipulate the text buffer.
  ///
  /// The returned pointer will point to a region of memory at least 21 bytes
  /// long that holds the specified line of text.  You can perform arbitrary
  /// operations on these bytes.
  ///
  /// Note that you should not assume anything about where the lines are in
  /// relation to each other, and you should not assume it is safe to write
  /// beyond the 21st byte of a line.
  ///
  /// Note that functions like snprintf will add a null (0) character at the
  /// end of their output.  This is probably undesirable if you have configured
  /// character 0 to be a custom character using loadCustomCharacter().
  /// Also, it means that the maximum content they can safely write to the text
  /// buffer is limited to 19 characters.
  uint8_t * getLinePointer(uint8_t line)
  {
    return textBuffer + line * textBufferWidth;
  }

  /// @brief Changes the location of the text cursor.
  ///
  /// This function changes the text cursor, which is the location of the text
  /// that will be overwritten by the next call to write() or print().
  ///
  /// @param x The column number (0 means left-most column).
  /// @param y The row number (0 means top row).
  void gotoXY(uint8_t x, uint8_t y)
  {
    textCursorX = x;
    textCursorY = y;
  }

  /// @brief Gets the X coordinate of the text cursor.
  uint8_t getX() { return textCursorX; }

  /// @brief Gets the Y coordinate of the text cursor.
  uint8_t getY() { return textCursorY; }

  /// @brief Moves all the text up one row. (Does not change the cursor position.)
  void scrollDisplayUp()
  {
    memmove(textBuffer, textBuffer + textBufferWidth, textBufferWidth * (textBufferHeight - 1));
    memset(textBuffer + textBufferWidth * (textBufferHeight - 1), ' ', textBufferWidth);
    if (!disableAutoDisplay) { display(); }
  }

  /// @brief Clears the text and resets the text cursor to the upper left.
  ///
  /// After calling this function, the text buffer will consist entirely of
  /// space characters.
  ///
  /// By default, this function also calls display() to write these changes
  /// to the OLED, but noAutoDisplay() disables that behavior.
  void clear()
  {
    memset(textBuffer, ' ', sizeof(textBuffer));
    gotoXY(0, 0);
    if (!disableAutoDisplay) { display(); }
  }

  /// @brief Writes a string of text.
  ///
  /// This function writes the specified string of text to the text buffer
  /// at the location specified by the text cursor (see gotoXY()), and moves
  /// the text cursor to the position immediately to the right of the string.
  ///
  /// By default, this function also calls displayPartial() to write these
  /// changes to the OLED, but noAutoDisplay() disables that behavior.
  ///
  /// There is no limit to how much text you can pass to this function, but
  /// the text will be discarded when you reach the end of the current line.
  ///
  /// To advance to the next line, use gotoXY().  The newline and carriage
  /// return characters do *not* have any special effect on the text cursor
  /// position like they might have in a terminal emulator.
  ///
  /// This function is called by (certain overloads of) the print() function
  /// provided by the Arduino print class.
  size_t write(const uint8_t * buffer, size_t size) override
  {
    if (textCursorY >= textBufferHeight) { return 0; }
    if (textCursorX >= textBufferWidth) { return 0; }
    if (size > (uint8_t)(textBufferWidth - textCursorX))
    {
      size = textBufferWidth - textCursorX;
    }

    memcpy(getLinePointer(textCursorY) + textCursorX, buffer, size);

    if (!disableAutoDisplay)
    {
      displayPartial(textCursorX, textCursorY, size);
    }

    textCursorX += size;
    return size;
  }

  /// @brief Writes a single character of text.
  ///
  /// This is equivalent to writing a single character using
  /// write(const uint8_t *, size_t).
  size_t write(uint8_t d) override
  {
    if (textCursorY >= textBufferHeight) { return 0; }
    if (textCursorX >= textBufferWidth) { return 0; }

    *(getLinePointer(textCursorY) + textCursorX) = d;

    if (!disableAutoDisplay)
    {
      displayPartial(textCursorX, textCursorY, 1);
    }

    textCursorX++;
    return 1;
  }

  /// @brief Defines a custom character from RAM.
  /// @param picture A pointer to the character dot pattern, in RAM.
  /// @param number A character code between 0 and 7.
  void loadCustomCharacterFromRam(const uint8_t * picture, uint8_t number)
  {
    uint8_t * columns = customChars[number];
    for (uint8_t i = 0; i < 5; i++)
    {
      columns[i] = 0;
    }
    for (uint8_t i = 0; i < 8; i++)
    {
      uint8_t row = picture[i];
      uint8_t mask = 1 << i;
      if (row & (1 << 0)) { columns[4] |= mask; }
      if (row & (1 << 1)) { columns[3] |= mask; }
      if (row & (1 << 2)) { columns[2] |= mask; }
      if (row & (1 << 3)) { columns[1] |= mask; }
      if (row & (1 << 4)) { columns[0] |= mask; }
    }
  }

  /// @brief Defines a custom character.
  /// @param picture A pointer to the character dot pattern, in program space.
  /// @param number A character code between 0 and 7.
  void loadCustomCharacter(const uint8_t * picture, uint8_t number)
  {
    uint8_t ram_picture[8];
    for (uint8_t i = 0; i < 8; i++)
    {
      ram_picture[i] = 
# 996 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h" 3
                      (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(
# 996 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h"
                      picture + i
# 996 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h" 3
                      )); uint8_t __result; __asm__ __volatile__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; }))
# 996 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\PololuOLED\\src/PololuSH1106Main.h"
                                                ;
    }
    loadCustomCharacterFromRam(ram_picture, number);
  }

  /// @brief Defines a custom character.
  ///
  /// This overload is only provided for compatibility existing code that
  /// defines char arrays instead of uint8_t arrays.
  void loadCustomCharacter(const char * picture, uint8_t number) {
    loadCustomCharacter((const uint8_t *)picture, number);
  }

  //////// Member variables and constants

  /// This object handles all low-level communication with the SH1106.
  C core;

private:

  bool initialized;

  bool clearDisplayRamOnNextDisplay;

  bool disableAutoDisplay;

  // We use the display routines through these member function pointers and are
  // careful about where we refer to them so that the routines for unused
  // layouts do not take up program space.
  void (PololuSH1106Main::*displayFunction)();
  void (PololuSH1106Main::*displayPartialFunction)(uint8_t, uint8_t, uint8_t);

  static const uint8_t textBufferWidth = 21, textBufferHeight = 8;

  uint8_t textBuffer[textBufferHeight * textBufferWidth];
  uint8_t textCursorX;
  uint8_t textCursorY;
  uint8_t customChars[8][5];

  const uint8_t * graphicsBuffer;
};
# 9 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 2
# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\util\\delay.h" 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 10 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 2


# 11 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
// This asm inside the macro below is an optimized version of
//   FastGPIO::Pin<mosPin>::setOutputValue(d >> b & 1);
// It prevents the compiler from using slow branches to implement the
// conditional logic, and also ensures that the writing speed doesn't depend
// on the data.
# 28 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
/// @brief Low-level functions for writing data to the SH1106 OLED on the
/// Pololu Zumo 32U4 OLED robot.
class Zumo32U4OLEDCore
{
  // Pin assignments
  static const uint8_t clkPin = 1, mosPin = 5, resPin = 0, dcPin = 17;

public:
  void initPins()
  {
    FastGPIO::Pin<clkPin>::setOutputLow();
  }

  void reset()
  {
    FastGPIO::Pin<resPin>::setOutputLow();
    _delay_us(10);
    FastGPIO::Pin<resPin>::setOutputHigh();
    _delay_us(10);
  }

  void sh1106TransferStart()
  {
    // From https://github.com/pololu/usb-pause-arduino/blob/master/USBPause.h:
    // Disables USB interrupts because the Arduino USB interrupts use some of
    // the OLED pins.
    savedUDIEN = UDIEN;
    UDIEN = 0;
    savedUENUM = UENUM;
    UENUM = 0;
    savedUEIENX0 = UEIENX;
    UEIENX = 0;

    savedStateMosi = FastGPIO::Pin<mosPin>::getState();
    savedStateDc = FastGPIO::Pin<dcPin>::getState();

    FastGPIO::Pin<mosPin>::setOutputLow();
  }

  void sh1106TransferEnd()
  {
    FastGPIO::Pin<mosPin>::setState(savedStateMosi);
    FastGPIO::Pin<dcPin>::setState(savedStateDc);

    // From https://github.com/pololu/usb-pause-arduino/blob/master/USBPause.h
    UENUM = 0;
    UEIENX = savedUEIENX0;
    UENUM = savedUENUM;
    UDIEN = savedUDIEN;
  }

  void sh1106CommandMode()
  {
    FastGPIO::Pin<dcPin>::setOutputLow();
  }

  void sh1106DataMode()
  {
    FastGPIO::Pin<dcPin>::setOutputHigh();
  }

  void sh1106Write(uint8_t d)
  {
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 91 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 91 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (7)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 92 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 92 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (6)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 93 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 93 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (5)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 94 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 94 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (4)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 95 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 95 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (3)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 96 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 96 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (2)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 97 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 97 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (1)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
    FastGPIO::Pin<clkPin>::setOutputValueLow(); asm volatile( "sbrc %2, %3\n" "sbi %0, %1\n" "sbrs %2, %3\n" "cbi %0, %1\n" : : "I" (FastGPIO::pinStructs[mosPin].portAddr - 
# 98 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h" 3
   0x20
# 98 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4OLED.h"
   ), "I" (FastGPIO::pinStructs[mosPin].bit), "r" (d), "I" (0)); FastGPIO::Pin<clkPin>::setOutputValueHigh();;
  }

private:
  uint8_t savedStateMosi, savedStateDc;
  uint8_t savedUDIEN, savedUENUM, savedUEIENX0;
};

/// @brief Makes it easy to show text and graphics on the SH1106 OLED of
/// the Pololu Zumo 32U4 OLED robot.
///
/// This class inherits from the PololuSH1106Main class in the PololuOLED
/// library, which provides almost all of its functionality.  See the
/// [PololuOLED library documentation](https://pololu.github.io/pololu-oled-arduino/)
/// for more information about how to use this class.
///
/// This class also inherits from the Arduino Print class
/// (via PololuSH1106Main), so you can call the `print()` function on it with a
/// variety of arguments.  See the
/// [Arduino print() documentation](http://arduino.cc/en/Serial/Print) for
/// more information.
class Zumo32U4OLED : public PololuSH1106Main<Zumo32U4OLEDCore>
{
};
# 26 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2
# 1 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4ProximitySensors.h" 1
// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

/** \file Zumo32U4ProximitySensors.h */

       


# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 1 3

# 1 "c:\\users\\maria\\appdata\\local\\arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\avr\\include\\string.h" 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */
# 9 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4ProximitySensors.h" 2


# 10 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4ProximitySensors.h"
/** \brief The pin number for the standard pin that is used to read the left
 * proximity sensor. */
static const uint8_t SENSOR_LEFT = 20;

/** \brief The pin number for the standard pin that is used to read the front
 * proximity sensor. */
static const uint8_t SENSOR_FRONT = 22;

/** \brief The pin number for the standard pin that is used to read the right
 * proximity sensor. */
static const uint8_t SENSOR_RIGHT = 4;

/** \brief A constant that can be used in place of a pin number to indicate that
 * no pin should be used. */
static const uint8_t SENSOR_NO_PIN = 255;

/** \brief Gets readings from the three proximity sensors on the front sensor
 * array.
 *
 * This class allows you to get measurements from the IR proximity sensors on
 * the Zumo 32U4 Front Sensor Array.
 *
 * By default, this class uses pins 20 (A2), 22 (A4), 4, and 11.
 *
 * Since this class uses Zumo32U4IRPulses, which uses Timer 3, it might
 * conflict with other libraries using Timer 3.  Timer 3 is only used while the
 * read() function is running and can be used for other purposes after the
 * function returns.
 *
 * Configuring the pins
 * ====
 *
 * This class allows you to choose what pins will be used for sensors.  Each
 * sensor pin will be configured as a pulled-up input and digital readings will
 * be performed on the pin to see if the sensor is active.
 *
 * By default, this class will drive pin 11 low before taking readings in
 * order to disable the IR emitters of the line sensors so they do not interfere
 * with the proximity sensors.  You can change what pin is used, or you can
 * disable this feature.
 *
 * For more information, see initThreeSensors(), initFrontSensor(), and init().
 *
 * Reading the sensors
 * ===
 *
 * The read() function takes care of disabling the emitters for the line
 * sensors, sending sequences of pulses to the left and right IR LEDs, and
 * performing digital readings on the proximity sensor pins to see if they are
 * active.
 *
 * There are several configuration options that allow you to control the
 * details of how the read() function behaves:
 *
 * * setPeriod()
 * * setBrightnessLevels()
 * * setPulseOnTimeUs()
 * * setPulseOffTimeUs()
 *
 * Interpreting the sensor readings
 * ====
 *
 * The readings generated by the read() function consist of two numbers for each
 * sensor: the number of brightness levels for the left LEDs that activated the
 * sensor, and the number of brightness levels for the right LEDs that activated
 * the sensor.
 *
 * A higher reading corresponds to more IR light getting reflected to the
 * sensor, which is influenced by the size, reflectivity, proximity, and
 * location of nearby objects.  However, the presence of other sources of 38 kHz
 * IR pulses (e.g. from another robot) can also affect the readings.
 *
 * Basic readings
 * ===
 *
 * The readBasic() function does a quick digital reading of a sensor without
 * emitting any IR pulses.  This can be useful for detecting other robots that
 * are emitting pulses of IR at 38 kHz.
 *
 * Brightness levels
 * ===
 *
 * The sequence of IR pulse brightness levels used by the read() function has a
 * big effect on the readings returned by this class.  The levels can be
 * changed by calling setBrightnessLevels().
 *
 * The default IR pulse brightness levels used are 4, 15, 32, 55, 85, and 120.
 *
 * These numbers each represent the pulse width to be used in a burst of IR pulses.
 * Specifically, the pulse width is (1 + brightness) / (16 MHz).
 *
 * We determined by experimenting that the useful range of levels is from about
 * 4 to 120, so we chose those as the minimum and maximum.  We used
 * ((2.236 + 1.756*i)^2 - 1) with i from 0 to 5 to generate the intermediate
 * points. */
class Zumo32U4ProximitySensors
{
public:

    /** \brief The default line sensor emitter pin.
     *
     * This is equal to the SENSOR_LEDON constant defined in
     * Zumo32U4LineSensors.h. */
    static const uint8_t defaultLineSensorEmitterPin = 11;

    /** \brief Minimal constructor.
     *
     * If you use this (i.e. by not providing any arguments when you create the
     * Zumo32U4ProximitySensors object), then you will have to call
     * initThreeSensors(), initFrontSensor(), or init() before using the
     * functions in this class. */
    Zumo32U4ProximitySensors()
    {
        clearAll();
    }

    /** \brief Constructor that takes pin arguments.
     *
     * This constructor calls init() with the specified arguments. */
    Zumo32U4ProximitySensors(uint8_t * pins, uint8_t numSensors,
        uint8_t lineSensorEmitterPin = defaultLineSensorEmitterPin)
    {
        clearAll();
        init(pins, numSensors, lineSensorEmitterPin);
    }

    /** \brief Configures this object to use all three proximity sensors.
     *
     * This function sets up this object to use the left, front, and right
     * proximity sensors on the Zumo32U4 Front Sensor Array.  The pins used
     * for these sensors will be 20 (A2), 22 (A4), and 4 respectively.
     *
     * For this configuration to work, jumpers on the front sensor array must be
     * installed in order to connect pin 20 to LFT and connect pin 4 to RGT.
     *
     * \param lineSensorEmitterPin The number of the pin that controls the
     * emitters for the line sensors.  This pin is used to turn off the emitters
     * for line sensors so they do not cause false readings on the proximity
     * sensors.  You can specify a value of SENSOR_NO_PIN for this parameter if
     * you want this class to not do anything to the emitters. */
    void initThreeSensors(uint8_t lineSensorEmitterPin = defaultLineSensorEmitterPin)
    {
        uint8_t defaultPins[] = { SENSOR_LEFT, SENSOR_FRONT, SENSOR_RIGHT };
        init(defaultPins, sizeof(defaultPins), lineSensorEmitterPin);
    }

    /** \brief Configures this object to use just the front proximity sensor.
     *
     * This function sets up this object to use just the front proximity sensor
     * on the Zumo32U4 Front Sensor Array.  The pin used will be 22 (A4),
     * and the pins for other two sensors will not be modified.
     *
     * \param lineSensorEmitterPin The number of the pin that controls the
     * emitters for the line sensors.  This pin is used to turn off the emitters
     * for line sensors so they do not cause false readings on the proximity
     * sensors.  You can specify a value of SENSOR_NO_PIN for this parameter if
     * you want this class to not do anything to the emitters. */
    void initFrontSensor(uint8_t lineSensorEmitterPin = defaultLineSensorEmitterPin)
    {
        uint8_t pins[] = { SENSOR_FRONT };
        init(pins, sizeof(pins), lineSensorEmitterPin);
    }

    /** \brief Configures this object to use a custom set of pins.
     *
     * \param pins A pointer to an array with the pin numbers for the sensors.
     * \param numSensors The number of sensors.
     * \param lineSensorEmitterPin The number of the pin that controls the
     * emitters for the line sensors.  This pin is used to turn off the emitters
     * for line sensors so they do not cause false readings on the proximity
     * sensors.  You can specify a value of SENSOR_NO_PIN for this parameter if
     * you want this class to not do anything to the emitters. */
    void init(uint8_t * pins, uint8_t numSensors,
        uint8_t lineSensorEmitterPin = defaultLineSensorEmitterPin);

    /** \brief Returns the number of sensors.
     *
     * This could be useful for iterating through all the sensors. */
    uint8_t getNumSensors() const
    {
        return numSensors;
    }

    /* LED parameters **********************************************************/

    /** \brief The default period for the infrared pulses.
     *
     * The default period is 420, which results in a frequency of 38.005 kHz.
     *
     * The period can be changed by calling setPeriod(). */
    static const uint16_t defaultPeriod = 420;

    /** \brief The default duration of the bursts of infrared pulses emitted, in
     * microseconds.
     *
     * According to the TSSP77038 datasheet, the delay between the start of the
     * IR pulses and the start of the sensor output pulse could be anywhere
     * between 7/(38 kHz) and 15/(38 kHz).
     *
     * The default pulse on time of 16/(38 kHz) = 421 us guarantees we are not
     * missing output pulses by reading the sensor too soon.
     *
     * The on time can be changed by calling setPulseOnTimeUs(). */
    static const uint16_t defaultPulseOnTimeUs = 421;

    /** \brief The default time to leave the infrared LEDs off between readings,
     * in microseconds.
     *
     * Ideally we would like the different measurements taken by the read()
     * function to each be independent and not affect eachother, so we would
     * like the sensor to go back to its original state before we start the next
     * set of pulses.  Therefore, it is necessary to wait long enough to
     * guarantee that the previous IR pulses are no longer affecting the sensor
     * output.
     *
     * According to the TSSP77038 datasheet, the sensor output pulse duration
     * could be up to 6/(38 kHz) longer than the duration of the IR pulses,
     * and the sensor output pulse could start as late as 15/(38 kHz) after
     * the IR pulses start.  Therefore, it is possible for the sensor output
     * pulse to end up to 21/(38 kHz) after the ending of the IR pulses.
     *
     * So the default off time is 22/(38 kHz) = 578 us.
     *
     * In our experiments, we saw that the sensor output pulse actually ends
     * within 300 microseconds after the IR pulses end, so an off time of
     * 300 us might be okay.
     *
     * The off time can be changed by calling setPulseOffTimeUs(). */
    static const uint16_t defaultPulseOffTimeUs = 578;

    /** \brief Sets the period used for the IR pulses.
     *
     * The period determines the frequency of the IR pulses, which affects how
     * sensitive the IR proximity sensors are.  The default period results in a
     * frequency of about 38 kHz, which maximizes the sensitivity.
     *
     * This parameter is used as the \c period parameter for
     * Zumo32U4IRPulses::start, so see the documentation of that function for
     * details.
     *
     * \sa defaultPeriod */
    void setPeriod(uint16_t period)
    {
        this->period = period;
    }

    /** \brief Sets the sequence of brightness levels used by read().
     *
     * Each brightness level in the sequence will be used as the \c brightness
     * parameter to Zumo32U4IRPulses::start().
     *
     * Note that the order of the brightness levels does matter because the
     * current-limiting components for the IR LEDs on the Zumo 32U4 Main Board
     * include a filter that causes the IR LED power voltage to decrease
     * gradually while the LEDs are on, and recover gradually while they are
     * off.  With the default timing parameters, the voltage does not recover
     * completely between bursts of IR pulses.
     *
     * \param levels A pointer to an array of brightness levels.
     * \param levelCount The number of brightness levels.
     *
     * \sa defaultBrightnessLevels */
    void setBrightnessLevels(uint16_t * levels, uint8_t levelCount);

    /** \brief Sets the duration, in microseconds, for each burst of IR pulses
     * emitted by the read() function.
     *
     * \sa defaultPulseOnTimeUs */
    void setPulseOnTimeUs(uint16_t pulseOnTimeUs)
    {
        this->pulseOnTimeUs = pulseOnTimeUs;
    }

    /** \brief Sets the amount of time, in microseconds, that the read()
     * function will leave the pulses off before going on to the next step.
     *
     * This delay is also used by lineSensorEmittersOff().
     *
     * \sa defaultPulseOffTimeUs */
    void setPulseOffTimeUs(uint16_t pulseOffTimeUs)
    {
        this->pulseOffTimeUs = pulseOffTimeUs;
    }

    /** \brief Returns the number of brightness levels.
     *
     * This could be useful for formatting the sensor readings for display. */
    uint8_t getNumBrightnessLevels() const
    {
        return numLevels;
    }

    /* Basic operations *********************************************************/

    /** \brief Turns the IR emitters for the line sensors off.
     *
     * Turns the line sensors for the IR emitters off, and then delays.  The pin
     * used to control the emitters is specified in the constructor, or a call
     * to init(), initThreeSensors(), or initFrontSensor().  The pin will be
     * driven low.  The delay can be specified by calling
     * setPulseOffTimeUs().  */
    void lineSensorEmittersOff();

    /** \brief Sets each sensor pin to an input with pull-up resistors enabled. */
    void pullupsOn();

    /** \brief Does a quick digital reading of the specified sensor without emitting
     * any IR pulses.
     *
     * Before calling this function, you should make sure that pullupsOn() and
     * lineSensorEmittersOff() have both been called or else you could get false
     * readings.  You can either call these functions directly or just call
     * read().
     *
     * \return 1 if the sensor is active, 0 if not.
     *
     * \param sensorNumber The zero-based index of the sensor.  This number
     *  should be less than the number of sensors, or else this function's
     *  behavior is undefined. */
    bool readBasic(uint8_t sensorNumber);

    /* Sensor reading ***********************************************************/

    /** \brief Emits IR pulses and gets readings from the sensors.
     *
     * This is the main function of this class.  Almost all other functions in
     * this class serve to configure how this function will work or to access
     * the results from this function.
     *
     * This function performs the following steps:
     *
     * 1. It calls pullupsOn().
     * 2. It calls lineSensorEmittersOff().
     * 3. For each configured brightness level, it:
     *     1. Starts IR pulses on the left LEDs.
     *     2. Takes a reading of each sensor.
     *     3. Turns off the pulses.
     *     4. Starts IR pulses on right LEDs.
     *     5. Takes a reading of each sensor.
     *     6. Turns off the pulses.
     *
     * The brightness levels can be configured with setBrightnessLevels().  The
     * frequency of the IR pulses (which is normally 38 kHz) can be adjusted
     * with setPeriod().  The delays used during this process can be configured
     * with setPulseOnTimeUs() and setPulseOffTimeUs().
     *
     * The output of this function is two numbers for each sensor: the number of
     * brightness levels for left LEDs that activated the sensor, and the number
     * of brightness levels for the right LEDs that activated the sensor.
     *
     * You can retrieve the numbers by calling countsWithLeftLeds(),
     * countsWithRightLeds(), or a number of other helper functions defined in
     * this class.
     *
     * With the default timing parameters, the amount of time this function
     * takes to run is approximately 2.15 milliseconds per brightness level plus
     * 0.62 milliseconds.  The number of sensors has only a small affect on the
     * run time. */
    void read();

    /** \brief Returns the number of brightness levels for the left LEDs that
     * activated the specified sensor.
     *
     * \param sensorNumber The zero-based index of the sensor.  This number
     *  should be less than the number of sensors, or else this function returns
     *  0. */
    uint8_t countsWithLeftLeds(uint8_t sensorNumber) const;

    /** \brief Returns the number of brightness levels for the right LEDs that
     * activated the specified sensor.
     *
     * \param sensorNumber The zero-based index of the sensor.  This number
     *  should be less than the number of sensors, or else this function returns
     *  0. */
    uint8_t countsWithRightLeds(uint8_t sensorNumber) const;

    /* Helper methods for the typical Zumo sensor setup ************************/

    /** \brief Returns the number of brightness levels for the left LEDs that
     * activated the left proximity sensor.
     *
     * This function assumes pin 20 (A2) is connected to the left sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor. */
    uint8_t countsLeftWithLeftLeds() const
    {
        return countsWithLeftLeds(findIndexForPin(SENSOR_LEFT));
    }

    /** \brief Returns the number of brightness levels for the right LEDs that
     * activated the left proximity sensor.
     *
     * This function assumes pin 20 (A2) is connected to the left sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor. */
    uint8_t countsLeftWithRightLeds() const
    {
        return countsWithRightLeds(findIndexForPin(SENSOR_LEFT));
    }

    /** \brief Returns the number of brightness levels for the left LEDs that
     * activated the front proximity sensor.
     *
     * This function assumes pin 22 (A4) is connected to the front sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor. */
    uint8_t countsFrontWithLeftLeds() const
    {
        return countsWithLeftLeds(findIndexForPin(SENSOR_FRONT));
    }

    /** \brief Returns the number of brightness levels for the right LEDs that
     * activated the front proximity sensor.
     *
     * This function assumes pin 22 (A4) is connected to the front sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor. */
    uint8_t countsFrontWithRightLeds() const
    {
        return countsWithRightLeds(findIndexForPin(SENSOR_FRONT));
    }

    /** \brief Returns the number of brightness levels for the left LEDs that
     * activated the right proximity sensor.
     *
     * This function assumes pin 4 is connected to the right sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor. */
    uint8_t countsRightWithLeftLeds() const
    {
        return countsWithLeftLeds(findIndexForPin(SENSOR_RIGHT));
    }

    /** \brief Returns the number of brightness levels for the right LEDs that
     * activated the right proximity sensor.
     *
     * This function assumes pin 4 is connected to the right sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor. */
    uint8_t countsRightWithRightLeds() const
    {
        return countsWithRightLeds(findIndexForPin(SENSOR_RIGHT));
    }

    /** \brief Does a quick digital reading of the left sensor.
     *
     * This function assumes pin 20 (A2) is connected to the left sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor.
     *
     * This function calls readBasic(), so see that function's documentation for
     * more information. */
    bool readBasicLeft()
    {
        return readBasic(findIndexForPin(SENSOR_LEFT));
    }

    /** \brief Does a quick digital reading of the front sensor.
     *
     * This function assumes pin 22 (A4) is connected to the left sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor.
     *
     * This function calls readBasic(), so see that function's documentation for
     * more information. */
    bool readBasicFront()
    {
        return readBasic(findIndexForPin(SENSOR_FRONT));
    }

    /** \brief Does a quick digital reading of the right sensor.
     *
     * This function assumes pin 4 is connected to the right sensor.
     * It returns 0 if the object is not configured to use that pin as a
     * sensor.
     *
     * This function calls readBasic(), so see that function's documentation for
     * more information. */
    bool readBasicRight()
    {
        return readBasic(findIndexForPin(SENSOR_RIGHT));
    }

private:

    void clearAll();
    void prepareToRead();
    uint8_t findIndexForPin(uint8_t pin) const;

    typedef struct SensorData
    {
        uint8_t pin;
        uint8_t withLeftLeds;
        uint8_t withRightLeds;
    } SensorData;

    SensorData * dataArray;
    uint8_t numSensors;

    uint8_t lineSensorEmitterPin;

    uint16_t * levelsArray;
    uint8_t numLevels;

    uint16_t period;
    uint16_t pulseOnTimeUs;
    uint16_t pulseOffTimeUs;
};
# 27 "C:\\Users\\Maria\\Documents\\Arduino\\libraries\\Zumo32U4\\src/Zumo32U4.h" 2

// TODO: servo support

/*! \brief Turns the red user LED (RX) on or off.

@param on 1 to turn on the LED, 0 to turn it off.

The red user LED is on pin 17, which is also known as PB0, SS, and RXLED.  The
Arduino core code uses this LED to indicate when it receives data over USB, so
it might be hard to control this LED when USB is connected. */
inline void ledRed(bool on)
{
    FastGPIO::Pin<17>::setOutput(!on);
}

/*! \brief Turns the yellow user LED on pin 13 on or off.

@param on 1 to turn on the LED, 0 to turn it off. */
inline void ledYellow(bool on)
{
    FastGPIO::Pin<13>::setOutput(on);
}

/*! \brief Turns the green user LED (TX) on or off.

@param on 1 to turn on the LED, 0 to turn it off.

The green user LED is pin PD5, which is also known as TXLED.  The Arduino core
code uses this LED to indicate when it receives data over USB, so it might be
hard to control this LED when USB is connected. */
inline void ledGreen(bool on)
{
    FastGPIO::Pin<5>::setOutput(!on);
}

/*! \brief Returns true if USB power is detected.

This function returns true if power is detected on the board's USB port and
returns false otherwise.  It uses the ATmega32U4's VBUS line, which is directly
connected to the power pin of the USB connector.

\sa A method for detecting whether the board's virtual COM port is open:
  http://arduino.cc/en/Serial/IfSerial */
inline bool usbPowerPresent()
{
    return USBSTA >> VBUS & 1;
}

/*! \brief Reads the battery voltage and returns it in millivolts. */
inline uint16_t readBatteryMillivolts()
{
    const uint8_t sampleCount = 8;
    uint16_t sum = 0;
    for (uint8_t i = 0; i < sampleCount; i++)
    {
        sum += analogRead(A1);
    }

    // VBAT = 2 * millivolt reading = 2 * raw * 5000/1024
    //      = raw * 625 / 64
    // The correction term below makes it so that we round to the
    // nearest whole number instead of always rounding down.
    const uint32_t correction = 32 * sampleCount - 1;
    return ((uint32_t)sum * 625 + correction) / (64 * sampleCount);
}

/**

\class QTRSensors
For complete documentation of this class, see
https://www.pololu.com/docs/0J19


\class QTRSensorsRC
For complete documentation of this class, see
https://www.pololu.com/docs/0J19

*/
# 3 "C:\\Users\\Maria\\Downloads\\IELS\\stubbing\\stubbing.ino" 2

Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;

int bankBalance = 1000;

int chargePercent;

bool lowBattery = false;
unsigned long malfunctionTime;
bool emergencyCharge = true;
float antallCm = 0;
float totalCm;

float encoderTicks;
float distance;
float totalDistance;

float totalSpeed;

speedreadings[60];

float averageSpeed;
float maxSpeed;

int secondsOverPercentage = 0;

int batteryPercentage = 100;

int price = 0;

int chargedMeter;

int batteryHealth = 100;

void setup(){

}

float calculateSpeed() {
  float encoderCounts = (encoders.getCountsAndResetLeft() + encoders.getCountsAndResetRight()) / 2

  unsigned long time_since_driving = millis();

  antallCm = encoderCounts / 82; // dette er farten 
  totalCm = totalCm + antallCm
  //TotalM = totalCm / 100 // gjÃ¸r om fra cm til m
  return antallCm

  //float velocity = 0.0195 * maxSpeed; // v = r * w
}


float calculateDistance() {
  encoderTicks = (encoders.getCountsAndResetLeft() + encoders.getCountsAndResetRight()) / 2;
  distance = (encoderTicks / counts_per_revolution) * omkrets;
  totalDistance = totalDistance + distance;
  return totalDistance;
}

void displaySpeedDistance(){
  display.clear();
  display.print("speed: ");
  display.gotoXY(0,1);
  display.print(antallCm);
  display.gotoXY(1, 0);
  display.print("distance: ");
  display.gotoXY(1, 1);
  display.print(totalDistance);
}

void SpeedPerMinute(){
  currentTime = millis();
  if(currentTime - previousTime > 60000){
    totalSpeed = 0;
    for(int i = 0; i < 60; i++){
      speedReadings[i] = antallCm;
    }
     for(int i = 0; i < 60; i++){
       totalSpeed = totalSpeed + speedreadings[i];
    }
  }
  return totalSpeed;
}

float averageSpeedCalculation(totalSpeed){
    averageSpeed = totalSpeed/60;
    return averageSpeed;
}

void maxSpeedCalculation(totalSpeed){
    if(array[i] > array[i -1]){
        maxSpeed = array[i];
    }
    return maxSpeed;
}

int secondsOverSpeedLimit(antallCm){
    for(int i = 0; i < 61; i++){
      if(antallCm >= 280){
        secondsOverPercentage = secondsOverPercentage + 1;
      }
    }
    return secondsOverPercentage;
}

float batterycalculation() {
  float batteryCalculations = 100 - totalDistance + chargedbatterym; // 100 - totalm + chargedbatterym
  batteryPercentage = ((batteryCalculations)>=0?(long)((batteryCalculations)+0.5):(long)((batteryCalculations)-0.5));
  if (batteryPercentage % 5 == 0 || batteryPercentage != prevBatteryPercentage) {
    prevBatteryPercentage = batteryPercentage;
  }
}

void chargeByBacking(){
    if(batteryPercentage < 90){
        if(buttonB.isPressed){
            motors.setSpeeds(0, 0);
            display.clear();
            delay(2000);
            charging();
            chargedMeter += 10;
        }
    }
}

void charging(){
    motors.setSpeeds(-80, -80);
    delay(8000);
    motors.setSpeeds(-100, 100);
    delay(1700);
}

void emergencyChargeByBacking(){

    if(emergencyCharge == true){
      if(batteryPercentage < 20){
        if(buttonB.isPressed){
            motors.setSpeeds(0, 0);
            display.clear();
            delay(2000);
            charging();
            chargedMeter += 50;
            emergencyCharge = false;
        }
      }
    }
}



void displayBattery(){

    display.print("battery: ");
    display.gotoXY(1, 0);
    display.print(batteryPercentage);

}

void randomMalfunction(){
    currentMillis = millis();
    previousMillis = 0;
    malfunctionTime = random(600000);
    if(currentMillis - previousMillis > malfunctionTime){
      batteryHealth = batteryHealth - 50;
    }
}

void payment(){
    bankBalance = bankBalance - price;
}

void batteryService(){
    while(batteryHealth < 80){

        batteryHealth = batteryHealth + 1;
        delay(2000);
    }
    price = 200;
    payment();
}

void batteryReplacement(){
    delay(60000);
    batteryHealth = 100;
    price = 300;
    payment();
    secondsOverPercentage = 0,
}

void lowBatteryMode(){
    if(batteryPercentage < 10 && lowBattery == false){
        buzzer.playFromProgramSpace(lowBatterySound);
        display.print("low battery");
        delay(500);
        display.clear();
        lowBattery = true;
    } else {
        lowBattery = false;
    }
}

void extraLowBatteryMode(){
    if(batteryPercentage < 5){
        currentMillis = millis();
        if(currentMillis - previousMillis < 15000){
            buzzer.playFromProgramSpace(lowBatteryBeep);
        }
        previousMillis = currentMillis;
    }

}


void loop(){
    calculateSpeed();
    calculateDistance();
    isplaySpeedDistance();
    speedPerMinute();
    averageSpeedCalculation(totalSpeed);
    maxSpeedCalculation(totalSpeed);
    secondsOverSpeedLimit(antallCm);
    batterycalculation();
    chargeByBacking();
    charging();
    emergencyChargeByBacking();
    displayBattery();
    randomMalfunction();
    payment();
    batteryService();
    batteryReplacement();
    lowBatteryMode();
    extraLowBatteryMode();
}
