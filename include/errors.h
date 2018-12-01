#ifndef __ERRORS_H__
#define __ERRORS_H__

enum error_codes {
  ERROR_NONE,

  ERROR_RANDOMNESS,

  ERROR_SRCLEN_INVALID,
  ERROR_DSTLEN_INVALID,

  ERROR_PRF_KEYLEN_INVALID,

  ERROR_NULL_POINTER,
  ERROR_MEMORY_ALLOCATION,
};

#endif /* __ERRORS_H__ */
