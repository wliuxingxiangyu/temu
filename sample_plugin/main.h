/*
TEMU is Copyright (C) 2006-2009, BitBlaze Team.

TEMU is based on QEMU, a whole-system emulator. You can redistribute
and modify it under the terms of the GNU LGPL, version 2.1 or later,
but it is made available WITHOUT ANY WARRANTY. See the top-level
README file for more details.

For more information about TEMU and other BitBlaze software, see our
web site at: http://bitblaze.cs.berkeley.edu/
*/

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct _taint_record {
  uint32_t origin;
  uint32_t offset;
} taint_record_t;

extern FILE *my_log;
#endif
