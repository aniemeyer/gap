#ifndef _FIBHASH_H
#define _FIBHASH_H

#ifndef SIZEOF_VOID_P
#error Require SIZEOF_VOID_P to be defined
#endif

#if SIZEOF_VOID_P == 4
#define FIB_HASH_MULT 0x9e3779b9UL
#else
#define FIB_HASH_MULT 0x9e3779b97f4a7c13UL
#endif

#define FIB_HASH_BITS (SIZEOF_VOID_P * 8)

static UInt FibHash(UInt word, unsigned bits)
{
  return (word * FIB_HASH_MULT) >>
    (FIB_HASH_BITS - bits);
}

#endif /* _FIBHASH_H */