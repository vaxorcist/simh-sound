/* altair_defs.h: MITS Altair simulator definitions

   Copyright (c) 1997-2005, Charles E. Owen

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
   ROBERT M SUPNIK BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

   Except as contained in this notice, the name of Charles E. Owen shall not be
   used in advertising or otherwise to promote the sale, use or other dealings
   in this Software without prior written authorization from Charles E. Owen.
*/

#include "sim_defs.h"                                    /* simulator defns */

/* Memory */

#define MAXMEMSIZE      65536                            /* max memory size */
#define MEMSIZE         (cpu_unit.capac)                 /* actual memory size */
#define ADDRMASK        (MAXMEMSIZE - 1)                 /* address mask */
#define MEM_ADDR_OK(x)  (((uint32) (x)) < MEMSIZE)

/* Simulator stop codes */

#define STOP_RSRV       1                                /* must be 1 */
#define STOP_HALT       2                                /* HALT */
#define STOP_IBKPT      3                                /* breakpoint */
#define STOP_OPCODE     4

/* Rename of global BC and SP variables to avoid namespace conflicts on some platforms */
#define BC BC_Global
#define SP SP_Global