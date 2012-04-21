/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 5131 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5131 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 4925 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands)",
    __builtin_constant_p 
#line 4925 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    ? (int) 
#line 4925 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    : -1 },
#line 6029 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6029 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6029 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 9844 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9844 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9844 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 4237 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH && TARGET_SSE2\n\
   && !optimize_size && (ix86_preferred_stack_boundary >= 128)",
    __builtin_constant_p 
#line 4237 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH && TARGET_SSE2
   && !optimize_size && (ix86_preferred_stack_boundary >= 128))
    ? (int) 
#line 4237 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH && TARGET_SSE2
   && !optimize_size && (ix86_preferred_stack_boundary >= 128))
    : -1 },
#line 2855 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 2855 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 2855 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 749 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 749 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 749 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
#line 179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 2008 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2008 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2008 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 21087 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128\n\
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128",
    __builtin_constant_p 
#line 21087 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    ? (int) 
#line 21087 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    : -1 },
#line 18256 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18256 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18256 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1701 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1701 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1701 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
#line 12018 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12018 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12018 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11758 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11758 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11758 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 1838 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1838 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1838 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
#line 2295 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 2295 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 2295 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 14956 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 14956 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 14956 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 4678 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 4678 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2)
    ? (int) 
#line 4678 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2)
    : -1 },
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 9151 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 9151 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 9151 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 10367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 10367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 10367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 14019 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14019 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14019 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 4893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 4893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 8374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 15295 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15295 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15295 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 15447 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15447 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15447 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 5268 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 5270 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5268 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 5270 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8693 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 8693 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 8693 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 21122 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 21122 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    ? (int) 
#line 21122 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    : -1 },
#line 7928 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7928 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7928 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 3278 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3278 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3278 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2853 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2853 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2853 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 5464 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   &&  ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 5464 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 5464 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 2318 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && GET_CODE (operands[1]) == MEM\n\
   && constant_pool_reference_p (operands[1])",
    __builtin_constant_p 
#line 2318 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && constant_pool_reference_p (operands[1]))
    ? (int) 
#line 2318 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && constant_pool_reference_p (operands[1]))
    : -1 },
#line 20861 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(TARGET_K8 || TARGET_GENERIC64) && !optimize_size",
    __builtin_constant_p 
#line 20861 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size)
    ? (int) 
#line 20861 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size)
    : -1 },
#line 5753 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5753 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5753 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 19393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 19393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 19393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 3205 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3205 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3205 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
  { "(!TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 12991 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 12993 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12991 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 12993 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 11878 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11878 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11878 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4337 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4337 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 12498 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12498 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12498 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 19383 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 19383 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 19383 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 714 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 714 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 714 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 15114 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 15114 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 15114 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5180 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 5180 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 5180 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 1190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx\n\
   && (TARGET_PENTIUM || optimize_size)",
    __builtin_constant_p 
#line 1190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
    ? (int) 
#line 1190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
    : -1 },
#line 3919 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 3919 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 3919 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
#line 11206 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 11206 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 11206 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 4878 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4878 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 4878 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 12790 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12790 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12790 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 18086 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed",
    __builtin_constant_p 
#line 18086 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed)
    ? (int) 
#line 18086 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed)
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 230 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 22 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 230 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 22 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 5233 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 5239 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5233 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 5239 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 1441 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 1441 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 1441 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 19305 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19305 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19305 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 8453 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8453 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8453 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 1624 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL || optimize_size",
    __builtin_constant_p 
#line 1624 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL || optimize_size)
    ? (int) 
#line 1624 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL || optimize_size)
    : -1 },
#line 334 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 334 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 334 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 19847 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19847 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    ? (int) 
#line 19847 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    : -1 },
#line 9340 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9340 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9340 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 2311 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 2311 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 2311 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
#line 5553 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5553 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5553 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V1DImode, operands)",
    __builtin_constant_p 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V1DImode, operands))
    ? (int) 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V1DImode, operands))
    : -1 },
#line 2144 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2144 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2144 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 6909 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6909 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6909 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1376 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 1374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1376 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 7671 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7671 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
    ? (int) 
#line 7671 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
    : -1 },
#line 1602 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_size",
    __builtin_constant_p 
#line 1602 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size)
    ? (int) 
#line 1602 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size)
    : -1 },
#line 789 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 789 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 789 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 3287 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0])",
    __builtin_constant_p 
#line 3287 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    ? (int) 
#line 3287 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    : -1 },
#line 13291 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 13291 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 13291 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 11041 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 11041 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 11041 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 702 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 702 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 702 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES \n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))",
    __builtin_constant_p (
#line 4062 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4064 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES 
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    ? (int) (
#line 4062 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4064 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES 
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    : -1 },
#line 19411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 19411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH)
    ? (int) 
#line 19411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH)
    : -1 },
#line 8504 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8504 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8504 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 13028 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)",
    __builtin_constant_p 
#line 13028 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    ? (int) 
#line 13028 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    : -1 },
#line 9744 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9744 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9744 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V1DImode, operands)",
    __builtin_constant_p 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    ? (int) 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    : -1 },
#line 2659 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 2659 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 2659 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 11369 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 11369 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 11369 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 18192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 18196 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 18192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 18196 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 6864 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6864 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6864 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
  { "(TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 14696 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 14698 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 14696 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 14698 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 20147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode) && ! optimize_size",
    __builtin_constant_p 
#line 20147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode) && ! optimize_size)
    ? (int) 
#line 20147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode) && ! optimize_size)
    : -1 },
#line 615 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 615 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 615 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 18834 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(! optimize_size || TARGET_INLINE_ALL_STRINGOPS) && !TARGET_64BIT",
    __builtin_constant_p 
#line 18834 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! optimize_size || TARGET_INLINE_ALL_STRINGOPS) && !TARGET_64BIT)
    ? (int) 
#line 18834 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! optimize_size || TARGET_INLINE_ALL_STRINGOPS) && !TARGET_64BIT)
    : -1 },
#line 6071 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6071 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6071 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 9895 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && reload_completed",
    __builtin_constant_p 
#line 9895 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && reload_completed)
    ? (int) 
#line 9895 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && reload_completed)
    : -1 },
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 1647 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed && (!TARGET_USE_MOV0 && !optimize_size)",
    __builtin_constant_p 
#line 1647 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 && !optimize_size))
    ? (int) 
#line 1647 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 && !optimize_size))
    : -1 },
#line 12375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 12095 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12095 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12095 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 15584 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15584 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15584 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 10880 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 10880 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 10880 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 12897 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 12897 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 12897 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 9734 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9734 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9734 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 1990 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_PENTIUM || optimize_size)\n\
   && reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1990 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1990 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 20998 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && !TARGET_64BIT",
    __builtin_constant_p 
#line 20998 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT)
    ? (int) 
#line 20998 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT)
    : -1 },
#line 12804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)",
    __builtin_constant_p 
#line 12804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    ? (int) 
#line 12804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    : -1 },
#line 18722 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)",
    __builtin_constant_p 
#line 18722 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    ? (int) 
#line 18722 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    : -1 },
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 1065 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1065 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1065 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 3178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 3178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 3178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 9454 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9454 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9454 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 9502 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, TImode, operands)",
    __builtin_constant_p 
#line 9502 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    ? (int) 
#line 9502 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    : -1 },
#line 11894 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11894 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11894 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 2826 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2826 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 2826 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
#line 5200 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 5200 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 5200 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 1420 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT",
    __builtin_constant_p 
#line 1420 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    ? (int) 
#line 1420 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    : -1 },
#line 13370 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 13370 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 13370 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 9321 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9321 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9321 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 4237 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH && TARGET_SSE2\n\
   && !optimize_size && (ix86_preferred_stack_boundary >= 128)",
    __builtin_constant_p 
#line 4237 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH && TARGET_SSE2
   && !optimize_size && (ix86_preferred_stack_boundary >= 128))
    ? (int) 
#line 4237 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH && TARGET_SSE2
   && !optimize_size && (ix86_preferred_stack_boundary >= 128))
    : -1 },
#line 10260 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10260 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10260 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 6876 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6876 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6876 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 19865 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 19865 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 19865 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 1340 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1340 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1340 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 8480 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 GET_CODE (operands[2]) == CONST_INT\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 8480 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 8480 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 15265 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15265 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15265 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 5183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 5183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 5183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 18239 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18239 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18239 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 10631 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 10631 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 10631 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 15415 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15415 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15415 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 14266 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 14266 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 14266 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 8752 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8752 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8752 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 21380 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE4_2",
    __builtin_constant_p 
#line 21380 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE4_2)
    ? (int) 
#line 21380 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE4_2)
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 2346 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 2346 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 2346 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 11528 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11528 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11528 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 735 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 735 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 735 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 13144 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 13144 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 13144 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 2165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? flow2_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? flow2_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? flow2_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 2126 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2126 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2126 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    : -1 },
#line 9367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 9367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 9367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 1366 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1366 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1366 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 7199 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7199 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7199 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 5970 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1",
    __builtin_constant_p 
#line 5970 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    ? (int) 
#line 5970 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    : -1 },
#line 4517 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 4517 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 4517 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 2477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 2477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 2477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 12334 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 12334 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 12334 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 5705 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5705 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5705 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 8433 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8433 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8433 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 12047 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12047 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12047 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 20735 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size \n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20735 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20735 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 18228 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18228 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18228 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
#line 15867 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 15867 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 15867 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 10569 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 10569 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 10569 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 6415 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6415 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6415 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 20367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_size)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_size)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_size)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6934 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6934 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6934 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 14060 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 14060 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 14060 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 21022 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 21022 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 21022 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 6848 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6848 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6848 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 9210 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 9210 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 9210 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 1208 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1208 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1208 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1979 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)\n\
   && reload_completed",
    __builtin_constant_p 
#line 1979 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
    ? (int) 
#line 1979 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
    : -1 },
#line 20113 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! optimize_size\n\
   && get_attr_length (insn) >= ix86_cost->large_insn\n\
   && TARGET_SPLIT_LONG_MOVES",
    __builtin_constant_p 
#line 20113 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size
   && get_attr_length (insn) >= ix86_cost->large_insn
   && TARGET_SPLIT_LONG_MOVES)
    ? (int) 
#line 20113 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size
   && get_attr_length (insn) >= ix86_cost->large_insn
   && TARGET_SPLIT_LONG_MOVES)
    : -1 },
#line 20625 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_SUB_ESP_4",
    __builtin_constant_p 
#line 20625 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_4)
    ? (int) 
#line 20625 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_4)
    : -1 },
#line 10158 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 10158 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH)))
    ? (int) 
#line 10158 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH)))
    : -1 },
#line 9381 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 9381 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 9381 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 2029 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2029 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 2029 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 6659 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands)",
    __builtin_constant_p 
#line 6659 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    ? (int) 
#line 6659 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    : -1 },
#line 1095 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1095 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1095 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 16391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 16391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 16391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 15765 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 15765 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 15765 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387)
    : -1 },
#line 2760 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ! (ANY_FP_REG_P (operands[0]) || \n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) || \n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2760 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2760 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 689 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 689 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 689 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 20658 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_ADD_ESP_8",
    __builtin_constant_p 
#line 20658 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_8)
    ? (int) 
#line 20658 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_8)
    : -1 },
#line 3037 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed && !SSE_REG_P (operands[0])\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 3037 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 3037 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V1DImode, operands)",
    __builtin_constant_p 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V1DImode, operands))
    ? (int) 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V1DImode, operands))
    : -1 },
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 219 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic",
    __builtin_constant_p 
#line 219 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    ? (int) 
#line 219 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    : -1 },
#line 5930 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5930 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5930 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(TARGET_64BIT || !optimize_size) && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && (ix86_preferred_stack_boundary >= 128)",
    __builtin_constant_p 
#line 4900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_64BIT || !optimize_size) && TARGET_SSE2 && TARGET_SSE_MATH
   && (ix86_preferred_stack_boundary >= 128))
    ? (int) 
#line 4900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_64BIT || !optimize_size) && TARGET_SSE2 && TARGET_SSE_MATH
   && (ix86_preferred_stack_boundary >= 128))
    : -1 },
#line 12850 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 12850 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 12850 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 20707 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size",
    __builtin_constant_p 
#line 20707 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size)
    ? (int) 
#line 20707 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size)
    : -1 },
#line 15375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH)
    ? (int) 
#line 15375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH)
    : -1 },
#line 3183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed",
    __builtin_constant_p 
#line 3183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed)
    ? (int) 
#line 3183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed)
    : -1 },
#line 4280 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4280 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4280 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 3189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 3189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 3189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 18192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 18192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 18192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 807 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 807 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 807 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 5289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSSE3",
    __builtin_constant_p 
#line 5289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    ? (int) 
#line 5289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    : -1 },
#line 9475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 15530 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15530 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15530 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]) && GET_CODE (operands[0]) != SUBREG)\n\
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]) && GET_CODE (operands[1]) != SUBREG)",
    __builtin_constant_p 
#line 202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]) && GET_CODE (operands[0]) != SUBREG)
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]) && GET_CODE (operands[1]) != SUBREG))
    ? (int) 
#line 202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]) && GET_CODE (operands[0]) != SUBREG)
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]) && GET_CODE (operands[1]) != SUBREG))
    : -1 },
#line 19983 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19983 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19983 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 8833 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8833 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8833 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 6824 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6824 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6824 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 11733 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)\n\
   && INTVAL (operands[2]) == 31\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11733 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11733 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 3178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 3178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 3178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
#line 1052 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 1052 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 1052 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 724 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
    && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 724 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 724 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 20194 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], QImode)))",
    __builtin_constant_p 
#line 20194 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], QImode))))
    ? (int) 
#line 20194 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], QImode))))
    : -1 },
#line 2776 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed || TARGET_80387",
    __builtin_constant_p 
#line 2776 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    ? (int) 
#line 2776 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    : -1 },
#line 2487 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 2487 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 2487 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 9254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 9254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 9254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 16262 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 16262 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !reload_completed && !reload_in_progress)
    ? (int) 
#line 16262 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !reload_completed && !reload_in_progress)
    : -1 },
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4733 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4733 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4733 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 9943 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), TFmode, operands)",
    __builtin_constant_p 
#line 9943 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (GET_CODE (operands[3]), TFmode, operands))
    ? (int) 
#line 9943 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (GET_CODE (operands[3]), TFmode, operands))
    : -1 },
#line 5841 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5841 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5841 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 6454 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xff) != 0x80",
    __builtin_constant_p 
#line 6454 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    ? (int) 
#line 6454 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    : -1 },
#line 12343 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		     ? flow2_completed : reload_completed)",
    __builtin_constant_p 
#line 12343 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? flow2_completed : reload_completed))
    ? (int) 
#line 12343 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? flow2_completed : reload_completed))
    : -1 },
#line 2132 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2132 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2132 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 13949 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13949 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13949 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 2519 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2519 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2519 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 7588 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7588 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
    ? (int) 
#line 7588 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
    : -1 },
#line 6989 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6989 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6989 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 19460 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19460 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19460 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 230 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 230 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 230 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 1467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 1467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 1467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 4300 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4300 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4300 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 5986 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5986 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5986 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 3070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size",
    __builtin_constant_p 
#line 3070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    ? (int) 
#line 3070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    : -1 },
#line 150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
  { "(TARGET_SSE_MATH) && ( reload_completed)",
    __builtin_constant_p (
#line 9765 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH) && 
#line 9767 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 9765 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH) && 
#line 9767 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 15475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 12839 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12839 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12839 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 4343 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 4343 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE)
    ? (int) 
#line 4343 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE)
    : -1 },
#line 13919 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13919 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13919 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 7976 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 7976 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 7976 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 1137 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1137 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1137 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
#line 3166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && !optimize_size",
    __builtin_constant_p 
#line 3166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    ? (int) 
#line 3166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    : -1 },
#line 8661 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8661 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8661 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 11255 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11255 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11255 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 13048 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 13048 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 13048 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 4520 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4520 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 4520 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 15648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP",
    __builtin_constant_p 
#line 15648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP)
    ? (int) 
#line 15648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP)
    : -1 },
#line 3193 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed \n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3193 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3193 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 20261 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != 0\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 20261 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != 0
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 20261 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != 0
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 6377 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6377 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6377 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 12399 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12399 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12399 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 2641 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2641 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2641 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 2487 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 2487 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 2487 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 10999 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 10999 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 10999 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 10899 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10899 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10899 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 4636 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 4636 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 4636 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
#line 15246 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15246 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15246 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 422 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 422 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 422 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
#line 20180 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], HImode)))",
    __builtin_constant_p 
#line 20180 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], HImode))))
    ? (int) 
#line 20180 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], HImode))))
    : -1 },
#line 11627 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11627 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11627 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 3175 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND || optimize_size",
    __builtin_constant_p 
#line 3175 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
    ? (int) 
#line 3175 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
    : -1 },
#line 15614 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15614 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15614 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 3457 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 3457 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 3457 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
#line 10278 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10278 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10278 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 21182 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_3DNOW && !TARGET_64BIT",
    __builtin_constant_p 
#line 21182 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    ? (int) 
#line 21182 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    : -1 },
#line 1303 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1303 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1303 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 20441 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20441 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20441 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 9699 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 9699 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 9699 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
#line 11997 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11997 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11997 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 390 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 390 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 390 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 20059 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size && !TARGET_PUSH_MEMORY\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 20059 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 20059 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 2887 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2887 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2887 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 8802 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8802 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8802 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 15600 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15600 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15600 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10287 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10287 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10287 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 20845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(TARGET_K8 || TARGET_GENERIC64) && !optimize_size\n\
   && satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 20845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && satisfies_constraint_K (operands[2]))
    ? (int) 
#line 20845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && satisfies_constraint_K (operands[2]))
    : -1 },
#line 15375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH)
    ? (int) 
#line 15375 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH)
    : -1 },
#line 5289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 5289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 5289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 20166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], SImode)))",
    __builtin_constant_p 
#line 20166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], SImode))))
    ? (int) 
#line 20166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], SImode))))
    : -1 },
#line 19477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 19477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 19477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
#line 20354 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_size)\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20354 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_size)
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20354 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_size)
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 1822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 9116 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 9116 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 9116 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 9811 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 9811 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 9811 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 5795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
  { "(TARGET_64BIT && TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 14757 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE) && 
#line 14759 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 14757 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE) && 
#line 14759 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 9645 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 9645 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 9645 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 20589 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(INTVAL (operands[3]) == -1\n\
    || INTVAL (operands[3]) == 1\n\
    || INTVAL (operands[3]) == 128)\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 20589 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) == -1
    || INTVAL (operands[3]) == 1
    || INTVAL (operands[3]) == 128)
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 20589 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) == -1
    || INTVAL (operands[3]) == 1
    || INTVAL (operands[3]) == 128)
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 7468 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM",
    __builtin_constant_p 
#line 7468 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    ? (int) 
#line 7468 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    : -1 },
#line 12533 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12533 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12533 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 9354 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 9354 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 9354 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 3189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 3189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 3189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 8903 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8903 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8903 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 4964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 4964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 4964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 4197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 11845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 19893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode \n\
	&& ((!optimize_size && !TARGET_FAST_PREFIX)\n\
            /* ??? next two lines just !satisfies_constraint_K (...) */\n\
	    || GET_CODE (operands[2]) != CONST_INT\n\
	    || satisfies_constraint_K (operands[2])))\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || GET_CODE (operands[2]) != CONST_INT
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || GET_CODE (operands[2]) != CONST_INT
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4599 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 4599 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    ? (int) 
#line 4599 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    : -1 },
#line 1517 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM",
    __builtin_constant_p 
#line 1517 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    ? (int) 
#line 1517 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    : -1 },
#line 7488 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7488 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7488 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 3286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 9672 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 9672 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 9672 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 12622 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12622 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12622 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 818 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 818 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 818 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 1080 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1080 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1080 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 6694 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6694 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6694 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 20403 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1])",
    __builtin_constant_p 
#line 20403 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    ? (int) 
#line 20403 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    : -1 },
#line 4663 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4663 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4663 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387)
    : -1 },
#line 20633 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_SUB_ESP_8",
    __builtin_constant_p 
#line 20633 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_8)
    ? (int) 
#line 20633 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_8)
    : -1 },
#line 21070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 21070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 21070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
#line 4097 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 4097 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 4097 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 11311 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11311 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11311 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 10326 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10326 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10326 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 5131 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 5131 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 5131 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 13172 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 13172 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 13172 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 6744 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6744 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6744 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 2156 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 2156 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 2156 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
#line 12449 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12449 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12449 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 2475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2475 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 6129 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 6129 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 6129 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 11559 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11559 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11559 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 2112 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2112 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2112 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    : -1 },
#line 4461 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4461 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4461 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 4863 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 4863 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 4863 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
#line 19922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)\n\
   && ! optimize_size\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))",
    __builtin_constant_p 
#line 19922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode)))
    ? (int) 
#line 19922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode)))
    : -1 },
#line 1509 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 1509 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 1509 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
#line 9964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 9964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 9964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 292 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 292 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 292 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
#line 5891 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000",
    __builtin_constant_p 
#line 5891 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    ? (int) 
#line 5891 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    : -1 },
#line 21146 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && !TARGET_64BIT",
    __builtin_constant_p 
#line 21146 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    ? (int) 
#line 21146 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    : -1 },
#line 3135 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3135 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3135 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 21042 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 21042 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 21042 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 1614 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 1614 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 1614 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 14823 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_BSWAP",
    __builtin_constant_p 
#line 14823 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    ? (int) 
#line 14823 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    : -1 },
#line 2922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && GET_MODE (operands[0]) == XFmode\n\
   && ! (ANY_FP_REG_P (operands[0]) || \n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) || \n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 15394 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15394 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15394 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 8362 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8362 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8362 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 10356 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 10356 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 10356 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 19998 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19998 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19998 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 5505 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5505 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5505 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 4160 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4160 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4160 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 5027 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5027 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5027 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 13184 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 13184 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 13184 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
  { "(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 19393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 19395 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 19393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 19395 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 31 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
  { "TARGET_64BIT && TARGET_CMPXCHG16B",
    __builtin_constant_p 
#line 31 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    ? (int) 
#line 31 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    : -1 },
#line 2200 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 2200 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 2200 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 18634 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SINGLE_STRINGOP || optimize_size",
    __builtin_constant_p 
#line 18634 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SINGLE_STRINGOP || optimize_size)
    ? (int) 
#line 18634 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SINGLE_STRINGOP || optimize_size)
    : -1 },
#line 9795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH && reload_completed",
    __builtin_constant_p 
#line 9795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && reload_completed)
    ? (int) 
#line 9795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && reload_completed)
    : -1 },
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 21164 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 21164 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    ? (int) 
#line 21164 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    : -1 },
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 4269 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4269 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4269 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 3091 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 3091 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 3091 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 15530 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15530 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15530 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 4289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4289 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 9096 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 9096 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 9096 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 3367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(reload_completed\n\
    && dead_or_set_p (insn, operands[1])\n\
    && !reg_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p 
#line 3367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    ? (int) 
#line 3367 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    : -1 },
#line 1374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1374 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 11545 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11545 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11545 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 283 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 283 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 283 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4358 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 4708 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !TARGET_64BIT",
    __builtin_constant_p 
#line 4708 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    ? (int) 
#line 4708 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    : -1 },
#line 20721 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 3\n\
   || INTVAL (operands[2]) == 5\n\
   || INTVAL (operands[2]) == 9",
    __builtin_constant_p 
#line 20721 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    ? (int) 
#line 20721 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    : -1 },
#line 977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 11915 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11915 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11915 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 13934 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13934 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13934 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 12650 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12650 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12650 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 7682 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size || TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7682 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
    ? (int) 
#line 7682 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
    : -1 },
#line 6922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 12931 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12931 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12931 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 7304 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7304 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7304 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 10202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 10202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 10202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
#line 14035 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14035 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14035 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 9539 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 9539 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 9539 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 8073 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 8073 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 8073 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 10853 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])\n\
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4",
    __builtin_constant_p 
#line 10853 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    ? (int) 
#line 10853 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    : -1 },
#line 6238 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6238 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6238 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 8845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8845 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 8285 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8285 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8285 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 7951 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
    && ix86_match_ccmode (insn,\n\
 			 GET_CODE (operands[1]) == CONST_INT\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7951 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7951 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
#line 4611 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 4611 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 4611 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 8090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 8090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 8090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 10813 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10813 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10813 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 13158 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 13158 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 13158 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 3297 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 3297 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 3297 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
#line 3446 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 3446 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 3446 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
#line 955 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 955 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 955 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 13773 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 13773 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    ? (int) 
#line 13773 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    : -1 },
#line 9302 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9302 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9302 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 4645 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4645 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH))
    ? (int) 
#line 4645 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH))
    : -1 },
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2642 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 2642 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 2642 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 759 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 759 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 759 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 20134 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn\n\
  && TARGET_SPLIT_LONG_MOVES",
    __builtin_constant_p 
#line 20134 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn
  && TARGET_SPLIT_LONG_MOVES)
    ? (int) 
#line 20134 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn
  && TARGET_SPLIT_LONG_MOVES)
    : -1 },
#line 9179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 9179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 9179 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 10937 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 10937 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 10937 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 9920 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands)",
    __builtin_constant_p 
#line 9920 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
    ? (int) 
#line 9920 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
    : -1 },
#line 19951 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)\n\
   && ! TARGET_FAST_PREFIX\n\
   && ! optimize_size",
    __builtin_constant_p 
#line 19951 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size)
    ? (int) 
#line 19951 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size)
    : -1 },
#line 1229 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1229 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1229 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 14969 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 14969 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 14969 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
#line 3562 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "0",
    __builtin_constant_p 
#line 3562 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(0)
    ? (int) 
#line 3562 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(0)
    : -1 },
#line 7599 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (optimize_size || TARGET_USE_CLTD)",
    __builtin_constant_p 
#line 7599 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
    ? (int) 
#line 7599 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
    : -1 },
#line 5637 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5637 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5637 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 8323 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)",
    __builtin_constant_p 
#line 8323 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    ? (int) 
#line 8323 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    : -1 },
#line 1453 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 1453 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 1453 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 20812 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(TARGET_K8 || TARGET_GENERIC64) && !optimize_size\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 20812 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 20812 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && !satisfies_constraint_K (operands[2]))
    : -1 },
#line 4108 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4108 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4108 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 19435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 19435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 19435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 19495 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 19495 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 19495 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 9066 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 9066 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 9066 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 2467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 2467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 2467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 15805 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 15805 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 15805 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 11594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 2937 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && GET_CODE (operands[1]) == MEM\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)\n\
   && constant_pool_reference_p (operands[1])",
    __builtin_constant_p 
#line 2937 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && constant_pool_reference_p (operands[1]))
    ? (int) 
#line 2937 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && constant_pool_reference_p (operands[1]))
    : -1 },
#line 3900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && TARGET_64BIT",
    __builtin_constant_p 
#line 3900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    ? (int) 
#line 3900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    : -1 },
#line 10298 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10298 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10298 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 20766 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !optimize_size \n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20766 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20766 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 19805 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19805 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 19805 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 1005 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 1005 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 1005 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 19370 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19370 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19370 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 11125 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 11125 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 11125 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 1797 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1797 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1797 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
#line 9852 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 9852 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 9852 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 9834 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9834 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9834 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 11772 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11772 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11772 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11929 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11929 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11929 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 4787 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4787 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4787 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 8719 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 8719 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 8719 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 14832 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BSWAP",
    __builtin_constant_p 
#line 14832 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BSWAP)
    ? (int) 
#line 14832 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BSWAP)
    : -1 },
#line 13110 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 13110 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 13110 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 1622 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 1622 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 1622 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 15339 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15339 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15339 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 1580 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 1580 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 1580 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 2147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 2147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 2147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 926 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 3207 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 3207 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 3207 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 18284 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! optimize_size || TARGET_INLINE_ALL_STRINGOPS",
    __builtin_constant_p 
#line 18284 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size || TARGET_INLINE_ALL_STRINGOPS)
    ? (int) 
#line 18284 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size || TARGET_INLINE_ALL_STRINGOPS)
    : -1 },
#line 15548 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15548 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15548 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
  { "(TARGET_SSE2 && TARGET_SSE_MATH) && ( reload_completed)",
    __builtin_constant_p (
#line 9865 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH) && 
#line 9867 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 9865 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH) && 
#line 9867 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7887 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7887 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7887 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 20431 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20431 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20431 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 19825 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19825 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 19825 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 5077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 5077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 5077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 8263 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8263 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8263 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 1166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1166 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 4713 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4713 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4713 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    : -1 },
#line 5396 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4A",
    __builtin_constant_p 
#line 5396 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    ? (int) 
#line 5396 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    : -1 },
#line 12824 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12824 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12824 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 15321 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15321 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15321 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 9584 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 9584 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 9584 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 6890 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6890 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6890 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 3625 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3625 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3625 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 836 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 836 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 836 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 10958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 10958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 10958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 30 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic",
    __builtin_constant_p 
#line 30 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    ? (int) 
#line 30 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    : -1 },
#line 2467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 2467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 2467 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 19444 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19444 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19444 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 2049 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2049 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2049 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 15736 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 15736 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 15736 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
#line 3821 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 3821 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 3821 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)",
    __builtin_constant_p (
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 28 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    ? (int) (
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 28 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    : -1 },
#line 12883 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12883 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12883 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 4160 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4160 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4160 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 11830 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11830 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11830 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 1470 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size)",
    __builtin_constant_p 
#line 1470 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
    ? (int) 
#line 1470 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
    : -1 },
#line 267 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 267 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 267 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10672 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 10672 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 10672 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 3757 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3757 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3757 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 12863 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 12863 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 12863 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 8877 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8877 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8877 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 4127 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4127 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4127 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 11410 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 11410 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 11410 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 9724 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9724 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9724 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 1072 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1072 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 1072 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 10411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 10411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 10411 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 4084 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4084 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4084 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 20218 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != 0\n\
       || satisfies_constraint_K (operands[3]))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 20218 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != 0
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 20218 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != 0
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 779 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 779 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 779 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 5359 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5359 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5359 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 8341 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed",
    __builtin_constant_p 
#line 8341 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    ? (int) 
#line 8341 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    : -1 },
#line 3107 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 3107 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 3107 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 15178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 15178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 15178 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 19361 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 19361 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 19361 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 12032 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12032 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12032 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 6494 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6494 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6494 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 6288 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6288 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6288 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 977 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 14422 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 14422 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 14422 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 13984 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13984 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13984 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 1214 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1214 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1214 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 8388 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8388 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8388 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 9628 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 9628 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 9628 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 9752 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 9752 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 9752 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
    : -1 },
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4608 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4608 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4608 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 15430 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15430 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15430 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 9403 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 9403 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 9403 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 10150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && (reload_completed || !TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !TARGET_SSE_MATH))
    ? (int) 
#line 10150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !TARGET_SSE_MATH))
    : -1 },
#line 9222 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 9222 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 9222 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 12209 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 12209 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    ? (int) 
#line 12209 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    : -1 },
#line 10236 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 10236 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 10236 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 769 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 769 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 769 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 13014 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 13014 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 13014 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 12128 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12128 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12128 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 13508 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE",
    __builtin_constant_p 
#line 13508 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    ? (int) 
#line 13508 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    : -1 },
#line 247 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 247 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 247 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 6953 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6953 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6953 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 10769 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 10769 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 10769 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 21196 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_3DNOW && TARGET_64BIT",
    __builtin_constant_p 
#line 21196 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    ? (int) 
#line 21196 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    : -1 },
#line 20751 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20751 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20751 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 12698 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12698 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12698 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 18709 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)",
    __builtin_constant_p 
#line 18709 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    ? (int) 
#line 18709 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    : -1 },
#line 8640 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8640 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8640 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 8025 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 8025 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 8025 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 503 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 503 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 503 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 11717 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11717 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11717 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 15837 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 15837 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    ? (int) 
#line 15837 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    : -1 },
#line 14506 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 14506 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 14506 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4337 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4337 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)",
    __builtin_constant_p (
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 27 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    ? (int) (
#line 139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 27 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    : -1 },
#line 21010 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "SIBLING_CALL_P (insn) && !TARGET_64BIT",
    __builtin_constant_p 
#line 21010 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT)
    ? (int) 
#line 21010 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT)
    : -1 },
#line 19420 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19420 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19420 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 12731 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12731 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12731 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 1663 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed && (!TARGET_USE_MOV0 || optimize_size)",
    __builtin_constant_p 
#line 1663 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
    ? (int) 
#line 1663 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
    : -1 },
#line 16273 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 16273 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !reload_completed && !reload_in_progress)
    ? (int) 
#line 16273 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !reload_completed && !reload_in_progress)
    : -1 },
#line 11087 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 11087 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 11087 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 869 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 20412 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20412 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20412 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 3457 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 3457 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 3457 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 13063 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 13063 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 13063 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 2477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 2477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 2477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 848 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 848 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 848 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
  { "(TARGET_SSE4_2\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 6129 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress)) && 
#line 6132 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 6129 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress)) && 
#line 6132 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 3391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 13090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 13090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 13090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 3446 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 3446 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 3446 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
#line 2188 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE || TARGET_64BIT",
    __builtin_constant_p 
#line 2188 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    ? (int) 
#line 2188 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    : -1 },
#line 2993 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 2993 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 2993 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 10398 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 10398 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 10398 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 4772 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4772 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 4772 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 274 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 274 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 274 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4372 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 15756 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15756 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH)
    ? (int) 
#line 15756 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH)
    : -1 },
#line 2814 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!optimize_size",
    __builtin_constant_p 
#line 2814 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size)
    ? (int) 
#line 2814 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!optimize_size)
    : -1 },
#line 13077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 13077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 13077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 3654 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3654 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3654 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 13472 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 13472 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 13472 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 20307 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! optimize_size && ! TARGET_READ_MODIFY",
    __builtin_constant_p 
#line 20307 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY)
    ? (int) 
#line 20307 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY)
    : -1 },
#line 12519 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12519 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12519 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 19611 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 19611 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 19611 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 15648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP",
    __builtin_constant_p 
#line 15648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP)
    ? (int) 
#line 15648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP)
    : -1 },
#line 14749 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 14749 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 14749 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 11165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 11165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 11165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 15493 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15493 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15493 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 20378 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == HImode\n\
    || GET_MODE (operands[0]) == SImode \n\
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))\n\
   && (optimize_size || TARGET_PENTIUM)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20378 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode 
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_size || TARGET_PENTIUM)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20378 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode 
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_size || TARGET_PENTIUM)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6835 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6835 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6835 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 594 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
#line 8189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 8189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 8189 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
#line 12958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 12958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 12958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 545 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 545 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 545 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 3223 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 3223 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 3223 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 15794 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15794 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15794 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 11964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11964 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 21393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE4_2 && TARGET_64BIT",
    __builtin_constant_p 
#line 21393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE4_2 && TARGET_64BIT)
    ? (int) 
#line 21393 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE4_2 && TARGET_64BIT)
    : -1 },
#line 5407 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5407 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5407 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 916 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 14060 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 14060 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 14060 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 4885 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && (ix86_preferred_stack_boundary >= 128)",
    __builtin_constant_p 
#line 4885 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && (ix86_preferred_stack_boundary >= 128))
    ? (int) 
#line 4885 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && (ix86_preferred_stack_boundary >= 128))
    : -1 },
#line 8168 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 8168 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 8168 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
#line 6731 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6731 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6731 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 12568 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12568 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12568 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 8774 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8774 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8774 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 10424 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10424 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10424 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 9139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 9139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 9139 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 3219 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3219 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3219 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 11783 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11783 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11783 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 5233 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 5233 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 5233 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
#line 5301 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && TARGET_64BIT",
    __builtin_constant_p 
#line 5301 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    ? (int) 
#line 5301 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    : -1 },
#line 20099 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! optimize_size\n\
   && ! TARGET_USE_MOV0\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cost->large_insn\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20099 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cost->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20099 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cost->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 9822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V1DImode, operands)",
    __builtin_constant_p 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V1DImode, operands))
    ? (int) 
#line 896 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V1DImode, operands))
    : -1 },
#line 4197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 2038 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))\n\
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2038 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 2038 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 13124 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 13124 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 13124 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 3418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4337 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4330 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4337 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 3435 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 19254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 19254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 19254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
#line 20342 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "! optimize_size && ! TARGET_READ_MODIFY_WRITE",
    __builtin_constant_p 
#line 20342 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY_WRITE)
    ? (int) 
#line 20342 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY_WRITE)
    : -1 },
#line 4540 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4540 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 4540 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 1408 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT",
    __builtin_constant_p 
#line 1408 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    ? (int) 
#line 1408 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    : -1 },
#line 12601 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12601 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12601 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 11795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 832 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 832 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 832 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 8407 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8407 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8407 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 5183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5190 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8740 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8740 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8740 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 10247 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 10247 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 10247 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 8220 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8220 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8220 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 6150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffff) != 0x8000",
    __builtin_constant_p 
#line 6150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    ? (int) 
#line 6150 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    : -1 },
#line 20893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode \n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   /* We reorder load and the shift.  */\n\
   && !rtx_equal_p (operands[1], operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])\n\
   /* Last PLUS must consist of operand 0 and 3.  */\n\
   && !rtx_equal_p (operands[0], operands[3])\n\
   && (rtx_equal_p (operands[3], operands[6])\n\
       || rtx_equal_p (operands[3], operands[7]))\n\
   && (rtx_equal_p (operands[0], operands[6])\n\
       || rtx_equal_p (operands[0], operands[7]))\n\
   /* The intermediate operand 0 must die or be same as output.  */\n\
   && (rtx_equal_p (operands[0], operands[5])\n\
       || peep2_reg_dead_p (3, operands[0]))",
    __builtin_constant_p 
#line 20893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode 
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    ? (int) 
#line 20893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode 
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    : -1 },
#line 2461 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2461 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2461 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 4123 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
  { "!TARGET_SSE2 && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4123 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4123 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 732 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 732 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 732 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 20644 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_ADD_ESP_4",
    __builtin_constant_p 
#line 20644 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_4)
    ? (int) 
#line 20644 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_4)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
