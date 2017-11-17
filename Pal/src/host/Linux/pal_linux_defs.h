/* -*- mode:c; c-file-style:"k&r"; c-basic-offset: 4; tab-width:4; indent-tabs-mode:nil; mode:auto-fill; fill-column:78; -*- */
/* vim: set ts=4 sw=4 et tw=78 fo=cqt wm=0: */

#ifndef PAL_LINUX_DEFS_H
#define PAL_LINUX_DEFS_H

#define USER_ADDRESS_RESERVED   0x100000000
#define USER_ADDRESS_LOWEST     0x10000

/* internal wrap native pipe inside pipe streams */
#define USE_PIPE_SYSCALL        0

#define USE_VSYSCALL_GETTIME    0
#define USE_VDSO_GETTIME        1
#define USE_CLOCK_GETTIME       1

/* default size of a new thread stack */
/* DEP 2/4/17: There is enough stuff allocated on the PAL stack now
 *   that we need two pages in Linux host mode.  In SGX mode,
 *   the enclave/non-clave split makes 1 page in/1 out sufficient.
 */
#define THREAD_STACK_SIZE  (16*1024)

#define USE_ARCH_RDRAND         0

#define BLOCK_SIGFAULT          0

#endif /* PAL_LINUX_DEFS_H */
