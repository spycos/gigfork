/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "test{q}\t{%0, %0|%0, %0}",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{l}\t{%0, %0|%0, %0}",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_6[] = {
  "test{w}\t{%0, %0|%0, %0}",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_9[] = {
  "test{b}\t{%0, %0|%0, %0}",
  "cmp{b}\t{$0, %0|%0, 0}",
};

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 898 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_19 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 917 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_20 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 930 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 943 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_22 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 958 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 1);
}

static const char *
output_23 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 980 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 980 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1034 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1050 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1068 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1083 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1099 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1193 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = constm1_rtx;
  return "or{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1209 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      if (get_attr_mode (insn) == MODE_TI)
        return "pxor\t%0, %0";
      return "xorps\t%0, %0";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_SI:
          return "movd\t{%1, %0|%0, %1}";
	case MODE_SF:
          return "movss\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMXADD:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      if (get_attr_mode (insn) == MODE_DI)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%1, %0|%0, %1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_41[] = {
  "movabs{l}\t{%1, %P0|%P0, %1}",
  "mov{l}\t{%1, %a0|%a0, %1}",
};

static const char * const output_42[] = {
  "movabs{l}\t{%P1, %0|%0, %P1}",
  "mov{l}\t{%a1, %0|%0, %a1}",
};

static const char *
output_46 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1345 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_47[] = {
  "movabs{w}\t{%1, %P0|%P0, %1}",
  "mov{w}\t{%1, %a0|%a0, %1}",
};

static const char * const output_48[] = {
  "movabs{w}\t{%P1, %0|%0, %P1}",
  "mov{w}\t{%a1, %0|%0, %a1}",
};

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1518 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM);
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_59 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1648 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    return "and{q}\t{$0xffffffffffffff00, %q0}";
  else
    return "and{l}\t{$0xffffff00, %k0}";
}
}

static const char *
output_63 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1695 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_64 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1722 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_65[] = {
  "movabs{b}\t{%1, %P0|%P0, %1}",
  "mov{b}\t{%1, %a0|%a0, %1}",
};

static const char * const output_66[] = {
  "movabs{b}\t{%P1, %0|%0, %P1}",
  "mov{b}\t{%a1, %0|%0, %a1}",
};

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1800 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_70 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1827 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_75[] = {
  "push{q}\t%1",
  "#",
};

static const char *
output_80 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1993 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = constm1_rtx;
  return "or{q}\t{%1, %0|%0, %1}";
}
}

static const char * const output_81[] = {
  "#",
  "#",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movdqa\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char *
output_82 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2050 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSECVT:
      if (which_alternative == 13)
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";
    case TYPE_SSEMOV:
      if (get_attr_mode (insn) == MODE_TI)
	  return "movdqa\t{%1, %0|%0, %1}";
      /* FALLTHRU */
    case TYPE_MMXMOV:
      /* Moves from and into integer register is done using movd opcode with
 	 REX prefix.  */
      if (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1]))
	  return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";
    case TYPE_SSELOG1:
    case TYPE_MMXADD:
      return "pxor\t%0, %0";
    case TYPE_MULTI:
      return "#";
    case TYPE_LEA:
      return "lea{q}\t{%a1, %0|%0, %a1}";
    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else if (which_alternative == 2)
	return "movabs{q}\t{%1, %0|%0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_83[] = {
  "movabs{q}\t{%1, %P0|%P0, %1}",
  "mov{q}\t{%1, %a0|%a0, %1}",
};

static const char * const output_84[] = {
  "movabs{q}\t{%P1, %0|%0, %P1}",
  "mov{q}\t{%a1, %0|%0, %a1}",
};

static const char *
output_86 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2202 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "xorps\t%0, %0";
      else
	return "pxor\t%0, %0";
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2236 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "#";
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "xorps\t%0, %0";
      else
	return "pxor\t%0, %0";
    case 3:
    case 4:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_88 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2293 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_89 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2306 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{q}\t%q1";
}
}

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2351 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";
    case 5:
      if (get_attr_mode (insn) == MODE_TI)
	return "pxor\t%0, %0";
      else
	return "xorps\t%0, %0";
    case 6:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movss\t{%1, %0|%0, %1}";
    case 7:
    case 8:
      return "movss\t{%1, %0|%0, %1}";

    case 9:
    case 10:
      return "movd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2436 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_92 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_93 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2476 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2525 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";
    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "xorps\t%0, %0";
	case MODE_V2DF:
	  return "xorpd\t%0, %0";
	case MODE_TI:
	  return "pxor\t%0, %0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_95 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2647 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "xorps\t%0, %0";
	case MODE_V2DF:
	  return "xorpd\t%0, %0";
	case MODE_TI:
	  return "pxor\t%0, %0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable();
    }
}
}

static const char *
output_96 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2777 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_97 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2803 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2815 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2858 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_100 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2892 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2972 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_102 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2995 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "#";
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "xorps\t%0, %0";
      else
	return "pxor\t%0, %0";
    case 3:
    case 4:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_111[] = {
  "#",
  "#",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_112[] = {
  "mov\t{%k1, %k0|%k0, %k1}",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_116[] = {
  "{cltq|cdqe}",
  "movs{lq|x}\t{%1,%0|%0, %1}",
};

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3439 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3466 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%k0|%k0, %1}";
    }
}
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3492 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      return "cvtss2sd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3665 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3711 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3759 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3822 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 1:
      return output_387_reg_move (insn, operands);
    case 2:
      return "cvtsd2ss\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3859 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 1:
      return "#";
    case 2:
      return "cvtsd2ss\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3897 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 1:
      return "#";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3922 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3970 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3985 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3997 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
   else
     return "fst%z0\t%y0";
}
}

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4013 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_139 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4070 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_140 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4085 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_141 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4097 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_142 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4113 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *
output_152 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4363 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4363 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4363 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_161 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4449 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4506 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_164 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4506 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_169[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_170[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2ss\t{%1, %0|%0, %1}",
  "cvtsi2ss\t{%1, %0|%0, %1}",
};

static const char * const output_172[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_173[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2ss{q}\t{%1, %0|%0, %1}",
  "cvtsi2ss{q}\t{%1, %0|%0, %1}",
};

static const char * const output_175[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_176[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_177[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2sd\t{%1, %0|%0, %1}",
  "cvtsi2sd\t{%1, %0|%0, %1}",
};

static const char * const output_179[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_180[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2sd{q}\t{%1, %0|%0, %1}",
  "cvtsi2sd{q}\t{%1, %0|%0, %1}",
};

static const char * const output_182[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_183[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_184[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_185[] = {
  "fild%z1\t%1",
  "#",
};

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5290 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5364 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? We ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5413 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* ???? We ought to handle there the 32bit case too
	 - do we need new constraint?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5466 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128))
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
	return "sub{q}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5511 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5554 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
	{
  	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5638 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %k0|%k0, %a2}";

    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5710 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5758 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5800 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5846 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5893 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{l}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5935 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5988 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6031 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6073 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6112 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6152 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{w}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6192 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6240 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6290 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6336 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.  */
      if (GET_CODE (operands[1]) == CONST_INT
	  && INTVAL (operands[1]) < 0)
	{
	  operands[1] = GEN_INT (-INTVAL (operands[1]));
	  return "sub{b}\t{%1, %0|%0, %1}";
	}
      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6379 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
		          && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6456 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx
	  || (GET_CODE (operands[2]) == CONST_INT
	      && INTVAL (operands[2]) == 255))
        return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (INTVAL (operands[2]) < 0)
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "add{b}\t{%2, %0|%0, %2}";
        }
      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6496 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6540 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
          return "dec{b}\t%h0";
	}

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char *
output_233 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6576 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (GET_CODE (operands[2]) == CONST_INT
			  && INTVAL (operands[2]) == 255));
          return "dec{b}\t%h0";
        }

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_258[] = {
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %0|%0, %2}",
};

static const char * const output_259[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_260[] = {
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_261[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char * const output_289[] = {
  "test{l}\t{%k1, %k0|%k0, %k1}",
  "test{l}\t{%k1, %k0|%k0, %k1}",
  "test{q}\t{%1, %0|%0, %1}",
  "test{q}\t{%1, %0|%0, %1}",
  "test{q}\t{%1, %0|%0, %1}",
};

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7955 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (which_alternative == 3)
    {
      if (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8221 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (GET_CODE (operands[2]) == CONST_INT);
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xffff);
	    mode = HImode;
	  }
	
	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bq|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wq|x}\t{%1,%0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "and{l}\t{%k2, %k0|%k0, %k2}";
      else
	return "and{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_301[] = {
  "and{l}\t{%k2, %k0|%k0, %k2}",
  "and{q}\t{%2, %0|%0, %2}",
  "and{q}\t{%2, %0|%0, %2}",
};

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8286 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (GET_CODE (operands[2]) == CONST_INT);
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xffff);
	    mode = HImode;
	  }
	
	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bl|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wl|x}\t{%1,%0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8408 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (GET_CODE (operands[2]) == CONST_INT);
      gcc_assert (INTVAL (operands[2]) == 0xff);
      return "movz{bl|x}\t{%b1, %k0|%k0, %b1}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_308[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8484 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (which_alternative == 2)
    {
      if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_331[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_340[] = {
  "xor{q}\t{%2, %0|%0, %2}",
  "xor{q}\t{%2, %0|%0, %2}",
};

static const char * const output_341[] = {
  "xor{q}\t{%2, %0|%0, %2}",
  "xor{q}\t{%2, %0|%0, %2}",
};

static const char * const output_353[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_408[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char *
output_410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10479 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "pslldq\t{%2, %0|%0, %2}";
}
}

static const char * const output_413[] = {
  "shld{q}\t{%2, %1, %0|%0, %1, %2}",
  "shld{q}\t{%s2%1, %0|%0, %1, %2}",
};

static const char *
output_414 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10570 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{q}\t{%0, %0|%0, %0}";

    case TYPE_LEA:
      gcc_assert (GET_CODE (operands[2]) == CONST_INT);
      gcc_assert ((unsigned HOST_WIDE_INT) INTVAL (operands[2]) <= 3);
      operands[1] = gen_rtx_MULT (DImode, operands[1],
				  GEN_INT (1 << INTVAL (operands[2])));
      return "lea{q}\t{%a1, %0|%0, %a1}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10638 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10679 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_418[] = {
  "shld{l}\t{%2, %1, %0|%0, %1, %2}",
  "shld{l}\t{%s2%1, %0|%0, %1, %2}",
};

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10814 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t{%0, %0|%0, %0}";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10900 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%k0, %k0|%k0, %k0}";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %k0|%k0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10965 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11006 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11048 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t{%k0, %k0|%k0, %k0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %k0|%k0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_424 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11089 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11127 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11172 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11213 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11257 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t{%k0, %k0|%k0, %k0}";
      else
        return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_429 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11313 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t{%k0, %k0|%k0, %k0}";
      else
        return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_430 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11376 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_431 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11417 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_size))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_434[] = {
  "shrd{q}\t{%2, %1, %0|%0, %1, %2}",
  "shrd{q}\t{%s2%1, %0|%0, %1, %2}",
};

static const char * const output_435[] = {
  "{cqto|cqo}",
  "sar{q}\t{%2, %0|%0, %2}",
};

static const char * const output_437[] = {
  "sar{q}\t{%2, %0|%0, %2}",
  "sar{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_443[] = {
  "shrd{l}\t{%2, %1, %0|%0, %1, %2}",
  "shrd{l}\t{%s2%1, %0|%0, %1, %2}",
};

static const char * const output_444[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char * const output_445[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_448[] = {
  "sar{l}\t{%2, %0|%0, %2}",
  "sar{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_449[] = {
  "sar{l}\t{%2, %k0|%k0, %2}",
  "sar{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_457[] = {
  "sar{w}\t{%2, %0|%0, %2}",
  "sar{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_464[] = {
  "sar{b}\t{%2, %0|%0, %2}",
  "sar{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_465[] = {
  "sar{b}\t{%1, %0|%0, %1}",
  "sar{b}\t{%b1, %0|%0, %b1}",
};

static const char *
output_471 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12176 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "psrldq\t{%2, %0|%0, %2}";
}
}

static const char * const output_474[] = {
  "shr{q}\t{%2, %0|%0, %2}",
  "shr{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_482[] = {
  "shr{l}\t{%2, %0|%0, %2}",
  "shr{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_483[] = {
  "shr{l}\t{%2, %k0|%k0, %2}",
  "shr{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_491[] = {
  "shr{w}\t{%2, %0|%0, %2}",
  "shr{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_498[] = {
  "shr{b}\t{%2, %0|%0, %2}",
  "shr{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_499[] = {
  "shr{b}\t{%1, %0|%0, %1}",
  "shr{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_506[] = {
  "rol{q}\t{%2, %0|%0, %2}",
  "rol{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_509[] = {
  "rol{l}\t{%2, %0|%0, %2}",
  "rol{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_510[] = {
  "rol{l}\t{%2, %k0|%k0, %2}",
  "rol{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_512[] = {
  "rol{w}\t{%2, %0|%0, %2}",
  "rol{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_515[] = {
  "rol{b}\t{%1, %0|%0, %1}",
  "rol{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_516[] = {
  "rol{b}\t{%2, %0|%0, %2}",
  "rol{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_519[] = {
  "ror{q}\t{%2, %0|%0, %2}",
  "ror{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_522[] = {
  "ror{l}\t{%2, %0|%0, %2}",
  "ror{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_523[] = {
  "ror{l}\t{%2, %k0|%k0, %2}",
  "ror{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_525[] = {
  "ror{w}\t{%2, %0|%0, %2}",
  "ror{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_528[] = {
  "ror{b}\t{%2, %0|%0, %2}",
  "ror{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_529[] = {
  "ror{b}\t{%1, %0|%0, %1}",
  "ror{b}\t{%b1, %0|%0, %b1}",
};

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14304 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14318 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P0";
      else
	return "call\t%P0";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A0";
  else
    return "call\t%A0";
}
}

static const char *
output_559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14357 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14369 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char *
output_561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14380 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "jmp\t%P0";
  return "jmp\t%A0";
}
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14391 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char *
output_571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14569 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
#ifdef ASM_OUTPUT_MAX_SKIP_ALIGN
  ASM_OUTPUT_MAX_SKIP_ALIGN (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14592 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{ return output_set_got (operands[0], NULL_RTX); }
}

static const char *
output_573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14602 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{ return output_set_got (operands[0], operands[1]); }
}

static const char *
output_607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15249 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15268 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15283 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_610 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15298 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15323 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15342 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15359 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_614 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15359 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_615 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15376 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_616 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15376 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15397 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15418 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15433 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15450 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15477 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15496 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15514 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15514 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15532 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15532 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15550 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15567 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15585 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_630 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15602 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15616 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15632 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15632 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_634 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15649 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_635 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15649 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_636 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15666 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_637 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15683 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_638 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15701 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char * const output_639[] = {
  "fsqrt",
  "sqrtss\t{%1, %0|%0, %1}",
};

static const char * const output_642[] = {
  "fsqrt",
  "sqrtsd\t{%1, %0|%0, %1}",
};

static const char *
output_676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17512 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_680 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17576 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_681 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17576 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17745 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17804 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_700 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17986 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18045 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18045 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_744[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_746[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_747[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_749[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_750[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_751[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_752[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 19676 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{l}\t{%2, %0|%0, %2}";
	}
      return "add{l}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 19717 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{q}\t{%2, %0|%0, %2}";
	}
      return "add{q}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 19761 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      return "add{q}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = gen_rtx_PLUS (DImode, operands[1], operands[2]);
      return "lea{q}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20938 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20953 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P1";
      else
	return "call\t%P1";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A1";
  else
    return "call\t%A1";
}
}

static const char *
output_768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20973 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20986 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20999 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char *
output_771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21011 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "jmp\t%P1";
  return "jmp\t%A1";
}
}

static const char *
output_772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21023 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char *
output_775 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21054 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{ return ASM_SHORT "0x0b0f"; }
}

static const char *
output_776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21090 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"

{
  int i;
  operands[0] = gen_rtx_MEM (Pmode,
			     gen_rtx_PLUS (Pmode, operands[0], operands[4]));
  output_asm_insn ("jmp\t%A1", operands);
  for (i = SSE_REGPARM_MAX - 1; i >= INTVAL (operands[2]); i--)
    {
      operands[4] = adjust_address (operands[0], DImode, i*16);
      operands[5] = gen_rtx_REG (TImode, SSE_REGNO (i));
      PUT_MODE (operands[4], TImode);
      if (GET_CODE (XEXP (operands[0], 0)) != PLUS)
        output_asm_insn ("rex", operands);
      output_asm_insn ("movaps\t{%5, %4|%4, %5}", operands);
    }
  (*targetm.asm_out.internal_label) (asm_out_file, "L",
			     CODE_LABEL_NUMBER (operands[3]));
  RET;
}
  
}

static const char *
output_777 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21147 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];  
}
}

static const char *
output_778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21165 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];  
}
}

static const char *
output_779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21183 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char *
output_780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21197 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char *
output_784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21260 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
     /* The kernel uses a different segment register for performance reasons; a
        system call would not have to trash the userspace segment register,
        which would be expensive */
     if (ix86_cmodel != CM_KERNEL)
        return "mov{q}\t{%%fs:%P1, %2|%2, QWORD PTR %%fs:%P1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2";
     else
        return "mov{q}\t{%%gs:%P1, %2|%2, QWORD PTR %%gs:%P1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2";
  }
}

static const char *
output_788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21336 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md"
{
     /* The kernel uses a different segment register for performance reasons; a
        system call would not have to trash the userspace segment register,
        which would be expensive */
     if (ix86_cmodel != CM_KERNEL)
        return "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%%fs:%P2, %3|%3, QWORD PTR %%fs:%P2}";
     else
        return "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%%gs:%P2, %3|%3, QWORD PTR %%gs:%P2}";
  }
}

static const char * const output_789[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_790[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_791[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_792[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_793[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_794[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_795[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_796[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_797[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_798[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_801[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%2, %0|%0, %2}",
};

static const char * const output_822[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_824[] = {
  "punpckhdq\t%0, %0",
  "unpckhps\t%0, %0",
  "#",
};

static const char *
output_898 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1077 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_900 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1119 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_904[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_906[] = {
  "punpckhdq\t%0, %0",
  "punpckhdq\t%0, %0",
  "pshufd\t{$85, %1, %0|%0, %1, 85}",
  "unpckhps\t%0, %0",
  "#",
};

static const char *
output_907 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1342 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md"
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}

static const char *
output_915 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_916 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_917 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_918 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 64 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_919 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      return "movaps\t{%1, %0|%0, %1}";
    default:
      abort();
    }
}
}

static const char *
output_920 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 145 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movapd\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_983[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_984[] = {
  "xorps\t%0, %0",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char *
output_989 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1167 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_990[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_991[] = {
  "movhps\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_992[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_993[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %0|%0, %2}",
};

static const char * const output_996[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_997[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_998[] = {
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "#",
};

static const char *
output_999 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1323 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  return "insertps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1050[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "movhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1051[] = {
  "movddup\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1052[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_1053 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2195 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1054[] = {
  "movhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "#",
};

static const char * const output_1055[] = {
  "movlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1056[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "shufpd\t{$1, %1, %0|%0, %1, 1}",
  "#",
};

static const char * const output_1057[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "#",
};

static const char * const output_1058[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1059[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1060[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "movhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1064[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char *
output_1143 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3765 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1144 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3795 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1145 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3812 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3828 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrq\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3931 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3972 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1155 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4013 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1156[] = {
  "movd\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
};

static const char * const output_1159[] = {
  "movhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "movq\t{%H1, %0|%0, %H1}",
};

static const char * const output_1160[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1161[] = {
  "pshufd\t{$0, %1, %0|%0, %1, 0}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1162[] = {
  "punpcklqdq\t%0, %0",
  "movlhps\t%0, %0",
};

static const char * const output_1163[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1164[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1165[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1166[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char *
output_1207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5254 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5269 "/Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1268[] = {
  "pcmpestrm\t{%4, %2, %0|%0, %2, %4}",
  "pcmpestrm\t{%4, %2, %0|%0, %2, %4}",
  "pcmpestri\t{%4, %2, %0|%0, %2, %4}",
  "pcmpestri\t{%4, %2, %0|%0, %2, %4}",
};

static const char * const output_1272[] = {
  "pcmpistrm\t{%2, %1, %0|%0, %1, %2}",
  "pcmpistrm\t{%2, %1, %0|%0, %1, %2}",
  "pcmpistri\t{%2, %1, %0|%0, %1, %2}",
  "pcmpistri\t{%2, %1, %0|%0, %1, %2}",
};



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,mr",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,mr",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,mq",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    SImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*x,*x,?r,m,?*Yi,*x",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rinm,rin,C,*y,*y,rm,C,*x,*Yi,*x,r,m",
    SImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    SImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "ri",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn",
    HImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    HImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    1
  },
  {
    const0_operand,
    "i",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "*qn,m",
    QImode,
    0,
    1
  },
  {
    q_regs_operand,
    "+q",
    QImode,
    1,
    1
  },
  {
    const0_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=Q,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    QImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "riF*m",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<,!<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "re*m,n",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,*y,m*y,*y,*Yt,m,*Yt,*Yt,*x,m,*x,*x",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,*y,m,C,*Yt,*Yt,m,C,*x,*x,m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,!m,*y,*y,?rm,?*y,*x,*x,?rm,?*x,?*x,?*y",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "Z,rem,i,re,n,C,*y,*y,rm,C,*x,*x,rm,*y,*x",
    DImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    DImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,x,x,xm",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,xm,x",
    TImode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFm,x",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    SFmode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "f,rF,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,m,x,x,x,m,!*y,!rm,!*y",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,rmF,Fr,C,x,xm,x,rm,*y,*y",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r,Yt",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFo,Yt",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o,Yt*x,Yt*x,Yt*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r,C,Yt*x,mYt*x,Yt*x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o,Yt*x,Yt*x,Yt*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr,C,Yt*x,m,Yt*x",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,ro",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,x,x,xm",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,xm,x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,?r,?*o,?*y,?*Yi",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r,rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,?*y,?*Yi",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,0,rm,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?fx*r,Yt",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,Ytm",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,X",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?fx*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r,?x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r,?Yt",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "x,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Yt,Ytm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Yt,Ytm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,le",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    x86_64_general_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    x86_64_immediate_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni,lni",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,lni",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,lni",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn,ln",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qnm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmni,qni",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmni",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,!*a,r,rm",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,Z,e,e,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "in,in,rin",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,qm",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,re,rm,L",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,rem,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim,ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rim,ri",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qmi,ri",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qi,qmi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi,i",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qmi,qi",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rme",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem,re",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rmi",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmi,ri",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmi,qi,ri",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qmi,qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,f,rm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,rm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=f,rm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,f,rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=f,rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,?rm",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X",
    TFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "O",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+r*m,r*m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "J,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cJ,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+r*m,r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "J,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=*d,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,qm",
    QImode,
    1,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "e,c",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    const_0_to_63_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,c,d,a",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&a",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    x86_64_immediate_operand,
    "e,e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=0",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=0",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,c,d,a",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "R",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    0,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Yt,x,x,m,r,x",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Yt,*y,C,xm,x,x,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Yt,x,x,m,r,x",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Yt,*y,C,xm,x,x,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Yt,x,x,m,r,x",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Yt,*y,C,xm,x,x,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Yt,x,x,m,r,x",
    V1DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Yt,*y,C,xm,x,x,r",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,y,m,*y,*Yt,*Yt,*Yt,m,*x,*x,*x,m,?r,?m",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Yt,*y,C,*Ytm,*Yt,C,*x,m,*x,irm,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,y,m,*y,*Yt,*Yt,*Yt,m,*x,*x,*x,m,?r,?m",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Yt,*y,C,*Ytm,*Yt,C,*x,m,*x,irm,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,y,m,*y,*Yt,*Yt,*Yt,m,*x,*x,*x,m,?r,?m",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Yt,*y,C,*Ytm,*Yt,C,*x,m,*x,irm,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,y,m,*y,*Yt,*Yt,*Yt,m,*x,*x,*x,m,?r,?m",
    V1DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Yt,*y,C,*Ytm,*Yt,C,*x,m,*x,irm,r",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,*y,*y,m,*y,Yt,x,x,x,m,r,x",
    V2SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,*ym,*y,Yt,*y,C,x,m,x,x,r",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*y,*y,m,*y,*Yt,*x,*x,*x,m,?r,?m",
    V2SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,*ym,*y,*Yt,*y,C,*x,m,*x,irm,r",
    V2SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,y,m,m,frxy",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,y,x,y,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,frxy",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,o",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,y,m,mr,frxy",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,y,x,y,m",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,Yt,Yt,x,frxy",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,Yt,0,o",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rx",
    V4SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_or_0_operand,
    "C,x,m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,x",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,Yt,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_or_0_operand,
    "0,C,C,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x*rfF",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,fr",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,0,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_or_0_operand,
    "C,0,0,x,o,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,0,0,x*fr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0,x,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,Yt,Yt,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,m,0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_or_0_operand,
    "Yt,m,C,x,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xn",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xn",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xn",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    const_pow2_1_to_32768_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_128_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    const_pow2_1_to_2_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,Yi,x,x",
    V4SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "C,C,C,0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m,x",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,Yi",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "Yt,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,Yt,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "Yt,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,*rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Yt,x,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yt,?Yt,Yt,x,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,*y,0,0,0,m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_or_0_operand,
    "C,C,Yt,x,m,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "Y0",
    V2DFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "Y0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "Y0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y0,Y0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a,a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Y0,Y0,X,X",
    V16QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y0,Y0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Y0,Y0,X,X",
    V16QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    TImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "SD",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "qi",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "re",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cmpsi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "=m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Yt",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Yt",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ashldi_input_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_0_to_63_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:598 */
  {
    "cmpdi_ccno_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi_ccno_1_rex64,
    &operand_data[1],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:610 */
  {
    "*cmpdi_minus_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:627 */
  {
    "cmpdi_1_insn_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi_1_insn_rex64,
    &operand_data[5],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:637 */
  {
    "*cmpsi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:649 */
  {
    "*cmpsi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:666 */
  {
    "*cmpsi_1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:676 */
  {
    "*cmphi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:688 */
  {
    "*cmphi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:698 */
  {
    "*cmphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:708 */
  {
    "*cmpqi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    0,
    &operand_data[15],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:720 */
  {
    "*cmpqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:730 */
  {
    "*cmpqi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:740 */
  {
    "*cmpqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:754 */
  {
    "*cmpqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:768 */
  {
    "*cmpqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%h0, %h0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:795 */
  {
    "cmpqi_ext_3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3_insn,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:809 */
  {
    "cmpqi_ext_3_insn_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3_insn_rex64,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:823 */
  {
    "*cmpqi_ext_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:888 */
  {
    "*cmpfp_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_18 },
#else
    { 0, 0, output_18 },
#endif
    0,
    &operand_data[30],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:909 */
  {
    "*cmpfp_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_19 },
#else
    { 0, 0, output_19 },
#endif
    0,
    &operand_data[33],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:922 */
  {
    "*cmpfp_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_20 },
#else
    { 0, 0, output_20 },
#endif
    0,
    &operand_data[36],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:935 */
  {
    "*cmpfp_xf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    0,
    &operand_data[39],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:948 */
  {
    "*cmpfp_u",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_22 },
#else
    { 0, 0, output_22 },
#endif
    0,
    &operand_data[42],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:969 */
  {
    "*cmpfp_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_23 },
#else
    { 0, 0, output_23 },
#endif
    0,
    &operand_data[45],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:969 */
  {
    "*cmpfp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    0,
    &operand_data[49],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:989 */
  {
    "x86_fnstsw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstsw_1,
    &operand_data[30],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1001 */
  {
    "x86_sahf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sahf",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_sahf_1,
    &operand_data[53],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1012 */
  {
    "*cmpfp_i_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    0,
    &operand_data[54],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1027 */
  {
    "*cmpfp_i_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    0,
    &operand_data[56],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1042 */
  {
    "*cmpfp_i_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1061 */
  {
    "*cmpfp_iu_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    0,
    &operand_data[54],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1076 */
  {
    "*cmpfp_iu_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    0,
    &operand_data[56],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1091 */
  {
    "*cmpfp_iu_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1129 */
  {
    "*pushsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1138 */
  {
    "*pushsi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1146 */
  {
    "*pushsi2_prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1155 */
  {
    "*popsi1_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1166 */
  {
    "popsi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popsi1,
    &operand_data[62],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1176 */
  {
    "*movsi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%0, %0|%0, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1186 */
  {
    "*movsi_or",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    0,
    &operand_data[65],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1201 */
  {
    "*movsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    0,
    &operand_data[67],
    2,
    0,
    12,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1278 */
  {
    "*movabssi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_41 },
#else
    { 0, output_41, 0 },
#endif
    0,
    &operand_data[69],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1292 */
  {
    "*movabssi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_42 },
#else
    { 0, output_42, 0 },
#endif
    0,
    &operand_data[71],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1306 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[73],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1324 */
  {
    "*pushhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[75],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1333 */
  {
    "*pushhi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1341 */
  {
    "*movhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_46 },
#else
    { 0, 0, output_46 },
#endif
    0,
    &operand_data[79],
    2,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1395 */
  {
    "*movabshi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    0,
    &operand_data[81],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1409 */
  {
    "*movabshi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    0,
    &operand_data[83],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1423 */
  {
    "*swaphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1435 */
  {
    "*swaphi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1457 */
  {
    "*movstricthi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[87],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1466 */
  {
    "*movstricthi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%0, %0|%0, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[89],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1487 */
  {
    "*pushqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1496 */
  {
    "*pushqi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1514 */
  {
    "*movqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    0,
    &operand_data[95],
    2,
    0,
    7,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1597 */
  {
    "*swapqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1609 */
  {
    "*swapqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[99],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1631 */
  {
    "*movstrictqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1643 */
  {
    "*movstrictqi_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_59 },
#else
    { 0, 0, output_59 },
#endif
    0,
    &operand_data[103],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1659 */
  {
    "*movstrictqi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%0, %0|%0, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[103],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1669 */
  {
    "*movsi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[105],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1679 */
  {
    "*movhi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[107],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1689 */
  {
    "*movqi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_63 },
#else
    { 0, 0, output_63 },
#endif
    0,
    &operand_data[109],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1716 */
  {
    "*movqi_extv_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_64 },
#else
    { 0, 0, output_64 },
#endif
    0,
    &operand_data[111],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1746 */
  {
    "*movabsqi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_65 },
#else
    { 0, output_65, 0 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1760 */
  {
    "*movabsqi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_66 },
#else
    { 0, output_66, 0 },
#endif
    0,
    &operand_data[115],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1774 */
  {
    "*movdi_extzv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[117],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1784 */
  {
    "*movsi_extzv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[105],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1794 */
  {
    "*movqi_extzv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    0,
    &operand_data[119],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1821 */
  {
    "*movqi_extzv_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_70 },
#else
    { 0, 0, output_70 },
#endif
    0,
    &operand_data[111],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1847 */
  {
    "movsi_insv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_insv_1,
    &operand_data[121],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1857 */
  {
    "movdi_insv_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdi_insv_1_rex64,
    &operand_data[123],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1867 */
  {
    "*movqi_insv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[125],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1884 */
  {
    "*pushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[127],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1890 */
  {
    "*pushdi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_75 },
#else
    { 0, output_75, 0 },
#endif
    0,
    &operand_data[129],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1945 */
  {
    "*pushdi2_prologue_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[131],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1954 */
  {
    "*popdi1_epilogue_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[133],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1965 */
  {
    "popdi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popdi1,
    &operand_data[133],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1975 */
  {
    "*movdi_xor_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%k0, %k0|%k0, %k0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1986 */
  {
    "*movdi_or_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_80 },
#else
    { 0, 0, output_80 },
#endif
    0,
    &operand_data[136],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2001 */
  {
    "*movdi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_81 },
#else
    { 0, output_81, 0 },
#endif
    0,
    &operand_data[138],
    2,
    0,
    13,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2044 */
  {
    "*movdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_82 },
#else
    { 0, 0, output_82 },
#endif
    0,
    &operand_data[140],
    2,
    0,
    15,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2109 */
  {
    "*movabsdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    0,
    &operand_data[142],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2123 */
  {
    "*movabsdi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_84 },
#else
    { 0, output_84, 0 },
#endif
    0,
    &operand_data[144],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2173 */
  {
    "*swapdi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{q}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2197 */
  {
    "*movti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_86 },
#else
    { 0, 0, output_86 },
#endif
    0,
    &operand_data[148],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2231 */
  {
    "*movti_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_87 },
#else
    { 0, 0, output_87 },
#endif
    0,
    &operand_data[150],
    2,
    0,
    5,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2289 */
  {
    "*pushsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_88 },
#else
    { 0, 0, output_88 },
#endif
    0,
    &operand_data[152],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2302 */
  {
    "*pushsf_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_89 },
#else
    { 0, 0, output_89 },
#endif
    0,
    &operand_data[154],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2341 */
  {
    "*movsf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_90 },
#else
    { 0, 0, output_90 },
#endif
    0,
    &operand_data[156],
    2,
    0,
    12,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2430 */
  {
    "*swapsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    0,
    &operand_data[158],
    2,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2456 */
  {
    "*pushdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_92 },
#else
    { 0, 0, output_92 },
#endif
    0,
    &operand_data[160],
    2,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2470 */
  {
    "*pushdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_93 },
#else
    { 0, 0, output_93 },
#endif
    0,
    &operand_data[162],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2512 */
  {
    "*movdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    0,
    &operand_data[164],
    2,
    0,
    9,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2634 */
  {
    "*movdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_95 },
#else
    { 0, 0, output_95 },
#endif
    0,
    &operand_data[166],
    2,
    0,
    9,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2771 */
  {
    "*swapdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_96 },
#else
    { 0, 0, output_96 },
#endif
    0,
    &operand_data[168],
    2,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2799 */
  {
    "*pushxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_97 },
#else
    { 0, 0, output_97 },
#endif
    0,
    &operand_data[170],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2811 */
  {
    "*pushxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    0,
    &operand_data[172],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2850 */
  {
    "*movxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[174],
    2,
    0,
    5,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2884 */
  {
    "*movxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_100 },
#else
    { 0, 0, output_100 },
#endif
    0,
    &operand_data[176],
    2,
    0,
    5,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2966 */
  {
    "swapxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_101 },
#else
    { 0, 0, output_101 },
#endif
    (insn_gen_fn) gen_swapxf,
    &operand_data[178],
    2,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2990 */
  {
    "*movtf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_102 },
#else
    { 0, 0, output_102 },
#endif
    0,
    &operand_data[180],
    2,
    0,
    5,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3057 */
  {
    "zero_extendhisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2_and,
    &operand_data[182],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3075 */
  {
    "*zero_extendhisi2_movzwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3091 */
  {
    "*zero_extendqihi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[186],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3100 */
  {
    "*zero_extendqihi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3110 */
  {
    "*zero_extendqihi2_movzbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %k1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[190],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3162 */
  {
    "*zero_extendqisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3171 */
  {
    "*zero_extendqisi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[194],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3180 */
  {
    "*zero_extendqisi2_movzbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[196],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3237 */
  {
    "zero_extendsidi2_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_111 },
#else
    { 0, output_111, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_32,
    &operand_data[198],
    2,
    0,
    5,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3253 */
  {
    "zero_extendsidi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_112 },
#else
    { 0, output_112, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_rex64,
    &operand_data[200],
    2,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3293 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3301 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[204],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3325 */
  {
    "*extendsidi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[206],
    3,
    0,
    4,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3333 */
  {
    "extendsidi2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_116 },
#else
    { 0, output_116, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2_rex64,
    &operand_data[209],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3345 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{wq|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3353 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bq|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3435 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[213],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3461 */
  {
    "*extendhisi2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    0,
    &operand_data[215],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3488 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[217],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3514 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[196],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3522 */
  {
    "*extendqisi2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1,%k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3620 */
  {
    "*extendsfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    0,
    &operand_data[219],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3649 */
  {
    "*extendsfdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2sd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[221],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3660 */
  {
    "*extendsfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_126 },
#else
    { 0, 0, output_126 },
#endif
    0,
    &operand_data[223],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3706 */
  {
    "*extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    0,
    &operand_data[225],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3754 */
  {
    "*extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    0,
    &operand_data[227],
    2,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3815 */
  {
    "*truncdfsf_fast_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3843 */
  {
    "*truncdfsf_fast_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2ss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3854 */
  {
    "*truncdfsf_fast_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    0,
    &operand_data[233],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3863 */
  {
    "*truncdfsf_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    0,
    &operand_data[235],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3891 */
  {
    "*truncdfsf_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    0,
    &operand_data[238],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3915 */
  {
    "*truncdfsf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    0,
    &operand_data[241],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3964 */
  {
    "*truncxfsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    0,
    &operand_data[243],
    3,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3981 */
  {
    "truncxfsf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_136 },
#else
    { 0, 0, output_136 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop,
    &operand_data[246],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3991 */
  {
    "*truncxfsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    0,
    &operand_data[248],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4008 */
  {
    "*truncxfsf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    0,
    &operand_data[251],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4062 */
  {
    "*truncxfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_139 },
#else
    { 0, 0, output_139 },
#endif
    0,
    &operand_data[253],
    3,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4081 */
  {
    "truncxfdf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_140 },
#else
    { 0, 0, output_140 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop,
    &operand_data[256],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4091 */
  {
    "*truncxfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_141 },
#else
    { 0, 0, output_141 },
#endif
    0,
    &operand_data[258],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4108 */
  {
    "*truncxfdf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_142 },
#else
    { 0, 0, output_142 },
#endif
    0,
    &operand_data[261],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4246 */
  {
    "fixuns_truncdfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfhi2,
    &operand_data[263],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4255 */
  {
    "fixuns_truncsfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfhi2,
    &operand_data[265],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4266 */
  {
    "fix_truncsfdi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi_sse,
    &operand_data[267],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4275 */
  {
    "fix_truncdfdi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi_sse,
    &operand_data[269],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4286 */
  {
    "fix_truncsfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi_sse,
    &operand_data[271],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4295 */
  {
    "fix_truncdfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi_sse,
    &operand_data[273],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4327 */
  {
    "fix_trunchi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_fisttp_i387_1,
    &operand_data[275],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4327 */
  {
    "fix_truncsi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_fisttp_i387_1,
    &operand_data[277],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4327 */
  {
    "fix_truncdi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_fisttp_i387_1,
    &operand_data[279],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4354 */
  {
    "fix_trunchi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_152 },
#else
    { 0, 0, output_152 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp,
    &operand_data[281],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4354 */
  {
    "fix_truncsi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp,
    &operand_data[284],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4354 */
  {
    "fix_truncdi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_154 },
#else
    { 0, 0, output_154 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp,
    &operand_data[287],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4367 */
  {
    "fix_trunchi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp_with_temp,
    &operand_data[290],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4367 */
  {
    "fix_truncsi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp_with_temp,
    &operand_data[294],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4367 */
  {
    "fix_truncdi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp_with_temp,
    &operand_data[298],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4407 */
  {
    "*fix_trunchi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[275],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4407 */
  {
    "*fix_truncsi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[277],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4407 */
  {
    "*fix_truncdi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[279],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4440 */
  {
    "fix_truncdi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_161 },
#else
    { 0, 0, output_161 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387,
    &operand_data[302],
    5,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4454 */
  {
    "fix_truncdi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_with_temp,
    &operand_data[307],
    6,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4498 */
  {
    "fix_trunchi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387,
    &operand_data[313],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4498 */
  {
    "fix_truncsi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_164 },
#else
    { 0, 0, output_164 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387,
    &operand_data[317],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4511 */
  {
    "fix_trunchi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_with_temp,
    &operand_data[321],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4511 */
  {
    "fix_truncsi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_with_temp,
    &operand_data[326],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4550 */
  {
    "x86_fnstcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstcw_1,
    &operand_data[281],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4559 */
  {
    "x86_fldcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fldcw_1,
    &operand_data[47],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4587 */
  {
    "*floathisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_169 },
#else
    { 0, output_169, 0 },
#endif
    0,
    &operand_data[331],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4605 */
  {
    "*floatsisf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    0,
    &operand_data[333],
    2,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4620 */
  {
    "*floatsisf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[335],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4630 */
  {
    "*floatsisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    0,
    &operand_data[337],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4660 */
  {
    "*floatdisf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_173 },
#else
    { 0, output_173, 0 },
#endif
    0,
    &operand_data[339],
    2,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4675 */
  {
    "*floatdisf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[341],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4685 */
  {
    "*floatdisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[343],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4710 */
  {
    "*floathidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    0,
    &operand_data[345],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4728 */
  {
    "*floatsidf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_177 },
#else
    { 0, output_177, 0 },
#endif
    0,
    &operand_data[347],
    2,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4745 */
  {
    "*floatsidf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[349],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4757 */
  {
    "*floatsidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    0,
    &operand_data[351],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4782 */
  {
    "*floatdidf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_180 },
#else
    { 0, output_180, 0 },
#endif
    0,
    &operand_data[353],
    2,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4799 */
  {
    "*floatdidf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[355],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4811 */
  {
    "*floatdidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    0,
    &operand_data[357],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4823 */
  {
    "floathixf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    (insn_gen_fn) gen_floathixf2,
    &operand_data[359],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4835 */
  {
    "floatsixf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    (insn_gen_fn) gen_floatsixf2,
    &operand_data[361],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4847 */
  {
    "floatdixf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    (insn_gen_fn) gen_floatdixf2,
    &operand_data[363],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4920 */
  {
    "*addti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[365],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4959 */
  {
    "*adddi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[368],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4985 */
  {
    "adddi3_carry_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddi3_carry_rex64,
    &operand_data[371],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4997 */
  {
    "*adddi3_cc_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[371],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5009 */
  {
    "addqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_carry,
    &operand_data[375],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5021 */
  {
    "addhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addhi3_carry,
    &operand_data[379],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5033 */
  {
    "addsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsi3_carry,
    &operand_data[383],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5045 */
  {
    "*addsi3_carry_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5058 */
  {
    "*addsi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[383],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5070 */
  {
    "addqi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_cc,
    &operand_data[375],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5090 */
  {
    "*lea_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5098 */
  {
    "*lea_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[393],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5106 */
  {
    "*lea_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %k0|%k0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[395],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5115 */
  {
    "*lea_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[395],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5126 */
  {
    "*lea_general_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5157 */
  {
    "*lea_general_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[401],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5178 */
  {
    "*lea_general_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[405],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5207 */
  {
    "*lea_general_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5227 */
  {
    "*lea_general_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[413],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5260 */
  {
    "*lea_general_3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[418],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5284 */
  {
    "*adddi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[423],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5351 */
  {
    "*adddi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[426],
    3,
    2,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5402 */
  {
    "*adddi_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    0,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5459 */
  {
    "*adddi_4_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    0,
    &operand_data[432],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5498 */
  {
    "*adddi_5_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[435],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5548 */
  {
    "*addsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    0,
    &operand_data[438],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5631 */
  {
    "addsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    (insn_gen_fn) gen_addsi_1_zext,
    &operand_data[441],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5697 */
  {
    "*addsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[444],
    3,
    2,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5745 */
  {
    "*addsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[447],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5790 */
  {
    "*addsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5835 */
  {
    "*addsi_3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    0,
    &operand_data[447],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5886 */
  {
    "*addsi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    0,
    &operand_data[453],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5923 */
  {
    "*addsi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5981 */
  {
    "*addhi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    0,
    &operand_data[456],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6024 */
  {
    "*addhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    0,
    &operand_data[379],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6063 */
  {
    "*addhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    0,
    &operand_data[459],
    3,
    2,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6105 */
  {
    "*addhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    0,
    &operand_data[462],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6145 */
  {
    "*addhi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    0,
    &operand_data[465],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6183 */
  {
    "*addhi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    0,
    &operand_data[462],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6233 */
  {
    "*addqi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    0,
    &operand_data[468],
    3,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6283 */
  {
    "*addqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    0,
    &operand_data[471],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6329 */
  {
    "*addqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    0,
    &operand_data[474],
    2,
    1,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6369 */
  {
    "*addqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    0,
    &operand_data[476],
    3,
    2,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6410 */
  {
    "*addqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6449 */
  {
    "*addqi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    0,
    &operand_data[482],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6487 */
  {
    "*addqi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6528 */
  {
    "addqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    (insn_gen_fn) gen_addqi_ext_1,
    &operand_data[485],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6564 */
  {
    "*addqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_233 },
#else
    { 0, 0, output_233 },
#endif
    0,
    &operand_data[488],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6600 */
  {
    "*addqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[491],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6654 */
  {
    "*subti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6689 */
  {
    "*subdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[497],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6714 */
  {
    "subdi3_carry_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3_carry_rex64,
    &operand_data[500],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6726 */
  {
    "*subdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6736 */
  {
    "*subdi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6750 */
  {
    "*subdi_3_rex63",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6762 */
  {
    "subqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subqi3_carry,
    &operand_data[504],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6774 */
  {
    "subhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subhi3_carry,
    &operand_data[508],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6786 */
  {
    "subsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_carry,
    &operand_data[512],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6798 */
  {
    "subsi3_carry_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_carry_zext,
    &operand_data[516],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6819 */
  {
    "*subsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6829 */
  {
    "*subsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6840 */
  {
    "*subsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6854 */
  {
    "*subsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6870 */
  {
    "*subsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6882 */
  {
    "*subsi_3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6904 */
  {
    "*subhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6914 */
  {
    "*subhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6928 */
  {
    "*subhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6948 */
  {
    "*subqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[523],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6958 */
  {
    "*subqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[526],
    2,
    1,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6969 */
  {
    "*subqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[528],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6983 */
  {
    "*subqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[528],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7028 */
  {
    "*muldi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_258 },
#else
    { 0, output_258, 0 },
#endif
    0,
    &operand_data[531],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7060 */
  {
    "*mulsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_259 },
#else
    { 0, output_259, 0 },
#endif
    0,
    &operand_data[534],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7083 */
  {
    "*mulsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_260 },
#else
    { 0, output_260, 0 },
#endif
    0,
    &operand_data[537],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7116 */
  {
    "*mulhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_261 },
#else
    { 0, output_261, 0 },
#endif
    0,
    &operand_data[540],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7144 */
  {
    "*mulqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[543],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7170 */
  {
    "*umulqihi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[546],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7194 */
  {
    "*mulqihi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[546],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7220 */
  {
    "*umulditi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[549],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7247 */
  {
    "*umulsidi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[552],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7273 */
  {
    "*mulditi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[549],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7299 */
  {
    "*mulsidi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[552],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7329 */
  {
    "*umuldi3_highpart_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[555],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7365 */
  {
    "*umulsi3_highpart_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7386 */
  {
    "*umulsi3_highpart_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[563],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7422 */
  {
    "*smuldi3_highpart_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[555],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7457 */
  {
    "*smulsi3_highpart_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7477 */
  {
    "*smulsi3_highpart_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[563],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7523 */
  {
    "divqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divqi3,
    &operand_data[567],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7533 */
  {
    "udivqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivqi3,
    &operand_data[567],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7581 */
  {
    "*divmoddi4_nocltd_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[570],
    4,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7592 */
  {
    "*divmoddi4_cltd_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[574],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7603 */
  {
    "*divmoddi_noext_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[578],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7664 */
  {
    "*divmodsi4_nocltd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[583],
    4,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7675 */
  {
    "*divmodsi4_cltd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[587],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7686 */
  {
    "*divmodsi_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[591],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7733 */
  {
    "divmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cwtd\n\tidiv{w}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmodhi4,
    &operand_data[596],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7746 */
  {
    "udivmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t%3, %3\n\tdiv{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmoddi4,
    &operand_data[600],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7759 */
  {
    "*udivmoddi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{q}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[578],
    4,
    3,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7789 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%3, %3\n\tdiv{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[604],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7802 */
  {
    "*udivmodsi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[591],
    4,
    3,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7844 */
  {
    "*udivmodhi_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{w}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[608],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7881 */
  {
    "*testdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_289 },
#else
    { 0, output_289, 0 },
#endif
    0,
    &operand_data[613],
    2,
    0,
    5,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7900 */
  {
    "testsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_testsi_1,
    &operand_data[615],
    2,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7923 */
  {
    "*testhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[617],
    2,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7944 */
  {
    "*testqi_1_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    0,
    &operand_data[619],
    2,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7969 */
  {
    "*testqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[621],
    2,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7997 */
  {
    "*testqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[623],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8014 */
  {
    "*testqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[625],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8031 */
  {
    "*testqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[20],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8047 */
  {
    "*testqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8066 */
  {
    "*testqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[627],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8083 */
  {
    "*testqi_ext_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[630],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8215 */
  {
    "*anddi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_300 },
#else
    { 0, 0, output_300 },
#endif
    0,
    &operand_data[633],
    3,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8256 */
  {
    "*anddi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_301 },
#else
    { 0, output_301, 0 },
#endif
    0,
    &operand_data[636],
    3,
    2,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8280 */
  {
    "*andsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_302 },
#else
    { 0, 0, output_302 },
#endif
    0,
    &operand_data[639],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8356 */
  {
    "*andsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8367 */
  {
    "*andsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8381 */
  {
    "*andsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8402 */
  {
    "*andhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_306 },
#else
    { 0, 0, output_306 },
#endif
    0,
    &operand_data[645],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8426 */
  {
    "*andhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8448 */
  {
    "*andqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_308 },
#else
    { 0, output_308, 0 },
#endif
    0,
    &operand_data[651],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8461 */
  {
    "*andqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    2,
    1,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8472 */
  {
    "*andqi_2_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_310 },
#else
    { 0, 0, output_310 },
#endif
    0,
    &operand_data[656],
    3,
    2,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8496 */
  {
    "*andqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8510 */
  {
    "*andqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    2,
    3,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8529 */
  {
    "andqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andqi_ext_0,
    &operand_data[664],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8549 */
  {
    "*andqi_ext_0_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[664],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8574 */
  {
    "*andqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8592 */
  {
    "*andqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8610 */
  {
    "*andqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[491],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8688 */
  {
    "*iordi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8699 */
  {
    "*iordi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[676],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8713 */
  {
    "*iordi_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8735 */
  {
    "*iorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8746 */
  {
    "*iorsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[685],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8757 */
  {
    "*iorsi_1_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8767 */
  {
    "*iorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8782 */
  {
    "*iorsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8795 */
  {
    "*iorsi_2_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[691],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8808 */
  {
    "*iorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[694],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8828 */
  {
    "*iorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8838 */
  {
    "*iorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8851 */
  {
    "*iorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8872 */
  {
    "*iorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_331 },
#else
    { 0, output_331, 0 },
#endif
    0,
    &operand_data[703],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8885 */
  {
    "*iorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[706],
    2,
    1,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8896 */
  {
    "*iorqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8909 */
  {
    "*iorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[708],
    2,
    3,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8923 */
  {
    "*iorqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[710],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8935 */
  {
    "iorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iorqi_ext_0,
    &operand_data[664],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8952 */
  {
    "*iorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8971 */
  {
    "*iorqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8990 */
  {
    "*iorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ior{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9061 */
  {
    "*xordi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_340 },
#else
    { 0, output_340, 0 },
#endif
    0,
    &operand_data[371],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9074 */
  {
    "*xordi_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_341 },
#else
    { 0, output_341, 0 },
#endif
    0,
    &operand_data[676],
    3,
    2,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9090 */
  {
    "*xordi_3_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9111 */
  {
    "*xorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[383],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9123 */
  {
    "*xorsi_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9134 */
  {
    "*xorsi_1_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[713],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9144 */
  {
    "*xorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[642],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9159 */
  {
    "*xorsi_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9172 */
  {
    "*xorsi_2_zext_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[691],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9185 */
  {
    "*xorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[694],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9205 */
  {
    "*xorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9215 */
  {
    "*xorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9228 */
  {
    "*xorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9249 */
  {
    "*xorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_353 },
#else
    { 0, output_353, 0 },
#endif
    0,
    &operand_data[703],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9262 */
  {
    "*xorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    2,
    1,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9273 */
  {
    "xorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorqi_ext_0,
    &operand_data[664],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9290 */
  {
    "*xorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9309 */
  {
    "*xorqi_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9328 */
  {
    "*xorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9346 */
  {
    "*xorqi_cc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    3,
    2,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9360 */
  {
    "*xorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[708],
    2,
    3,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9374 */
  {
    "*xorqi_cc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[710],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9387 */
  {
    "*xorqi_cc_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9408 */
  {
    "*xorqi_cc_ext_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[488],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9498 */
  {
    "*negti2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9535 */
  {
    "*negdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[721],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9565 */
  {
    "*negdi2_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9578 */
  {
    "*negdi2_cmpz_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9597 */
  {
    "*negsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9607 */
  {
    "*negsi2_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9622 */
  {
    "*negsi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9633 */
  {
    "*negsi2_cmpz_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9657 */
  {
    "*neghi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9666 */
  {
    "*neghi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9684 */
  {
    "*negqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9693 */
  {
    "*negqi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9718 */
  {
    "*absnegsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    4,
    0,
    4,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9728 */
  {
    "*absnegsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[737],
    4,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9738 */
  {
    "*absnegsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[741],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9758 */
  {
    "copysignsf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_const,
    &operand_data[745],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9774 */
  {
    "copysignsf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_var,
    &operand_data[749],
    6,
    0,
    5,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9814 */
  {
    "*absnegdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[755],
    4,
    0,
    4,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9826 */
  {
    "*absnegdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[759],
    4,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9838 */
  {
    "*absnegdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[763],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9858 */
  {
    "copysigndf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_const,
    &operand_data[767],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9874 */
  {
    "copysigndf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_var,
    &operand_data[771],
    6,
    0,
    5,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9914 */
  {
    "*absnegxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[777],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9937 */
  {
    "*absnegtf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[781],
    4,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10123 */
  {
    "*negsf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10131 */
  {
    "*negdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10139 */
  {
    "*negxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10147 */
  {
    "*abssf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10155 */
  {
    "*absdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10163 */
  {
    "*absxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10171 */
  {
    "*negextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10180 */
  {
    "*negextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10189 */
  {
    "*negextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10198 */
  {
    "*absextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10207 */
  {
    "*absextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10216 */
  {
    "*absextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10233 */
  {
    "*one_cmpldi2_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10241 */
  {
    "*one_cmpldi2_2_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10275 */
  {
    "*one_cmplsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10284 */
  {
    "*one_cmplsi2_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10292 */
  {
    "*one_cmplsi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[725],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10320 */
  {
    "*one_cmplsi2_2_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10353 */
  {
    "*one_cmplhi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10361 */
  {
    "*one_cmplhi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10395 */
  {
    "*one_cmplqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_408 },
#else
    { 0, output_408, 0 },
#endif
    0,
    &operand_data[797],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10405 */
  {
    "*one_cmplqi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10474 */
  {
    "sse2_ashlti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_410 },
#else
    { 0, 0, output_410 },
#endif
    (insn_gen_fn) gen_sse2_ashlti3,
    &operand_data[799],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10487 */
  {
    "ashlti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlti3_1,
    &operand_data[802],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10497 */
  {
    "*ashlti3_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[806],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10525 */
  {
    "x86_64_shld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_413 },
#else
    { 0, output_413, 0 },
#endif
    (insn_gen_fn) gen_x86_64_shld,
    &operand_data[809],
    3,
    2,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10564 */
  {
    "*ashldi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_414 },
#else
    { 0, 0, output_414 },
#endif
    0,
    &operand_data[812],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10623 */
  {
    "*ashldi3_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_415 },
#else
    { 0, 0, output_415 },
#endif
    0,
    &operand_data[815],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10665 */
  {
    "*ashldi3_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    0,
    &operand_data[818],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10706 */
  {
    "*ashldi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[821],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10739 */
  {
    "x86_shld_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_418 },
#else
    { 0, output_418, 0 },
#endif
    (insn_gen_fn) gen_x86_shld_1,
    &operand_data[824],
    3,
    2,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10808 */
  {
    "*ashlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    0,
    &operand_data[827],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10894 */
  {
    "*ashlsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_420 },
#else
    { 0, 0, output_420 },
#endif
    0,
    &operand_data[830],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10950 */
  {
    "*ashlsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_421 },
#else
    { 0, 0, output_421 },
#endif
    0,
    &operand_data[833],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10992 */
  {
    "*ashlsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_422 },
#else
    { 0, 0, output_422 },
#endif
    0,
    &operand_data[836],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11033 */
  {
    "*ashlsi3_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_423 },
#else
    { 0, 0, output_423 },
#endif
    0,
    &operand_data[839],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11082 */
  {
    "*ashlhi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_424 },
#else
    { 0, 0, output_424 },
#endif
    0,
    &operand_data[842],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11120 */
  {
    "*ashlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_425 },
#else
    { 0, 0, output_425 },
#endif
    0,
    &operand_data[845],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11157 */
  {
    "*ashlhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_426 },
#else
    { 0, 0, output_426 },
#endif
    0,
    &operand_data[848],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11199 */
  {
    "*ashlhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_427 },
#else
    { 0, 0, output_427 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11250 */
  {
    "*ashlqi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_428 },
#else
    { 0, 0, output_428 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11306 */
  {
    "*ashlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_429 },
#else
    { 0, 0, output_429 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11361 */
  {
    "*ashlqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_430 },
#else
    { 0, 0, output_430 },
#endif
    0,
    &operand_data[860],
    3,
    2,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11403 */
  {
    "*ashlqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_431 },
#else
    { 0, 0, output_431 },
#endif
    0,
    &operand_data[863],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11462 */
  {
    "ashrti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrti3_1,
    &operand_data[802],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11472 */
  {
    "*ashrti3_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[806],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11500 */
  {
    "x86_64_shrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_434 },
#else
    { 0, output_434, 0 },
#endif
    (insn_gen_fn) gen_x86_64_shrd,
    &operand_data[809],
    3,
    2,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11523 */
  {
    "*ashrdi3_63_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_435 },
#else
    { 0, output_435, 0 },
#endif
    0,
    &operand_data[866],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11540 */
  {
    "*ashrdi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11554 */
  {
    "*ashrdi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_437 },
#else
    { 0, output_437, 0 },
#endif
    0,
    &operand_data[872],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11569 */
  {
    "*ashrdi3_one_bit_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11587 */
  {
    "*ashrdi3_one_bit_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[875],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11604 */
  {
    "*ashrdi3_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[878],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11620 */
  {
    "*ashrdi3_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[881],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11635 */
  {
    "*ashrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11668 */
  {
    "x86_shrd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_443 },
#else
    { 0, output_443, 0 },
#endif
    (insn_gen_fn) gen_x86_shrd_1,
    &operand_data[824],
    3,
    2,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11712 */
  {
    "ashrsi3_31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_444 },
#else
    { 0, output_444, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3_31,
    &operand_data[887],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11728 */
  {
    "*ashrsi3_31_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_445 },
#else
    { 0, output_445, 0 },
#endif
    0,
    &operand_data[890],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11753 */
  {
    "*ashrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[893],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11767 */
  {
    "*ashrsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[896],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11778 */
  {
    "*ashrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_448 },
#else
    { 0, output_448, 0 },
#endif
    0,
    &operand_data[899],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11790 */
  {
    "*ashrsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_449 },
#else
    { 0, output_449, 0 },
#endif
    0,
    &operand_data[902],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11805 */
  {
    "*ashrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[893],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11823 */
  {
    "*ashrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[905],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11837 */
  {
    "*ashrsi3_one_bit_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[896],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11855 */
  {
    "*ashrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[833],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11871 */
  {
    "*ashrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11886 */
  {
    "*ashrsi3_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[839],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11910 */
  {
    "*ashrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11924 */
  {
    "*ashrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_457 },
#else
    { 0, output_457, 0 },
#endif
    0,
    &operand_data[911],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11939 */
  {
    "*ashrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11957 */
  {
    "*ashrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[914],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11974 */
  {
    "*ashrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[848],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11990 */
  {
    "*ashrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12013 */
  {
    "*ashrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12027 */
  {
    "*ashrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[920],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12042 */
  {
    "*ashrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_464 },
#else
    { 0, output_464, 0 },
#endif
    0,
    &operand_data[922],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12054 */
  {
    "*ashrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_465 },
#else
    { 0, output_465, 0 },
#endif
    0,
    &operand_data[925],
    2,
    1,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12070 */
  {
    "*ashrqi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[927],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12088 */
  {
    "*ashrqi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[930],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12105 */
  {
    "*ashrqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[860],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12121 */
  {
    "*ashrqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[863],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12157 */
  {
    "lshrti3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrti3_1,
    &operand_data[802],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12171 */
  {
    "sse2_lshrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_471 },
#else
    { 0, 0, output_471 },
#endif
    (insn_gen_fn) gen_sse2_lshrti3,
    &operand_data[799],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12185 */
  {
    "*lshrti3_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[806],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12220 */
  {
    "*lshrdi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12234 */
  {
    "*lshrdi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_474 },
#else
    { 0, output_474, 0 },
#endif
    0,
    &operand_data[872],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12249 */
  {
    "*lshrdi3_cmp_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12267 */
  {
    "*lshrdi3_cconly_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[875],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12284 */
  {
    "*lshrdi3_cmp_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[933],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12300 */
  {
    "*lshrdi3_cconly_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[936],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12315 */
  {
    "*lshrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12356 */
  {
    "*lshrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[893],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12370 */
  {
    "*lshrsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[896],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12381 */
  {
    "*lshrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_482 },
#else
    { 0, output_482, 0 },
#endif
    0,
    &operand_data[899],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12393 */
  {
    "*lshrsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_483 },
#else
    { 0, output_483, 0 },
#endif
    0,
    &operand_data[939],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12409 */
  {
    "*lshrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[893],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12427 */
  {
    "*lshrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[905],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12441 */
  {
    "*lshrsi3_cmp_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[896],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12459 */
  {
    "*lshrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[833],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12475 */
  {
    "*lshrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12490 */
  {
    "*lshrsi3_cmp_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[839],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12514 */
  {
    "*lshrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12528 */
  {
    "*lshrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_491 },
#else
    { 0, output_491, 0 },
#endif
    0,
    &operand_data[911],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12543 */
  {
    "*lshrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12561 */
  {
    "*lshrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[914],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12578 */
  {
    "*lshrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[848],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12594 */
  {
    "*lshrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12617 */
  {
    "*lshrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12631 */
  {
    "*lshrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[920],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12645 */
  {
    "*lshrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_498 },
#else
    { 0, output_498, 0 },
#endif
    0,
    &operand_data[922],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12657 */
  {
    "*lshrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_499 },
#else
    { 0, output_499, 0 },
#endif
    0,
    &operand_data[925],
    2,
    1,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12673 */
  {
    "*lshrqi2_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[917],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12691 */
  {
    "*lshrqi2_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[942],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12708 */
  {
    "*lshrqi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[860],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12724 */
  {
    "*lshrqi2_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[863],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12761 */
  {
    "ix86_rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotldi3,
    &operand_data[945],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12785 */
  {
    "*rotlsi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12799 */
  {
    "*rotldi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_506 },
#else
    { 0, output_506, 0 },
#endif
    0,
    &operand_data[949],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12819 */
  {
    "*rotlsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[893],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12833 */
  {
    "*rotlsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[896],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12845 */
  {
    "*rotlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_509 },
#else
    { 0, output_509, 0 },
#endif
    0,
    &operand_data[899],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12857 */
  {
    "*rotlsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_510 },
#else
    { 0, output_510, 0 },
#endif
    0,
    &operand_data[902],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12878 */
  {
    "*rotlhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12892 */
  {
    "*rotlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_512 },
#else
    { 0, output_512, 0 },
#endif
    0,
    &operand_data[911],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12912 */
  {
    "*rotlqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[920],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12926 */
  {
    "*rotlqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12940 */
  {
    "*rotlqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_515 },
#else
    { 0, output_515, 0 },
#endif
    0,
    &operand_data[925],
    2,
    1,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12953 */
  {
    "*rotlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_516 },
#else
    { 0, output_516, 0 },
#endif
    0,
    &operand_data[922],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12985 */
  {
    "ix86_rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotrdi3,
    &operand_data[945],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13009 */
  {
    "*rotrdi3_1_one_bit_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{q}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13023 */
  {
    "*rotrdi3_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_519 },
#else
    { 0, output_519, 0 },
#endif
    0,
    &operand_data[872],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13043 */
  {
    "*rotrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[893],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13057 */
  {
    "*rotrsi3_1_one_bit_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{l}\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[896],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13072 */
  {
    "*rotrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_522 },
#else
    { 0, output_522, 0 },
#endif
    0,
    &operand_data[899],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13084 */
  {
    "*rotrsi3_1_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_523 },
#else
    { 0, output_523, 0 },
#endif
    0,
    &operand_data[902],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13105 */
  {
    "*rotrhi3_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13119 */
  {
    "*rotrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_525 },
#else
    { 0, output_525, 0 },
#endif
    0,
    &operand_data[911],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13139 */
  {
    "*rotrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13153 */
  {
    "*rotrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[920],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13167 */
  {
    "*rotrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_528 },
#else
    { 0, output_528, 0 },
#endif
    0,
    &operand_data[922],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13179 */
  {
    "*rotrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_529 },
#else
    { 0, output_529, 0 },
#endif
    0,
    &operand_data[925],
    2,
    1,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13265 */
  {
    "*btsq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bts{q} %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[952],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13275 */
  {
    "*btrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btr{q} %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[952],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13285 */
  {
    "*btcq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btc{q} %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[952],
    2,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13511 */
  {
    "*setcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[954],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13520 */
  {
    "*setcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[956],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13604 */
  {
    "*sse_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1ss\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[958],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13614 */
  {
    "*sse_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1sd\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[962],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13776 */
  {
    "*jcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%C1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    2,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13794 */
  {
    "*jcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%c1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    2,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13865 */
  {
    "*fp_jcc_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[968],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13880 */
  {
    "*fp_jcc_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[972],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13895 */
  {
    "*fp_jcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[976],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13910 */
  {
    "*fp_jcc_2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[968],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13925 */
  {
    "*fp_jcc_2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[972],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13940 */
  {
    "*fp_jcc_2_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[976],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13955 */
  {
    "*fp_jcc_3_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[980],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13974 */
  {
    "*fp_jcc_4_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[980],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13993 */
  {
    "*fp_jcc_5_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[985],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14009 */
  {
    "*fp_jcc_6_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[985],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14025 */
  {
    "*fp_jcc_7_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[990],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14049 */
  {
    "*fp_jcc_8hi_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[995],
    6,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14049 */
  {
    "*fp_jcc_8si_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1001],
    6,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14149 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[743],
    1,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14169 */
  {
    "*indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[554],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14176 */
  {
    "*indirect_jump_rtx64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[551],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14219 */
  {
    "*tablejump_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1007],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14227 */
  {
    "*tablejump_1_rtx64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1009],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14298 */
  {
    "*call_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_557 },
#else
    { 0, 0, output_557 },
#endif
    0,
    &operand_data[1011],
    3,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14312 */
  {
    "*call_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_558 },
#else
    { 0, 0, output_558 },
#endif
    0,
    &operand_data[1014],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14353 */
  {
    "*call_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_559 },
#else
    { 0, 0, output_559 },
#endif
    0,
    &operand_data[1017],
    2,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14365 */
  {
    "*call_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_560 },
#else
    { 0, 0, output_560 },
#endif
    0,
    &operand_data[1019],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14376 */
  {
    "*sibcall_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_561 },
#else
    { 0, 0, output_561 },
#endif
    0,
    &operand_data[1021],
    2,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14387 */
  {
    "*call_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_562 },
#else
    { 0, 0, output_562 },
#endif
    0,
    &operand_data[1023],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14398 */
  {
    "*sibcall_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%P0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1025],
    2,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14405 */
  {
    "*sibcall_1_rex64_v",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t*%%r11",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    1,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14494 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[743],
    1,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14516 */
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14527 */
  {
    "return_internal_long",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep {;} ret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal_long,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14537 */
  {
    "return_pop_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_pop_internal,
    &operand_data[628],
    1,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14546 */
  {
    "return_indirect_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_indirect_internal,
    &operand_data[403],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14554 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14566 */
  {
    "align",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_571 },
#else
    { 0, 0, output_571 },
#endif
    (insn_gen_fn) gen_align,
    &operand_data[743],
    1,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14587 */
  {
    "set_got",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_572 },
#else
    { 0, 0, output_572 },
#endif
    (insn_gen_fn) gen_set_got,
    &operand_data[63],
    1,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14596 */
  {
    "set_got_labelled",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_573 },
#else
    { 0, 0, output_573 },
#endif
    (insn_gen_fn) gen_set_got_labelled,
    &operand_data[1027],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14606 */
  {
    "set_got_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t_GLOBAL_OFFSET_TABLE_(%%rip), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_set_got_rex64,
    &operand_data[134],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14646 */
  {
    "eh_return_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_si,
    &operand_data[1029],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14656 */
  {
    "eh_return_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_di,
    &operand_data[1030],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14666 */
  {
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14674 */
  {
    "leave_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave_rex64,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14691 */
  {
    "*ffs_cmove",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1031],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14710 */
  {
    "*ffs_no_cmove",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1034],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14733 */
  {
    "*ffssi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1031],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14752 */
  {
    "*ffs_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1037],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14772 */
  {
    "*ffsdi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1037],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14782 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[1031],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14790 */
  {
    "ctzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ctzdi2,
    &operand_data[1037],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14810 */
  {
    "*bsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1031],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14819 */
  {
    "bswapsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bswap\t%k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bswapsi2,
    &operand_data[1040],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14828 */
  {
    "bswapdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bswap\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bswapdi2,
    &operand_data[727],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14850 */
  {
    "*bsr_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1037],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14864 */
  {
    "*tls_global_dynamic_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSGD(,%1,1), %0|%0, %a2@TLSGD[%1*1]}\n\tcall\t%P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1042],
    6,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14878 */
  {
    "*tls_global_dynamic_32_sun",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@DTLNDX(%1), %4|%4, %a2@DTLNDX[%1]}\n\
	push{l}\t%4\n\tcall\t%a2@TLSPLT\n\tpop{l}\t%4\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1042],
    6,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14921 */
  {
    "*tls_global_dynamic_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".byte\t0x66\n\tlea{q}\t{%a1@TLSGD(%%rip), %%rdi|%%rdi, %a1@TLSGD[%%rip]}\n\t.word\t0x6666\n\trex64\n\tcall\t%P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1048],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14948 */
  {
    "*tls_local_dynamic_base_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@TLSLDM(%1), %0|%0, %&@TLSLDM[%1]}\n\tcall\t%P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1052],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14961 */
  {
    "*tls_local_dynamic_base_32_sun",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@TMDNX(%1), %3|%3, %&@TMDNX[%1]}\n\
	push{l}\t%3\n\tcall\t%&@TLSPLT\n\tpop{l}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1052],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15000 */
  {
    "*tls_local_dynamic_base_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t{%&@TLSLD(%%rip), %%rdi|%%rdi, %&@TLSLD[%%rip]}\n\tcall\t%P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1057],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15028 */
  {
    "*tls_local_dynamic_32_once",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1060],
    6,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15052 */
  {
    "*load_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:0, %0|%0, DWORD PTR %%gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15063 */
  {
    "*add_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%gs:0, %0|%0, DWORD PTR %%gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1040],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15076 */
  {
    "*load_tp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%%fs:0, %0|%0, QWORD PTR %%fs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15087 */
  {
    "*add_tp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%%fs:0, %0|%0, QWORD PTR %%fs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15120 */
  {
    "*tls_dynamic_lea_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSDESC(%1), %0|%0, %a2@TLSDESC[%1]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1066],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15133 */
  {
    "*tls_dynamic_call_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[DWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1069],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15148 */
  {
    "*tls_dynamic_gnu2_combine_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1073],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15184 */
  {
    "*tls_dynamic_lea_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{q}\t{%a1@TLSDESC(%%rip), %0|%0, %a1@TLSDESC[%%rip]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1078],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15195 */
  {
    "*tls_dynamic_call_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[QWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1080],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15208 */
  {
    "*tls_dynamic_gnu2_combine_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1083],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15241 */
  {
    "*fop_sf_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_607 },
#else
    { 0, 0, output_607 },
#endif
    0,
    &operand_data[1087],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15260 */
  {
    "*fop_sf_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_608 },
#else
    { 0, 0, output_608 },
#endif
    0,
    &operand_data[1091],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15275 */
  {
    "*fop_sf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_609 },
#else
    { 0, 0, output_609 },
#endif
    0,
    &operand_data[1095],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15290 */
  {
    "*fop_sf_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_610 },
#else
    { 0, 0, output_610 },
#endif
    0,
    &operand_data[1099],
    4,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15316 */
  {
    "*fop_sf_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_611 },
#else
    { 0, 0, output_611 },
#endif
    0,
    &operand_data[1103],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15334 */
  {
    "*fop_sf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_612 },
#else
    { 0, 0, output_612 },
#endif
    0,
    &operand_data[1107],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15353 */
  {
    "*fop_sf_2hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_613 },
#else
    { 0, 0, output_613 },
#endif
    0,
    &operand_data[1111],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15353 */
  {
    "*fop_sf_2si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_614 },
#else
    { 0, 0, output_614 },
#endif
    0,
    &operand_data[1115],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15370 */
  {
    "*fop_sf_3hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_615 },
#else
    { 0, 0, output_615 },
#endif
    0,
    &operand_data[1119],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15370 */
  {
    "*fop_sf_3si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_616 },
#else
    { 0, 0, output_616 },
#endif
    0,
    &operand_data[1123],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15387 */
  {
    "*fop_df_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_617 },
#else
    { 0, 0, output_617 },
#endif
    0,
    &operand_data[1127],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15408 */
  {
    "*fop_df_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_618 },
#else
    { 0, 0, output_618 },
#endif
    0,
    &operand_data[1131],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15425 */
  {
    "*fop_df_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_619 },
#else
    { 0, 0, output_619 },
#endif
    0,
    &operand_data[1135],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15440 */
  {
    "*fop_df_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_620 },
#else
    { 0, 0, output_620 },
#endif
    0,
    &operand_data[1139],
    4,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15468 */
  {
    "*fop_df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_621 },
#else
    { 0, 0, output_621 },
#endif
    0,
    &operand_data[1143],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15488 */
  {
    "*fop_df_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_622 },
#else
    { 0, 0, output_622 },
#endif
    0,
    &operand_data[1147],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15507 */
  {
    "*fop_df_2hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_623 },
#else
    { 0, 0, output_623 },
#endif
    0,
    &operand_data[1151],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15507 */
  {
    "*fop_df_2si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_624 },
#else
    { 0, 0, output_624 },
#endif
    0,
    &operand_data[1155],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15525 */
  {
    "*fop_df_3hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_625 },
#else
    { 0, 0, output_625 },
#endif
    0,
    &operand_data[1159],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15525 */
  {
    "*fop_df_3si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_626 },
#else
    { 0, 0, output_626 },
#endif
    0,
    &operand_data[1163],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15543 */
  {
    "*fop_df_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_627 },
#else
    { 0, 0, output_627 },
#endif
    0,
    &operand_data[1167],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15560 */
  {
    "*fop_df_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_628 },
#else
    { 0, 0, output_628 },
#endif
    0,
    &operand_data[1171],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15577 */
  {
    "*fop_df_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_629 },
#else
    { 0, 0, output_629 },
#endif
    0,
    &operand_data[1175],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15595 */
  {
    "*fop_xf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_630 },
#else
    { 0, 0, output_630 },
#endif
    0,
    &operand_data[1179],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15609 */
  {
    "*fop_xf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_631 },
#else
    { 0, 0, output_631 },
#endif
    0,
    &operand_data[1183],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15626 */
  {
    "*fop_xf_2hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_632 },
#else
    { 0, 0, output_632 },
#endif
    0,
    &operand_data[1187],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15626 */
  {
    "*fop_xf_2si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_633 },
#else
    { 0, 0, output_633 },
#endif
    0,
    &operand_data[1191],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15643 */
  {
    "*fop_xf_3hi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_634 },
#else
    { 0, 0, output_634 },
#endif
    0,
    &operand_data[1195],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15643 */
  {
    "*fop_xf_3si_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_635 },
#else
    { 0, 0, output_635 },
#endif
    0,
    &operand_data[1199],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15660 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_636 },
#else
    { 0, 0, output_636 },
#endif
    0,
    &operand_data[1203],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15676 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_637 },
#else
    { 0, 0, output_637 },
#endif
    0,
    &operand_data[1207],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15693 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_638 },
#else
    { 0, 0, output_638 },
#endif
    0,
    &operand_data[1211],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15762 */
  {
    "*sqrtsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_639 },
#else
    { 0, output_639, 0 },
#endif
    0,
    &operand_data[1215],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15773 */
  {
    "*sqrtsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1217],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15782 */
  {
    "*sqrtsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15800 */
  {
    "*sqrtdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_642 },
#else
    { 0, output_642, 0 },
#endif
    0,
    &operand_data[1219],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15813 */
  {
    "*sqrtdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1221],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15824 */
  {
    "*sqrtdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15833 */
  {
    "*sqrtextendsfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15844 */
  {
    "sqrtxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtxf2,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15853 */
  {
    "*sqrtextendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15863 */
  {
    "*sqrtextenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15873 */
  {
    "fpremxf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpremxf4,
    &operand_data[1223],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15958 */
  {
    "fprem1xf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fprem1xf4,
    &operand_data[1223],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16043 */
  {
    "*sindf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16053 */
  {
    "*sinsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16063 */
  {
    "*sinextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16075 */
  {
    "*sinxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16084 */
  {
    "*cosdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[787],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16094 */
  {
    "*cossf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[785],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16104 */
  {
    "*cosextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[791],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16116 */
  {
    "*cosxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16131 */
  {
    "sincosdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosdf3,
    &operand_data[1227],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16166 */
  {
    "sincossf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincossf3,
    &operand_data[1230],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16201 */
  {
    "*sincosextendsfdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1233],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16244 */
  {
    "sincosxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosxf3,
    &operand_data[1223],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16278 */
  {
    "*tandf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1227],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16322 */
  {
    "*tansf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1230],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16366 */
  {
    "*tanxf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1223],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16408 */
  {
    "atan2df3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_atan2df3_1,
    &operand_data[1236],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16449 */
  {
    "atan2sf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_atan2sf3_1,
    &operand_data[1240],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16490 */
  {
    "atan2xf3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_atan2xf3_1,
    &operand_data[1244],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16666 */
  {
    "fyl2x_xf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_xf3,
    &operand_data[1244],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16852 */
  {
    "fyl2xp1_xf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_xf3,
    &operand_data[1244],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16906 */
  {
    "*fxtractxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1223],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16983 */
  {
    "*f2xm1xf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "f2xm1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16993 */
  {
    "*fscalexf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fscale",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1223],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17427 */
  {
    "frndintxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frndint",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17481 */
  {
    "*fistdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1248],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17505 */
  {
    "fistdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_676 },
#else
    { 0, 0, output_676 },
#endif
    (insn_gen_fn) gen_fistdi2,
    &operand_data[1250],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17516 */
  {
    "fistdi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_with_temp,
    &operand_data[1253],
    4,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17551 */
  {
    "*fisthi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17551 */
  {
    "*fistsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1259],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17570 */
  {
    "fisthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_680 },
#else
    { 0, 0, output_680 },
#endif
    (insn_gen_fn) gen_fisthi2,
    &operand_data[1261],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17570 */
  {
    "fistsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_681 },
#else
    { 0, 0, output_681 },
#endif
    (insn_gen_fn) gen_fistsi2,
    &operand_data[1263],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17580 */
  {
    "fisthi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_with_temp,
    &operand_data[1265],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17580 */
  {
    "fistsi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_with_temp,
    &operand_data[1268],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17622 */
  {
    "frndintxf2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17647 */
  {
    "frndintxf2_floor_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor_i387,
    &operand_data[1271],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17704 */
  {
    "*fisthi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1275],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17704 */
  {
    "*fistsi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1277],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17704 */
  {
    "*fistdi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1248],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17736 */
  {
    "fistdi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_689 },
#else
    { 0, 0, output_689 },
#endif
    (insn_gen_fn) gen_fistdi2_floor,
    &operand_data[1279],
    5,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17750 */
  {
    "fistdi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_floor_with_temp,
    &operand_data[1284],
    6,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17796 */
  {
    "fisthi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_691 },
#else
    { 0, 0, output_691 },
#endif
    (insn_gen_fn) gen_fisthi2_floor,
    &operand_data[1290],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17796 */
  {
    "fistsi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_692 },
#else
    { 0, 0, output_692 },
#endif
    (insn_gen_fn) gen_fistsi2_floor,
    &operand_data[1294],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17809 */
  {
    "fisthi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_floor_with_temp,
    &operand_data[1298],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17809 */
  {
    "fistsi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_floor_with_temp,
    &operand_data[1303],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17863 */
  {
    "frndintxf2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17888 */
  {
    "frndintxf2_ceil_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil_i387,
    &operand_data[1271],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17945 */
  {
    "*fisthi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1275],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17945 */
  {
    "*fistsi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1277],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17945 */
  {
    "*fistdi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1248],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17977 */
  {
    "fistdi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_700 },
#else
    { 0, 0, output_700 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil,
    &operand_data[1279],
    5,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:17991 */
  {
    "fistdi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil_with_temp,
    &operand_data[1284],
    6,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18037 */
  {
    "fisthi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_702 },
#else
    { 0, 0, output_702 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil,
    &operand_data[1290],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18037 */
  {
    "fistsi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_703 },
#else
    { 0, 0, output_703 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil,
    &operand_data[1294],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18050 */
  {
    "fisthi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil_with_temp,
    &operand_data[1298],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18050 */
  {
    "fistsi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil_with_temp,
    &operand_data[1303],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18104 */
  {
    "frndintxf2_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18129 */
  {
    "frndintxf2_trunc_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc_i387,
    &operand_data[1271],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18187 */
  {
    "frndintxf2_mask_pm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm,
    &operand_data[789],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18212 */
  {
    "frndintxf2_mask_pm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfclex\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm_i387,
    &operand_data[1271],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18273 */
  {
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cld,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18346 */
  {
    "*strmovdi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsq",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1308],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18362 */
  {
    "*strmovsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{movsl|movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1312],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18378 */
  {
    "*strmovsi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{movsl|movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1308],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18394 */
  {
    "*strmovhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1312],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18410 */
  {
    "*strmovhi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1308],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18426 */
  {
    "*strmovqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1312],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18442 */
  {
    "*strmovqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1308],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18471 */
  {
    "*rep_movdi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsq|rep movsq}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1316],
    6,
    4,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18491 */
  {
    "*rep_movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsl|rep movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1322],
    6,
    4,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18511 */
  {
    "*rep_movsi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsl|rep movsd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1316],
    6,
    4,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18531 */
  {
    "*rep_movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsb|rep movsb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1322],
    6,
    4,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18549 */
  {
    "*rep_movqi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tmovsb|rep movsb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1316],
    6,
    4,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18637 */
  {
    "*strsetdi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosq",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1328],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18650 */
  {
    "*strsetsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stosl|stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1331],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18663 */
  {
    "*strsetsi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stosl|stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1334],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18676 */
  {
    "*strsethi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1337],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18689 */
  {
    "*strsethi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1340],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18702 */
  {
    "*strsetqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1343],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18715 */
  {
    "*strsetqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1346],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18739 */
  {
    "*rep_stosdi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosq|rep stosq}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1349],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18757 */
  {
    "*rep_stossi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosl|rep stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1354],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18775 */
  {
    "*rep_stossi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosl|rep stosd}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1359],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18793 */
  {
    "*rep_stosqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosb|rep stosb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1364],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18810 */
  {
    "*rep_stosqi_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rep\n\tstosb|rep stosb}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1369],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18953 */
  {
    "*cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1374],
    7,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:18969 */
  {
    "*cmpstrnqi_nz_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1381],
    7,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19003 */
  {
    "*cmpstrnqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1374],
    7,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19022 */
  {
    "*cmpstrnqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1381],
    7,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19062 */
  {
    "*darwin_cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb\n\tmov\t$0, %0\n\tje\t0f\n\tmovzbl\t-1(%5), %0\n\tmovzbl\t-1(%6), %8\n\tsubl\t%8,%0\n0:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1388],
    9,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19099 */
  {
    "*darwin_cmpstrqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{\n\t| }cmpsb\n\tmov\t$0, %0\n\tje\t0f\n\tmovzbl\t-1(%5), %0\n\tmovzbl\t-1(%6), %8\n\tsubl\t%8,%0\n0:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1388],
    9,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19157 */
  {
    "*strlenqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz{\n\t| }scasb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1397],
    6,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19172 */
  {
    "*strlenqi_rex_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz{\n\t| }scasb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    6,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19282 */
  {
    "x86_movdicc_0_m1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_movdicc_0_m1_rex64,
    &operand_data[1409],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19299 */
  {
    "*movdicc_c_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_744 },
#else
    { 0, output_744, 0 },
#endif
    0,
    &operand_data[1411],
    4,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19325 */
  {
    "x86_movsicc_0_m1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_movsicc_0_m1,
    &operand_data[1415],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19342 */
  {
    "*movsicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_746 },
#else
    { 0, output_746, 0 },
#endif
    0,
    &operand_data[1417],
    4,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19364 */
  {
    "*movhicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_747 },
#else
    { 0, output_747, 0 },
#endif
    0,
    &operand_data[1421],
    4,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19386 */
  {
    "*movqicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1425],
    5,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19414 */
  {
    "*movsfcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_749 },
#else
    { 0, output_749, 0 },
#endif
    0,
    &operand_data[1430],
    4,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19438 */
  {
    "*movdfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_750 },
#else
    { 0, output_750, 0 },
#endif
    0,
    &operand_data[1434],
    4,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19454 */
  {
    "*movdfcc_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_751 },
#else
    { 0, output_751, 0 },
#endif
    0,
    &operand_data[1438],
    4,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19498 */
  {
    "*movxfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_752 },
#else
    { 0, output_752, 0 },
#endif
    0,
    &operand_data[1442],
    4,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19516 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminsf3,
    &operand_data[1091],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19525 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxsf3,
    &operand_data[1091],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19534 */
  {
    "smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smindf3,
    &operand_data[1131],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19543 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxdf3,
    &operand_data[1131],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19558 */
  {
    "*ieee_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1103],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19568 */
  {
    "*ieee_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1103],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19578 */
  {
    "*ieee_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1143],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19588 */
  {
    "*ieee_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1143],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19669 */
  {
    "pro_epilogue_adjust_stack_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_761 },
#else
    { 0, 0, output_761 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_1,
    &operand_data[1446],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19710 */
  {
    "pro_epilogue_adjust_stack_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_762 },
#else
    { 0, 0, output_762 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_rex64,
    &operand_data[1449],
    3,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19753 */
  {
    "pro_epilogue_adjust_stack_rex64_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_763 },
#else
    { 0, 0, output_763 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_rex64_2,
    &operand_data[1452],
    4,
    0,
    2,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19799 */
  {
    "allocate_stack_worker_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t__alloca",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_1,
    &operand_data[1456],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:19819 */
  {
    "allocate_stack_worker_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t__alloca",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_rex64,
    &operand_data[1458],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:20931 */
  {
    "*call_value_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_766 },
#else
    { 0, 0, output_766 },
#endif
    0,
    &operand_data[1010],
    4,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:20946 */
  {
    "*call_value_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_767 },
#else
    { 0, 0, output_767 },
#endif
    0,
    &operand_data[1460],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:20968 */
  {
    "*call_value_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_768 },
#else
    { 0, 0, output_768 },
#endif
    0,
    &operand_data[1010],
    3,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:20981 */
  {
    "*call_value_0_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_769 },
#else
    { 0, 0, output_769 },
#endif
    0,
    &operand_data[1464],
    3,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:20994 */
  {
    "*call_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_770 },
#else
    { 0, 0, output_770 },
#endif
    0,
    &operand_data[1460],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21006 */
  {
    "*sibcall_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_771 },
#else
    { 0, 0, output_771 },
#endif
    0,
    &operand_data[1467],
    3,
    0,
    4,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21018 */
  {
    "*call_value_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_772 },
#else
    { 0, 0, output_772 },
#endif
    0,
    &operand_data[1470],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21030 */
  {
    "*sibcall_value_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1473],
    3,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21038 */
  {
    "*sibcall_value_1_rex64_v",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t*%%r11",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1476],
    2,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21051 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_775 },
#else
    { 0, 0, output_775 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21073 */
  {
    "*sse_prologue_save_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_776 },
#else
    { 0, 0, output_776 },
#endif
    0,
    &operand_data[1478],
    5,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21142 */
  {
    "*prefetch_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_777 },
#else
    { 0, 0, output_777 },
#endif
    0,
    &operand_data[1483],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21160 */
  {
    "*prefetch_sse_rex",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_778 },
#else
    { 0, 0, output_778 },
#endif
    0,
    &operand_data[1485],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21178 */
  {
    "*prefetch_3dnow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_779 },
#else
    { 0, 0, output_779 },
#endif
    0,
    &operand_data[1487],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21192 */
  {
    "*prefetch_3dnow_rex",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_780 },
#else
    { 0, 0, output_780 },
#endif
    0,
    &operand_data[1489],
    2,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21227 */
  {
    "stack_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %2|%2, %1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_si,
    &operand_data[1491],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21236 */
  {
    "stack_protect_set_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %2|%2, %1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_di,
    &operand_data[1494],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21245 */
  {
    "stack_tls_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:%P1, %2|%2, DWORD PTR %%gs:%P1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_si,
    &operand_data[1497],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21254 */
  {
    "stack_tls_protect_set_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_784 },
#else
    { 0, 0, output_784 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_di,
    &operand_data[1500],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21299 */
  {
    "stack_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_si,
    &operand_data[1503],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21309 */
  {
    "stack_protect_test_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_di,
    &operand_data[1507],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21319 */
  {
    "stack_tls_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%%gs:%P2, %3|%3, DWORD PTR %%gs:%P2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_si,
    &operand_data[1511],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21329 */
  {
    "stack_tls_protect_test_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_788 },
#else
    { 0, 0, output_788 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_di,
    &operand_data[1515],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:71 */
  {
    "*movv8qi_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_789 },
#else
    { 0, output_789, 0 },
#endif
    0,
    &operand_data[1519],
    2,
    0,
    12,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:71 */
  {
    "*movv4hi_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_790 },
#else
    { 0, output_790, 0 },
#endif
    0,
    &operand_data[1521],
    2,
    0,
    12,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:71 */
  {
    "*movv2si_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_791 },
#else
    { 0, output_791, 0 },
#endif
    0,
    &operand_data[1523],
    2,
    0,
    12,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:71 */
  {
    "*movv1di_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_792 },
#else
    { 0, output_792, 0 },
#endif
    0,
    &operand_data[1525],
    2,
    0,
    12,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:100 */
  {
    "*movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_793 },
#else
    { 0, output_793, 0 },
#endif
    0,
    &operand_data[1527],
    2,
    0,
    14,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:100 */
  {
    "*movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_794 },
#else
    { 0, output_794, 0 },
#endif
    0,
    &operand_data[1529],
    2,
    0,
    14,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:100 */
  {
    "*movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_795 },
#else
    { 0, output_795, 0 },
#endif
    0,
    &operand_data[1531],
    2,
    0,
    14,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:100 */
  {
    "*movv1di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_796 },
#else
    { 0, output_796, 0 },
#endif
    0,
    &operand_data[1533],
    2,
    0,
    14,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:141 */
  {
    "*movv2sf_internal_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_797 },
#else
    { 0, output_797, 0 },
#endif
    0,
    &operand_data[1535],
    2,
    0,
    13,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:170 */
  {
    "*movv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_798 },
#else
    { 0, output_798, 0 },
#endif
    0,
    &operand_data[1537],
    2,
    0,
    11,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:227 */
  {
    "sse_movntv1di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntv1di,
    &operand_data[1539],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:243 */
  {
    "mmx_addv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfadd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv2sf3,
    &operand_data[1541],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:252 */
  {
    "mmx_subv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_801 },
#else
    { 0, output_801, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv2sf3,
    &operand_data[1544],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:270 */
  {
    "mmx_mulv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmul\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_mulv2sf3,
    &operand_data[1541],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:279 */
  {
    "mmx_smaxv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_smaxv2sf3,
    &operand_data[1541],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:288 */
  {
    "mmx_sminv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sminv2sf3,
    &operand_data[1541],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:297 */
  {
    "mmx_rcpv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcp\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpv2sf2,
    &operand_data[1547],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:306 */
  {
    "mmx_rcpit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit1v2sf3,
    &operand_data[1549],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:316 */
  {
    "mmx_rcpit2v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit2\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit2v2sf3,
    &operand_data[1549],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:326 */
  {
    "mmx_rsqrtv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqrt\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqrtv2sf2,
    &operand_data[1547],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:335 */
  {
    "mmx_rsqit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqit1v2sf3,
    &operand_data[1549],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:345 */
  {
    "mmx_haddv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_haddv2sf3,
    &operand_data[1549],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:363 */
  {
    "mmx_hsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_hsubv2sf3,
    &operand_data[1549],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:381 */
  {
    "mmx_addsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfpnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addsubv2sf3,
    &operand_data[1549],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:400 */
  {
    "mmx_gtv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpgt\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2sf3,
    &operand_data[1552],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:409 */
  {
    "mmx_gev2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpge\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gev2sf3,
    &operand_data[1552],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:418 */
  {
    "mmx_eqv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpeq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv2sf3,
    &operand_data[1555],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:433 */
  {
    "mmx_pf2id",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2id\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2id,
    &operand_data[1558],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:441 */
  {
    "mmx_pf2iw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2iw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2iw,
    &operand_data[1558],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:452 */
  {
    "mmx_pi2fw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pi2fw,
    &operand_data[1560],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:463 */
  {
    "mmx_floatv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_floatv2si2,
    &operand_data[1560],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:477 */
  {
    "mmx_pswapdv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2sf2,
    &operand_data[1547],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:486 */
  {
    "*vec_dupv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:495 */
  {
    "*mmx_concatv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_822 },
#else
    { 0, output_822, 0 },
#endif
    0,
    &operand_data[1564],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:518 */
  {
    "*vec_extractv2sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1567],
    2,
    0,
    5,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:537 */
  {
    "*vec_extractv2sf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_824 },
#else
    { 0, output_824, 0 },
#endif
    0,
    &operand_data[1569],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:589 */
  {
    "mmx_addv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:589 */
  {
    "mmx_addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:589 */
  {
    "mmx_addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv2si3,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:589 */
  {
    "mmx_addv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addv1di3,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:603 */
  {
    "mmx_ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ssaddv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:603 */
  {
    "mmx_ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ssaddv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:613 */
  {
    "mmx_usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_usaddv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:613 */
  {
    "mmx_usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_usaddv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:623 */
  {
    "mmx_subv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:623 */
  {
    "mmx_subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv4hi3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:623 */
  {
    "mmx_subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv2si3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:623 */
  {
    "mmx_subv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_subv1di3,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:637 */
  {
    "mmx_sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sssubv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:637 */
  {
    "mmx_sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sssubv4hi3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:647 */
  {
    "mmx_ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ussubv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:647 */
  {
    "mmx_ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ussubv4hi3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:657 */
  {
    "mmx_mulv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_mulv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:666 */
  {
    "mmx_smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_smulv4hi3_highpart,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:680 */
  {
    "mmx_umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_umulv4hi3_highpart,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:695 */
  {
    "mmx_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmaddwd,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:719 */
  {
    "mmx_pmulhrwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmulhrwv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:738 */
  {
    "sse2_umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_umulsidi3,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:755 */
  {
    "mmx_umaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_umaxv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:765 */
  {
    "mmx_smaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_smaxv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:775 */
  {
    "mmx_uminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_uminv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:785 */
  {
    "mmx_sminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_sminv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:796 */
  {
    "mmx_ashrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv4hi3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:796 */
  {
    "mmx_ashrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv2si3,
    &operand_data[1604],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:806 */
  {
    "mmx_ashrv4hi2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv4hi2si,
    &operand_data[1607],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:806 */
  {
    "mmx_ashrv2si2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv2si2si,
    &operand_data[1610],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:816 */
  {
    "mmx_lshrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv4hi3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:816 */
  {
    "mmx_lshrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv2si3,
    &operand_data[1604],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:816 */
  {
    "mmx_lshrv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv1di3,
    &operand_data[1613],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:826 */
  {
    "mmx_lshrv4hi2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv4hi2si,
    &operand_data[1607],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:826 */
  {
    "mmx_lshrv2si2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv2si2si,
    &operand_data[1610],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:826 */
  {
    "mmx_lshrv1di2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv1di2si,
    &operand_data[1616],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:836 */
  {
    "mmx_ashlv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv4hi3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:836 */
  {
    "mmx_ashlv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv2si3,
    &operand_data[1604],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:836 */
  {
    "mmx_ashlv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv1di3,
    &operand_data[1613],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:846 */
  {
    "mmx_ashlv4hi2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv4hi2si,
    &operand_data[1607],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:846 */
  {
    "mmx_ashlv2si2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv2si2si,
    &operand_data[1610],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:846 */
  {
    "mmx_ashlv1di2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv1di2si,
    &operand_data[1616],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:864 */
  {
    "mmx_eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:864 */
  {
    "mmx_eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:864 */
  {
    "mmx_eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_eqv2si3,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:874 */
  {
    "mmx_gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:874 */
  {
    "mmx_gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv4hi3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:874 */
  {
    "mmx_gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2si3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:891 */
  {
    "mmx_andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:891 */
  {
    "mmx_andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:891 */
  {
    "mmx_andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv2si3,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:891 */
  {
    "mmx_andv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andv1di3,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:901 */
  {
    "mmx_nandv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:901 */
  {
    "mmx_nandv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv4hi3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:901 */
  {
    "mmx_nandv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv2si3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:901 */
  {
    "mmx_nandv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_nandv1di3,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:911 */
  {
    "mmx_iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:911 */
  {
    "mmx_iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:911 */
  {
    "mmx_iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv2si3,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:911 */
  {
    "mmx_iorv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_iorv1di3,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:921 */
  {
    "mmx_xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:921 */
  {
    "mmx_xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:921 */
  {
    "mmx_xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv2si3,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:921 */
  {
    "mmx_xorv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_xorv1di3,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:938 */
  {
    "mmx_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packsswb,
    &operand_data[1619],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:950 */
  {
    "mmx_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packssdw,
    &operand_data[1622],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:962 */
  {
    "mmx_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packuswb,
    &operand_data[1619],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:974 */
  {
    "mmx_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhbw,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:989 */
  {
    "mmx_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklbw,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1004 */
  {
    "mmx_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhwd,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1017 */
  {
    "mmx_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklwd,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1030 */
  {
    "mmx_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhdq,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1043 */
  {
    "mmx_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckldq,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1069 */
  {
    "*mmx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_898 },
#else
    { 0, 0, output_898 },
#endif
    0,
    &operand_data[1625],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1084 */
  {
    "mmx_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pextrw,
    &operand_data[1629],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1110 */
  {
    "mmx_pshufw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_900 },
#else
    { 0, 0, output_900 },
#endif
    (insn_gen_fn) gen_mmx_pshufw_1,
    &operand_data[1632],
    6,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1132 */
  {
    "mmx_pswapdv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2si2,
    &operand_data[1638],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1142 */
  {
    "*vec_dupv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufw\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1640],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1152 */
  {
    "*vec_dupv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1161 */
  {
    "*mmx_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_904 },
#else
    { 0, output_904, 0 },
#endif
    0,
    &operand_data[1644],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1185 */
  {
    "*vec_extractv2si_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1647],
    2,
    0,
    5,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1205 */
  {
    "*vec_extractv2si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_906 },
#else
    { 0, output_906, 0 },
#endif
    0,
    &operand_data[1649],
    2,
    0,
    5,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1325 */
  {
    "mmx_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_907 },
#else
    { 0, 0, output_907 },
#endif
    (insn_gen_fn) gen_mmx_uavgv8qi3,
    &operand_data[1571],
    3,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1353 */
  {
    "mmx_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_uavgv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1373 */
  {
    "mmx_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_psadbw,
    &operand_data[1651],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1384 */
  {
    "mmx_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmovmskb,
    &operand_data[1654],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1402 */
  {
    "*mmx_maskmovq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovq\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1656],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1414 */
  {
    "*mmx_maskmovq_rex",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovq\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1659],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1426 */
  {
    "mmx_emms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "emms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_emms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/mmx.md:1449 */
  {
    "mmx_femms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "femms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_femms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:60 */
  {
    "*movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_915 },
#else
    { 0, 0, output_915 },
#endif
    0,
    &operand_data[1662],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:60 */
  {
    "*movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_916 },
#else
    { 0, 0, output_916 },
#endif
    0,
    &operand_data[1664],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:60 */
  {
    "*movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_917 },
#else
    { 0, 0, output_917 },
#endif
    0,
    &operand_data[1666],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:60 */
  {
    "*movv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_918 },
#else
    { 0, 0, output_918 },
#endif
    0,
    &operand_data[1668],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:99 */
  {
    "*movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_919 },
#else
    { 0, 0, output_919 },
#endif
    0,
    &operand_data[1670],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:141 */
  {
    "*movv2df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_920 },
#else
    { 0, 0, output_920 },
#endif
    0,
    &operand_data[1672],
    2,
    0,
    3,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:198 */
  {
    "sse_movups",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movups,
    &operand_data[1674],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:207 */
  {
    "sse2_movupd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movupd,
    &operand_data[1676],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:216 */
  {
    "sse2_movdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movdqu,
    &operand_data[1678],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:225 */
  {
    "sse_movntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntv4sf,
    &operand_data[1680],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:234 */
  {
    "sse2_movntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2df,
    &operand_data[1682],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:243 */
  {
    "sse2_movntv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2di,
    &operand_data[1684],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:252 */
  {
    "sse2_movntsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movnti\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntsi,
    &operand_data[1686],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:262 */
  {
    "sse_loadqv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_loadqv4si,
    &operand_data[1688],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:269 */
  {
    "sse_storeqv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_storeqv4si,
    &operand_data[1690],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:276 */
  {
    "sse_movqv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movqv4si,
    &operand_data[1692],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:284 */
  {
    "sse3_lddqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_lddqu,
    &operand_data[1694],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:318 */
  {
    "*addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:327 */
  {
    "sse_vmaddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmaddv4sf3,
    &operand_data[1699],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:346 */
  {
    "*subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:355 */
  {
    "sse_vmsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsubv4sf3,
    &operand_data[1699],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:374 */
  {
    "*mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:383 */
  {
    "sse_vmmulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmulv4sf3,
    &operand_data[1699],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:402 */
  {
    "*divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:411 */
  {
    "sse_vmdivv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmdivv4sf3,
    &operand_data[1699],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:423 */
  {
    "sse_rcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcpps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rcpv4sf2,
    &operand_data[1702],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:432 */
  {
    "sse_vmrcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcpss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrcpv4sf2,
    &operand_data[1702],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:444 */
  {
    "sse_rsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rsqrtv4sf2,
    &operand_data[1702],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:453 */
  {
    "sse_vmrsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrsqrtv4sf2,
    &operand_data[1702],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:465 */
  {
    "sqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv4sf2,
    &operand_data[1702],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:473 */
  {
    "sse_vmsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsqrtv4sf2,
    &operand_data[1702],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:499 */
  {
    "*smaxv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:509 */
  {
    "*smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:518 */
  {
    "sse_vmsmaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsmaxv4sf3,
    &operand_data[1699],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:541 */
  {
    "*sminv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:551 */
  {
    "*sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:560 */
  {
    "sse_vmsminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsminv4sf3,
    &operand_data[1699],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:578 */
  {
    "*ieee_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:588 */
  {
    "*ieee_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:598 */
  {
    "*ieee_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:608 */
  {
    "*ieee_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:618 */
  {
    "sse3_addsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv4sf3,
    &operand_data[1699],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:631 */
  {
    "sse3_haddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv4sf3,
    &operand_data[1699],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:657 */
  {
    "sse3_hsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv4sf3,
    &operand_data[1699],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:723 */
  {
    "sse_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_maskcmpv4sf3,
    &operand_data[1708],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:733 */
  {
    "sse_vmmaskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmaskcmpv4sf3,
    &operand_data[1712],
    4,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:746 */
  {
    "sse_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "comiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_comi,
    &operand_data[1716],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:760 */
  {
    "sse_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucomiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ucomi,
    &operand_data[1716],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:803 */
  {
    "*andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:812 */
  {
    "sse_nandv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_nandv4sf3,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:828 */
  {
    "*iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:844 */
  {
    "*xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:858 */
  {
    "*andsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1718],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:867 */
  {
    "*nandsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1718],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:876 */
  {
    "*iorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1718],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:885 */
  {
    "*xorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1718],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:900 */
  {
    "sse_cvtpi2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtpi2ps,
    &operand_data[1721],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:912 */
  {
    "sse_cvtps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtps2pi,
    &operand_data[1724],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:924 */
  {
    "sse_cvttps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttps2pi,
    &operand_data[1724],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:935 */
  {
    "sse_cvtsi2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtsi2ss,
    &operand_data[1726],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:948 */
  {
    "sse_cvtsi2ssq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ssq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtsi2ssq,
    &operand_data[1729],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:961 */
  {
    "sse_cvtss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2si,
    &operand_data[1732],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:974 */
  {
    "sse_cvtss2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2siq,
    &operand_data[1734],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:987 */
  {
    "sse_cvttss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttss2si,
    &operand_data[1732],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:999 */
  {
    "sse_cvttss2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttss2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttss2siq,
    &operand_data[1734],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1011 */
  {
    "sse2_cvtdq2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2ps,
    &operand_data[1736],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1019 */
  {
    "sse2_cvtps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2dq,
    &operand_data[1738],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1028 */
  {
    "sse2_cvttps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttps2dq,
    &operand_data[1738],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1042 */
  {
    "sse_movhlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_983 },
#else
    { 0, output_983, 0 },
#endif
    (insn_gen_fn) gen_sse_movhlps,
    &operand_data[1740],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1061 */
  {
    "sse_movlhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_984 },
#else
    { 0, output_984, 0 },
#endif
    (insn_gen_fn) gen_sse_movlhps,
    &operand_data[1743],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1082 */
  {
    "sse_unpckhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpckhps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_unpckhps,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1095 */
  {
    "sse_unpcklps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_unpcklps,
    &operand_data[1699],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1110 */
  {
    "sse3_movshdup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movshdup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movshdup,
    &operand_data[1702],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1125 */
  {
    "sse3_movsldup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsldup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movsldup,
    &operand_data[1702],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1156 */
  {
    "sse_shufps_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_989 },
#else
    { 0, 0, output_989 },
#endif
    (insn_gen_fn) gen_sse_shufps_1,
    &operand_data[1746],
    7,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1180 */
  {
    "sse_storehps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_990 },
#else
    { 0, output_990, 0 },
#endif
    (insn_gen_fn) gen_sse_storehps,
    &operand_data[1753],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1193 */
  {
    "sse_loadhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_991 },
#else
    { 0, output_991, 0 },
#endif
    (insn_gen_fn) gen_sse_loadhps,
    &operand_data[1755],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1208 */
  {
    "sse_storelps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_992 },
#else
    { 0, output_992, 0 },
#endif
    (insn_gen_fn) gen_sse_storelps,
    &operand_data[1758],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1221 */
  {
    "sse_loadlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_993 },
#else
    { 0, output_993, 0 },
#endif
    (insn_gen_fn) gen_sse_loadlps,
    &operand_data[1760],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1236 */
  {
    "sse_movss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movss,
    &operand_data[1712],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1247 */
  {
    "*vec_dupv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shufps\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1763],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1259 */
  {
    "*sse_concatv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_996 },
#else
    { 0, output_996, 0 },
#endif
    0,
    &operand_data[1765],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1273 */
  {
    "*sse_concatv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_997 },
#else
    { 0, output_997, 0 },
#endif
    0,
    &operand_data[1768],
    3,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1294 */
  {
    "*vec_setv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_998 },
#else
    { 0, output_998, 0 },
#endif
    0,
    &operand_data[1771],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1315 */
  {
    "*vec_setv4sf_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_999 },
#else
    { 0, 0, output_999 },
#endif
    0,
    &operand_data[1774],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1331 */
  {
    "sse4_1_insertps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_insertps,
    &operand_data[1778],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1369 */
  {
    "*vec_extractv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1782],
    2,
    0,
    3,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1389 */
  {
    "*sse4_1_extractps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extractps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1784],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1437 */
  {
    "*addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1446 */
  {
    "sse2_vmaddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmaddv2df3,
    &operand_data[1705],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1465 */
  {
    "*subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1474 */
  {
    "sse2_vmsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsubv2df3,
    &operand_data[1705],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1493 */
  {
    "*mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1502 */
  {
    "sse2_vmmulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmulv2df3,
    &operand_data[1705],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1521 */
  {
    "*divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1530 */
  {
    "sse2_vmdivv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmdivv2df3,
    &operand_data[1705],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1542 */
  {
    "sqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv2df2,
    &operand_data[1790],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1550 */
  {
    "sse2_vmsqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsqrtv2df2,
    &operand_data[1792],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1576 */
  {
    "*smaxv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1586 */
  {
    "*smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1595 */
  {
    "sse2_vmsmaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsmaxv2df3,
    &operand_data[1705],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1618 */
  {
    "*sminv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1628 */
  {
    "*sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1637 */
  {
    "sse2_vmsminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsminv2df3,
    &operand_data[1705],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1649 */
  {
    "sse3_addsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv2df3,
    &operand_data[1705],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1662 */
  {
    "sse3_haddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv2df3,
    &operand_data[1705],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1680 */
  {
    "sse3_hsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv2df3,
    &operand_data[1705],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1713 */
  {
    "sse2_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3pd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskcmpv2df3,
    &operand_data[1795],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1723 */
  {
    "sse2_vmmaskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmaskcmpv2df3,
    &operand_data[1795],
    4,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1736 */
  {
    "sse2_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "comisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_comi,
    &operand_data[1799],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1750 */
  {
    "sse2_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucomisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ucomi,
    &operand_data[1799],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1793 */
  {
    "*andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1802 */
  {
    "sse2_nandv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv2df3,
    &operand_data[1705],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1818 */
  {
    "*iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1834 */
  {
    "*xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1848 */
  {
    "*anddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1801],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1857 */
  {
    "*nanddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1801],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1866 */
  {
    "*iordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1801],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1875 */
  {
    "*xordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1801],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1890 */
  {
    "sse2_cvtpi2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpi2pd,
    &operand_data[1804],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1899 */
  {
    "sse2_cvtpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpd2pi,
    &operand_data[1806],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1909 */
  {
    "sse2_cvttpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttpd2pi,
    &operand_data[1806],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1918 */
  {
    "sse2_cvtsi2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsi2sd,
    &operand_data[1808],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1931 */
  {
    "sse2_cvtsi2sdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsi2sdq,
    &operand_data[1811],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1944 */
  {
    "sse2_cvtsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2si,
    &operand_data[1814],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1957 */
  {
    "sse2_cvtsd2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2siq,
    &operand_data[1816],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1970 */
  {
    "sse2_cvttsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttsd2si,
    &operand_data[1814],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1982 */
  {
    "sse2_cvttsd2siq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttsd2siq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttsd2siq,
    &operand_data[1816],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:1994 */
  {
    "sse2_cvtdq2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtdq2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2pd,
    &operand_data[1818],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2014 */
  {
    "*sse2_cvtpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1820],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2033 */
  {
    "*sse2_cvttpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttpd2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1820],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2043 */
  {
    "sse2_cvtsd2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2ss,
    &operand_data[1823],
    3,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2057 */
  {
    "sse2_cvtss2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtss2sd,
    &operand_data[1826],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2080 */
  {
    "*sse2_cvtpd2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1829],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2091 */
  {
    "sse2_cvtps2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2pd,
    &operand_data[1832],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2108 */
  {
    "sse2_unpckhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1050 },
#else
    { 0, output_1050, 0 },
#endif
    (insn_gen_fn) gen_sse2_unpckhpd,
    &operand_data[1834],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2124 */
  {
    "*sse3_movddup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1051 },
#else
    { 0, output_1051, 0 },
#endif
    0,
    &operand_data[1837],
    2,
    1,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2156 */
  {
    "sse2_unpcklpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1052 },
#else
    { 0, output_1052, 0 },
#endif
    (insn_gen_fn) gen_sse2_unpcklpd,
    &operand_data[1839],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2186 */
  {
    "sse2_shufpd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1053 },
#else
    { 0, 0, output_1053 },
#endif
    (insn_gen_fn) gen_sse2_shufpd_1,
    &operand_data[1842],
    5,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2206 */
  {
    "sse2_storehpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1054 },
#else
    { 0, output_1054, 0 },
#endif
    (insn_gen_fn) gen_sse2_storehpd,
    &operand_data[1847],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2230 */
  {
    "sse2_storelpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1055 },
#else
    { 0, output_1055, 0 },
#endif
    (insn_gen_fn) gen_sse2_storelpd,
    &operand_data[1849],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2260 */
  {
    "sse2_loadhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1056 },
#else
    { 0, output_1056, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadhpd,
    &operand_data[1851],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2287 */
  {
    "sse2_loadlpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1057 },
#else
    { 0, output_1057, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadlpd,
    &operand_data[1854],
    3,
    0,
    6,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2319 */
  {
    "*vec_extractv2df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1058 },
#else
    { 0, output_1058, 0 },
#endif
    0,
    &operand_data[1857],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2333 */
  {
    "*vec_extractv2df_0_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1059 },
#else
    { 0, output_1059, 0 },
#endif
    0,
    &operand_data[1859],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2347 */
  {
    "sse2_movsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1060 },
#else
    { 0, output_1060, 0 },
#endif
    (insn_gen_fn) gen_sse2_movsd,
    &operand_data[1861],
    3,
    0,
    6,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2364 */
  {
    "*vec_dupv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1864],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2373 */
  {
    "*vec_dupv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklpd\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1866],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2382 */
  {
    "*vec_concatv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1864],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2392 */
  {
    "*vec_concatv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1064 },
#else
    { 0, output_1064, 0 },
#endif
    0,
    &operand_data[1868],
    3,
    0,
    5,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2462 */
  {
    "*addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2462 */
  {
    "*addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2462 */
  {
    "*addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2462 */
  {
    "*addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2472 */
  {
    "sse2_ssaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ssaddv16qi3,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2472 */
  {
    "sse2_ssaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ssaddv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2482 */
  {
    "sse2_usaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_usaddv16qi3,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2482 */
  {
    "sse2_usaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_usaddv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2499 */
  {
    "*subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2499 */
  {
    "*subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2499 */
  {
    "*subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1889],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2499 */
  {
    "*subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1892],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2509 */
  {
    "sse2_sssubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_sssubv16qi3,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2509 */
  {
    "sse2_sssubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_sssubv8hi3,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2519 */
  {
    "sse2_ussubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ussubv16qi3,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2519 */
  {
    "sse2_ussubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ussubv8hi3,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2580 */
  {
    "*mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2603 */
  {
    "*smulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2632 */
  {
    "*umulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2648 */
  {
    "sse2_umulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_umulv2siv2di3,
    &operand_data[1895],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2665 */
  {
    "sse4_1_mulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_mulv2siv2di3,
    &operand_data[1895],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2682 */
  {
    "sse2_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pmaddwd,
    &operand_data[1898],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:2851 */
  {
    "*sse4_1_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3018 */
  {
    "ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv8hi3,
    &operand_data[1901],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3018 */
  {
    "ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4si3,
    &operand_data[1904],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3028 */
  {
    "lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv8hi3,
    &operand_data[1901],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3028 */
  {
    "lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4si3,
    &operand_data[1904],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3028 */
  {
    "lshrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2di3,
    &operand_data[1907],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3038 */
  {
    "ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8hi3,
    &operand_data[1901],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3038 */
  {
    "ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4si3,
    &operand_data[1904],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3038 */
  {
    "ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2di3,
    &operand_data[1907],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3087 */
  {
    "*umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3103 */
  {
    "*smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3173 */
  {
    "sse4_1_smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_smaxv16qi3,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3173 */
  {
    "sse4_1_smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_smaxv4si3,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3184 */
  {
    "sse4_1_umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_umaxv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3184 */
  {
    "sse4_1_umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxud\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_umaxv4si3,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3203 */
  {
    "*uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3219 */
  {
    "*sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3281 */
  {
    "sse2_eqv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_eqv16qi3,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3281 */
  {
    "sse2_eqv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_eqv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3281 */
  {
    "sse2_eqv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_eqv4si3,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3292 */
  {
    "sse4_1_eqv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_eqv2di3,
    &operand_data[1880],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3304 */
  {
    "sse2_gtv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv16qi3,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3304 */
  {
    "sse2_gtv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv8hi3,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3304 */
  {
    "sse2_gtv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv4si3,
    &operand_data[1889],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3315 */
  {
    "sse4_2_gtv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_gtv2di3,
    &operand_data[1910],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3386 */
  {
    "*andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3386 */
  {
    "*andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3386 */
  {
    "*andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3386 */
  {
    "*andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3396 */
  {
    "sse2_nandv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv16qi3,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3396 */
  {
    "sse2_nandv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv8hi3,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3396 */
  {
    "sse2_nandv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv4si3,
    &operand_data[1889],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3396 */
  {
    "sse2_nandv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_nandv2di3,
    &operand_data[1892],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3413 */
  {
    "*iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3413 */
  {
    "*iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3413 */
  {
    "*iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3413 */
  {
    "*iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3430 */
  {
    "*xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3430 */
  {
    "*xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3430 */
  {
    "*xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3430 */
  {
    "*xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3441 */
  {
    "sse4_1_sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_sminv16qi3,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3441 */
  {
    "sse4_1_sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_sminv4si3,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3452 */
  {
    "sse4_1_uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_uminv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3452 */
  {
    "sse4_1_uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminud\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_uminv4si3,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3600 */
  {
    "sse2_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packsswb,
    &operand_data[1913],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3612 */
  {
    "sse2_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packssdw,
    &operand_data[1916],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3624 */
  {
    "sse2_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packuswb,
    &operand_data[1913],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3636 */
  {
    "sse2_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhbw,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3655 */
  {
    "sse2_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklbw,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3674 */
  {
    "sse2_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhwd,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3689 */
  {
    "sse2_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklwd,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3704 */
  {
    "sse2_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhdq,
    &operand_data[1889],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3717 */
  {
    "sse2_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckldq,
    &operand_data[1889],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3730 */
  {
    "sse2_punpckhqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhqdq,
    &operand_data[1892],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3743 */
  {
    "sse2_punpcklqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklqdq,
    &operand_data[1892],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3757 */
  {
    "*sse4_1_pinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1143 },
#else
    { 0, 0, output_1143 },
#endif
    0,
    &operand_data[1919],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3787 */
  {
    "*sse2_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1144 },
#else
    { 0, 0, output_1144 },
#endif
    0,
    &operand_data[1923],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3804 */
  {
    "*sse4_1_pinsrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1145 },
#else
    { 0, 0, output_1145 },
#endif
    0,
    &operand_data[1927],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3820 */
  {
    "*sse4_1_pinsrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1146 },
#else
    { 0, 0, output_1146 },
#endif
    0,
    &operand_data[1931],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3836 */
  {
    "*sse4_1_pextrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1935],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3848 */
  {
    "*sse4_1_pextrb_memory",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1938],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3860 */
  {
    "sse2_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pextrw,
    &operand_data[1941],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3872 */
  {
    "*sse4_1_pextrw_memory",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1944],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3883 */
  {
    "*sse4_1_pextrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1947],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3895 */
  {
    "*sse4_1_pextrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1950],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3922 */
  {
    "sse2_pshufd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1153 },
#else
    { 0, 0, output_1153 },
#endif
    (insn_gen_fn) gen_sse2_pshufd_1,
    &operand_data[1953],
    6,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:3959 */
  {
    "sse2_pshuflw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1154 },
#else
    { 0, 0, output_1154 },
#endif
    (insn_gen_fn) gen_sse2_pshuflw_1,
    &operand_data[1959],
    6,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4000 */
  {
    "sse2_pshufhw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1155 },
#else
    { 0, 0, output_1155 },
#endif
    (insn_gen_fn) gen_sse2_pshufhw_1,
    &operand_data[1965],
    6,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4037 */
  {
    "sse2_loadld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1156 },
#else
    { 0, output_1156, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadld,
    &operand_data[1971],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4057 */
  {
    "sse2_stored",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_stored,
    &operand_data[1974],
    2,
    0,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4084 */
  {
    "*sse2_storeq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1976],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4103 */
  {
    "*vec_extractv2di_1_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1159 },
#else
    { 0, output_1159, 0 },
#endif
    0,
    &operand_data[1978],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4118 */
  {
    "*vec_extractv2di_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1160 },
#else
    { 0, output_1160, 0 },
#endif
    0,
    &operand_data[1980],
    2,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4132 */
  {
    "*vec_dupv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1161 },
#else
    { 0, output_1161, 0 },
#endif
    0,
    &operand_data[1982],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4145 */
  {
    "*vec_dupv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1162 },
#else
    { 0, output_1162, 0 },
#endif
    0,
    &operand_data[1984],
    2,
    0,
    2,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4161 */
  {
    "*sse2_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1163 },
#else
    { 0, output_1163, 0 },
#endif
    0,
    &operand_data[1986],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4177 */
  {
    "*sse1_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1164 },
#else
    { 0, output_1164, 0 },
#endif
    0,
    &operand_data[1989],
    3,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4191 */
  {
    "*vec_concatv4si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1165 },
#else
    { 0, output_1165, 0 },
#endif
    0,
    &operand_data[1992],
    3,
    0,
    3,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4206 */
  {
    "*vec_concatv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1166 },
#else
    { 0, output_1166, 0 },
#endif
    0,
    &operand_data[1995],
    3,
    0,
    6,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4501 */
  {
    "sse2_uavgv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_uavgv16qi3,
    &operand_data[1871],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4525 */
  {
    "sse2_uavgv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_uavgv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4547 */
  {
    "sse2_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_psadbw,
    &operand_data[1998],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4557 */
  {
    "sse_movmskps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movmskps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movmskps,
    &operand_data[2001],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4566 */
  {
    "sse2_movmskpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movmskpd,
    &operand_data[2003],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4575 */
  {
    "sse2_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pmovmskb,
    &operand_data[1935],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4593 */
  {
    "*sse2_maskmovdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovdqu\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2005],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4605 */
  {
    "*sse2_maskmovdqu_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovdqu\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2008],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4617 */
  {
    "sse_ldmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ldmxcsr,
    &operand_data[51],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4625 */
  {
    "sse_stmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_stmxcsr,
    &operand_data[284],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4642 */
  {
    "*sse_sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2011],
    1,
    1,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4650 */
  {
    "sse2_clflush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clflush\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_clflush,
    &operand_data[2012],
    1,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4667 */
  {
    "*sse2_mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2011],
    1,
    1,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4684 */
  {
    "*sse2_lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2011],
    1,
    1,
    0,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4692 */
  {
    "sse3_mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_mwait,
    &operand_data[2013],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4703 */
  {
    "sse3_monitor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "monitor\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_monitor,
    &operand_data[2013],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4713 */
  {
    "ssse3_phaddwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddwv8hi3,
    &operand_data[1886],
    3,
    14,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4755 */
  {
    "ssse3_phaddwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddwv4hi3,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4781 */
  {
    "ssse3_phadddv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phadddv4si3,
    &operand_data[1889],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4807 */
  {
    "ssse3_phadddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phadddv2si3,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4825 */
  {
    "ssse3_phaddswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddswv8hi3,
    &operand_data[1886],
    3,
    14,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4867 */
  {
    "ssse3_phaddswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddswv4hi3,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4893 */
  {
    "ssse3_phsubwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubwv8hi3,
    &operand_data[1886],
    3,
    14,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4935 */
  {
    "ssse3_phsubwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubwv4hi3,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4961 */
  {
    "ssse3_phsubdv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubdv4si3,
    &operand_data[1889],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:4987 */
  {
    "ssse3_phsubdv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubdv2si3,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5005 */
  {
    "ssse3_phsubswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubswv8hi3,
    &operand_data[1886],
    3,
    14,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5047 */
  {
    "ssse3_phsubswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubswv4hi3,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5073 */
  {
    "ssse3_pmaddubswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmaddubswv8hi3,
    &operand_data[2016],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5126 */
  {
    "ssse3_pmaddubswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmaddubswv4hi3,
    &operand_data[2019],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5163 */
  {
    "ssse3_pmulhrswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmulhrswv8hi3,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5185 */
  {
    "ssse3_pmulhrswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmulhrswv4hi3,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5205 */
  {
    "ssse3_pshufbv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pshufbv16qi3,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5215 */
  {
    "ssse3_pshufbv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pshufbv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5225 */
  {
    "ssse3_psignv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv16qi3,
    &operand_data[1883],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5225 */
  {
    "ssse3_psignv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv8hi3,
    &operand_data[1886],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5225 */
  {
    "ssse3_psignv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv4si3,
    &operand_data[1889],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5236 */
  {
    "ssse3_psignv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv8qi3,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5236 */
  {
    "ssse3_psignv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv4hi3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5236 */
  {
    "ssse3_psignv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv2si3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5247 */
  {
    "ssse3_palignrti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1207 },
#else
    { 0, 0, output_1207 },
#endif
    (insn_gen_fn) gen_ssse3_palignrti,
    &operand_data[2022],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5262 */
  {
    "ssse3_palignrv1di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1208 },
#else
    { 0, 0, output_1208 },
#endif
    (insn_gen_fn) gen_ssse3_palignrv1di,
    &operand_data[2026],
    4,
    0,
    1,
    3
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5277 */
  {
    "ssse3_pabsv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pabsv16qi2,
    &operand_data[2030],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5277 */
  {
    "ssse3_pabsv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pabsv8hi2,
    &operand_data[1959],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5277 */
  {
    "ssse3_pabsv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pabsv4si2,
    &operand_data[1953],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5286 */
  {
    "ssse3_pabsv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pabsv8qi2,
    &operand_data[2032],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5286 */
  {
    "ssse3_pabsv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pabsv4hi2,
    &operand_data[1632],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5286 */
  {
    "ssse3_pabsv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pabsv2si2,
    &operand_data[1638],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5296 */
  {
    "sse3_monitor64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "monitor",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_monitor64,
    &operand_data[2034],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5315 */
  {
    "sse4a_vmmovntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_vmmovntv2df,
    &operand_data[2037],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5326 */
  {
    "sse4a_movntdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_movntdf,
    &operand_data[2039],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5335 */
  {
    "sse4a_vmmovntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_vmmovntv4sf,
    &operand_data[2041],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5346 */
  {
    "sse4a_movntsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_movntsf,
    &operand_data[2043],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5355 */
  {
    "sse4a_extrqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extrq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_extrqi,
    &operand_data[2045],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5367 */
  {
    "sse4a_extrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extrq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_extrq,
    &operand_data[2049],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5378 */
  {
    "sse4a_insertqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertq\t{%4, %3, %2, %0|%0, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_insertqi,
    &operand_data[2052],
    5,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5391 */
  {
    "sse4a_insertq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_insertq,
    &operand_data[2052],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5408 */
  {
    "sse4_1_blendpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendpd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendpd,
    &operand_data[2057],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5420 */
  {
    "sse4_1_blendps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendps,
    &operand_data[2061],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5432 */
  {
    "sse4_1_blendvpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendvpd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendvpd,
    &operand_data[2065],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5444 */
  {
    "sse4_1_blendvps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendvps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendvps,
    &operand_data[2069],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5456 */
  {
    "sse4_1_dppd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dppd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_dppd,
    &operand_data[2073],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5468 */
  {
    "sse4_1_dpps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_dpps,
    &operand_data[2077],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5480 */
  {
    "sse4_1_movntdqa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntdqa\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_movntdqa,
    &operand_data[2081],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5490 */
  {
    "sse4_1_mpsadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_mpsadbw,
    &operand_data[2083],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5502 */
  {
    "sse4_1_packusdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packusdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_packusdw,
    &operand_data[1916],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5515 */
  {
    "sse4_1_pblendvb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pblendvb\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_pblendvb,
    &operand_data[2087],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5527 */
  {
    "sse4_1_pblendw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pblendw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_pblendw,
    &operand_data[2091],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5539 */
  {
    "sse4_1_phminposuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phminposuw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_phminposuw,
    &operand_data[1959],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5549 */
  {
    "sse4_1_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv8qiv8hi2,
    &operand_data[2095],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5568 */
  {
    "*sse4_1_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2097],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5588 */
  {
    "sse4_1_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv4qiv4si2,
    &operand_data[2099],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5603 */
  {
    "*sse4_1_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2101],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5619 */
  {
    "sse4_1_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2qiv2di2,
    &operand_data[2103],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5632 */
  {
    "*sse4_1_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2105],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5646 */
  {
    "sse4_1_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv4hiv4si2,
    &operand_data[2107],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5661 */
  {
    "*sse4_1_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2109],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5677 */
  {
    "sse4_1_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2hiv2di2,
    &operand_data[2111],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5690 */
  {
    "*sse4_1_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2113],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5704 */
  {
    "sse4_1_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2siv2di2,
    &operand_data[2115],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5717 */
  {
    "*sse4_1_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovsxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2117],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5731 */
  {
    "sse4_1_zero_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv8qiv8hi2,
    &operand_data[2095],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5750 */
  {
    "*sse4_1_zero_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2097],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5770 */
  {
    "sse4_1_zero_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv4qiv4si2,
    &operand_data[2099],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5785 */
  {
    "*sse4_1_zero_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2101],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5801 */
  {
    "sse4_1_zero_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2qiv2di2,
    &operand_data[2103],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5814 */
  {
    "*sse4_1_zero_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2105],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5828 */
  {
    "sse4_1_zero_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv4hiv4si2,
    &operand_data[2107],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5843 */
  {
    "*sse4_1_zero_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5859 */
  {
    "sse4_1_zero_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2hiv2di2,
    &operand_data[2111],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5872 */
  {
    "*sse4_1_zero_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2121],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5886 */
  {
    "sse4_1_zero_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2siv2di2,
    &operand_data[2115],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5899 */
  {
    "*sse4_1_zero_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovzxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2117],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5915 */
  {
    "sse4_1_ptest",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ptest\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_ptest,
    &operand_data[2123],
    2,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5926 */
  {
    "sse4_1_roundpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundpd,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5937 */
  {
    "sse4_1_roundps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundps,
    &operand_data[2128],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5948 */
  {
    "sse4_1_roundsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundsd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundsd,
    &operand_data[2131],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5962 */
  {
    "sse4_1_roundss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundss,
    &operand_data[2135],
    4,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:5982 */
  {
    "sse4_2_pcmpestr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestr,
    &operand_data[2139],
    7,
    10,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6037 */
  {
    "sse4_2_pcmpestri",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpestri\t{%5, %3, %1|%1, %3, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestri,
    &operand_data[2146],
    6,
    5,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6062 */
  {
    "sse4_2_pcmpestrm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpestrm\t{%5, %3, %1|%1, %3, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestrm,
    &operand_data[2140],
    6,
    5,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6087 */
  {
    "sse4_2_pcmpestr_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1268 },
#else
    { 0, output_1268, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestr_cconly,
    &operand_data[2152],
    7,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6110 */
  {
    "sse4_2_pcmpistr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistr,
    &operand_data[2159],
    5,
    6,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6156 */
  {
    "sse4_2_pcmpistri",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpistri\t{%3, %2, %1|%1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistri,
    &operand_data[2164],
    4,
    3,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6177 */
  {
    "sse4_2_pcmpistrm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpistrm\t{%3, %2, %1|%1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistrm,
    &operand_data[2160],
    4,
    3,
    2,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sse.md:6198 */
  {
    "sse4_2_pcmpistr_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1272 },
#else
    { 0, output_1272, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistr_cconly,
    &operand_data[2168],
    5,
    0,
    4,
    2
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{b}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2173],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{w}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2177],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{l}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2181],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:74 */
  {
    "*sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{q}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2185],
    4,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:87 */
  {
    "sync_double_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg8b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swapdi,
    &operand_data[2189],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:87 */
  {
    "sync_double_compare_and_swapti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg16b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swapti,
    &operand_data[2194],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:110 */
  {
    "*sync_double_compare_and_swapdi_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%%ebx, %3\n\tlock\n\tcmpxchg8b\t%1\n\txchg{l}\t%%ebx, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2199],
    5,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_ccqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{b}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2173],
    4,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_cchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{w}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2177],
    4,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_ccsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{l}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2181],
    4,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:165 */
  {
    "*sync_compare_and_swap_ccdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg{q}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2185],
    4,
    6,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:182 */
  {
    "sync_double_compare_and_swap_ccdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg8b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swap_ccdi,
    &operand_data[2189],
    5,
    7,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:182 */
  {
    "sync_double_compare_and_swap_ccti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tcmpxchg16b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swap_ccti,
    &operand_data[2194],
    5,
    7,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:203 */
  {
    "*sync_double_compare_and_swap_ccdi_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%%ebx, %3\n\tlock\n\tcmpxchg8b\t%1\n\txchg{l}\t%%ebx, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2199],
    5,
    7,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:222 */
  {
    "sync_old_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{b}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addqi,
    &operand_data[2204],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:222 */
  {
    "sync_old_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{w}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addhi,
    &operand_data[2207],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:222 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{l}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addsi,
    &operand_data[2210],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:222 */
  {
    "sync_old_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txadd{q}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_adddi,
    &operand_data[2213],
    3,
    2,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[2204],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[2207],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[2210],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:234 */
  {
    "sync_lock_test_and_setdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setdi,
    &operand_data[2213],
    3,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:243 */
  {
    "sync_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_addqi,
    &operand_data[2216],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:243 */
  {
    "sync_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_addhi,
    &operand_data[2218],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:243 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_addsi,
    &operand_data[2220],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:243 */
  {
    "sync_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tadd{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_adddi,
    &operand_data[2222],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:253 */
  {
    "sync_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subqi,
    &operand_data[2216],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:253 */
  {
    "sync_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subhi,
    &operand_data[2218],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:253 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subsi,
    &operand_data[2220],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:253 */
  {
    "sync_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tsub{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_subdi,
    &operand_data[2222],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:263 */
  {
    "sync_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorqi,
    &operand_data[2216],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:263 */
  {
    "sync_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorhi,
    &operand_data[2218],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:263 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorsi,
    &operand_data[2220],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:263 */
  {
    "sync_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tor{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iordi,
    &operand_data[2222],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:273 */
  {
    "sync_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andqi,
    &operand_data[2216],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:273 */
  {
    "sync_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andhi,
    &operand_data[2218],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:273 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andsi,
    &operand_data[2220],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:273 */
  {
    "sync_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\tand{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_anddi,
    &operand_data[2222],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:283 */
  {
    "sync_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorqi,
    &operand_data[2216],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:283 */
  {
    "sync_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorhi,
    &operand_data[2218],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:283 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorsi,
    &operand_data[2220],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/sync.md:283 */
  {
    "sync_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock\n\txor{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xordi,
    &operand_data[2222],
    2,
    1,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21370 */
  {
    "sse4_2_crc32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32b\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32qi,
    &operand_data[2224],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21370 */
  {
    "sse4_2_crc32hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32w\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32hi,
    &operand_data[2227],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21370 */
  {
    "sse4_2_crc32si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32l\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32si,
    &operand_data[2230],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:21387 */
  {
    "sse4_2_crc32di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32q\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32di,
    &operand_data[2233],
    3,
    0,
    1,
    1
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:533 */
  {
    "cmpti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpti,
    &operand_data[2236],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:546 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[2238],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:559 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[2240],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:572 */
  {
    "cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmphi,
    &operand_data[2242],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:585 */
  {
    "cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi,
    &operand_data[2244],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:620 */
  {
    "cmpdi_1_rex64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi_1_rex64,
    &operand_data[2246],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:659 */
  {
    "cmpsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi_1,
    &operand_data[9],
    2,
    0,
    2,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:783 */
  {
    "cmpqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3,
    &operand_data[2248],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:846 */
  {
    "cmpxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpxf,
    &operand_data[2250],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:857 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[2252],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:868 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[2254],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1114 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[2256],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1318 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[2242],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1447 */
  {
    "movstricthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstricthi,
    &operand_data[2258],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1477 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[2244],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1578 */
  {
    "reload_outqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outqi,
    &operand_data[2260],
    3,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1621 */
  {
    "movstrictqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstrictqi,
    &operand_data[2263],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1878 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[2246],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1904 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2265],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1917 */
  {
    "movdi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2265],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:1930 */
  {
    "movdi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2265],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2026 */
  {
    "movdi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2268],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2035 */
  {
    "movti-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2246],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2140 */
  {
    "movti-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2153 */
  {
    "movti-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2162 */
  {
    "movti-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2185 */
  {
    "movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movti,
    &operand_data[2273],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2275 */
  {
    "movti+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2274],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2283 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[2276],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2315 */
  {
    "movsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2278],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2327 */
  {
    "movsf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2280],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2334 */
  {
    "movdf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2280],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2445 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2485 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2284],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2493 */
  {
    "movdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2284],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2501 */
  {
    "movxf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2286],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2757 */
  {
    "movxf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2282],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2786 */
  {
    "movxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movxf,
    &operand_data[2288],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2823 */
  {
    "movxf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2290],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2833 */
  {
    "movxf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2292],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2841 */
  {
    "movxf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2292],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2919 */
  {
    "movtf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2294],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2934 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2296],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:2981 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[2298],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3034 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2299],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3044 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[2301],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3066 */
  {
    "zero_extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2303],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3083 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[2304],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3119 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2304],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3131 */
  {
    "zero_extendqihi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2304],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3144 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2306],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3154 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[2308],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3189 */
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2308],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3201 */
  {
    "zero_extendqisi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2308],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3215 */
  {
    "zero_extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2310],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3226 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[2312],
    2,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3267 */
  {
    "zero_extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2270],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3274 */
  {
    "zero_extendsidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2314],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3283 */
  {
    "extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2316],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3311 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[2318],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3362 */
  {
    "extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2321],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3377 */
  {
    "extendsidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2321],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3407 */
  {
    "extendsidi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2318],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3545 */
  {
    "extendsidi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2324],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3552 */
  {
    "extendsidi2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2324],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3565 */
  {
    "extendsfdf2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2326],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3573 */
  {
    "extendsfdf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2326],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3581 */
  {
    "extendsfdf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2328],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3589 */
  {
    "extendsfdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2328],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3597 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[2330],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3684 */
  {
    "extendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfxf2,
    &operand_data[2332],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3732 */
  {
    "extenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddfxf2,
    &operand_data[2334],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3788 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[2336],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3809 */
  {
    "truncdfsf2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2_with_temp,
    &operand_data[2338],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3931 */
  {
    "truncdfsf2_with_temp+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2341],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:3945 */
  {
    "truncxfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncxfsf2,
    &operand_data[2344],
    2,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4022 */
  {
    "truncxfsf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2346],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4032 */
  {
    "truncxfdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2348],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4043 */
  {
    "truncxfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncxfdf2,
    &operand_data[2351],
    2,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4122 */
  {
    "truncxfdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2353],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4132 */
  {
    "fix_truncxfdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2355],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4143 */
  {
    "fix_truncxfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfdi2,
    &operand_data[2358],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4156 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[2360],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4156 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[2362],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4180 */
  {
    "fix_truncxfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfsi2,
    &operand_data[2364],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4193 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[2366],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4193 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[2368],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4217 */
  {
    "fix_truncsfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfhi2,
    &operand_data[2370],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4217 */
  {
    "fix_truncdfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfhi2,
    &operand_data[2372],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4217 */
  {
    "fix_truncxfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfhi2,
    &operand_data[2374],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4234 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[2376],
    2,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4234 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[2378],
    2,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4307 */
  {
    "fixuns_truncdfsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2380],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4307 */
  {
    "fixuns_truncdfsi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2383],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4318 */
  {
    "fixuns_truncdfsi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2386],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4318 */
  {
    "fixuns_truncdfsi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2389],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4327 */
  {
    "fixuns_truncdfsi2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2392],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4327 */
  {
    "fixuns_truncdfsi2+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2394],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4327 */
  {
    "fixuns_truncdfsi2+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2396],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4381 */
  {
    "fixuns_truncdfsi2+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2398],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4381 */
  {
    "fixuns_truncdfsi2+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2402],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4381 */
  {
    "fixuns_truncdfsi2+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2406],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4392 */
  {
    "fixuns_truncdfsi2+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2410],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4392 */
  {
    "floathisf2-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2414],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4392 */
  {
    "floathisf2-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2418],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4407 */
  {
    "floathisf2-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2392],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4407 */
  {
    "floathisf2-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2394],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4407 */
  {
    "floathisf2-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2396],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4469 */
  {
    "floathisf2-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2422],
    6,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4484 */
  {
    "floathisf2-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2428],
    6,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4525 */
  {
    "floathisf2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2434],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4525 */
  {
    "floathisf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2439],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4538 */
  {
    "floathisf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2444],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4538 */
  {
    "floathisf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2449],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4574 */
  {
    "floathisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floathisf2,
    &operand_data[2371],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4599 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[2367],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4642 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[2361],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4697 */
  {
    "floathidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floathidf2,
    &operand_data[2369],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4722 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[2363],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4769 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[2454],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4860 */
  {
    "floatdidf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2456],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4875 */
  {
    "floatunssisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunssisf2,
    &operand_data[2458],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4882 */
  {
    "floatunssidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunssidf2,
    &operand_data[2460],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4890 */
  {
    "floatunsdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdisf2,
    &operand_data[2462],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4896 */
  {
    "floatunsdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdidf2,
    &operand_data[2464],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4912 */
  {
    "addti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addti3,
    &operand_data[2466],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4928 */
  {
    "addti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2466],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4951 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[2469],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:4967 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2472],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5082 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[2475],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5126 */
  {
    "addsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2478],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5157 */
  {
    "addsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2482],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5178 */
  {
    "addsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2486],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5207 */
  {
    "addsi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2490],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5227 */
  {
    "addsi3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2494],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5260 */
  {
    "addhi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2499],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5339 */
  {
    "addhi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2504],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5601 */
  {
    "addhi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2507],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5682 */
  {
    "addhi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2510],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:5969 */
  {
    "addhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addhi3,
    &operand_data[2513],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6224 */
  {
    "addqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addqi3,
    &operand_data[2516],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6621 */
  {
    "addxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addxf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6628 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[2522],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6635 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[2525],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6646 */
  {
    "subti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subti3,
    &operand_data[2466],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6662 */
  {
    "subti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2466],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6681 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[2469],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6697 */
  {
    "subdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2472],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6811 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[2475],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6896 */
  {
    "subhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subhi3,
    &operand_data[2513],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6940 */
  {
    "subqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subqi3,
    &operand_data[2516],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:6997 */
  {
    "subxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subxf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7004 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[2522],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7011 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[2525],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7020 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[2528],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7052 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[2531],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7108 */
  {
    "mulhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulhi3,
    &operand_data[2534],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7136 */
  {
    "mulqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulqi3,
    &operand_data[2537],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7160 */
  {
    "umulqihi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulqihi3,
    &operand_data[2540],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7186 */
  {
    "mulqihi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulqihi3,
    &operand_data[2540],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7210 */
  {
    "umulditi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulditi3,
    &operand_data[2543],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7237 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[2545],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7263 */
  {
    "mulditi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulditi3,
    &operand_data[2543],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7289 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[2545],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7315 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[2548],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7351 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[2552],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7408 */
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[2556],
    4,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7443 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[2552],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7500 */
  {
    "mulxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulxf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7507 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[2522],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7514 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[2525],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7545 */
  {
    "divxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divxf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7552 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[2522],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7559 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[2525],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7568 */
  {
    "divmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divmoddi4,
    &operand_data[2560],
    4,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7616 */
  {
    "divmoddi4+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2560],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7651 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[2564],
    4,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7699 */
  {
    "divmodsi4+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2564],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7772 */
  {
    "divmodsi4+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2560],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7815 */
  {
    "udivmodhi4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2564],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7832 */
  {
    "udivmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivmodhi4,
    &operand_data[2568],
    4,
    4,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7914 */
  {
    "testsi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_testsi_ccno_1,
    &operand_data[2572],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7936 */
  {
    "testqi_ccz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_testqi_ccz_1,
    &operand_data[2574],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:7984 */
  {
    "testqi_ext_ccno_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_testqi_ext_ccno_0,
    &operand_data[2576],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8104 */
  {
    "testqi_ext_ccno_0+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2578],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8162 */
  {
    "testqi_ext_ccno_0+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2583],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8183 */
  {
    "anddi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2578],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8207 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[2587],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8272 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[2475],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8318 */
  {
    "andsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2296],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8327 */
  {
    "andsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2248],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8336 */
  {
    "andhi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2248],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8394 */
  {
    "andhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andhi3,
    &operand_data[2513],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8439 */
  {
    "andqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andqi3,
    &operand_data[2516],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8635 */
  {
    "andqi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2590],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8656 */
  {
    "iordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2593],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8680 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[2469],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8727 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[2475],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8820 */
  {
    "iorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorhi3,
    &operand_data[2513],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:8863 */
  {
    "iorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorqi3,
    &operand_data[2516],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9008 */
  {
    "iorqi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2590],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9029 */
  {
    "xordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2593],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9053 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[2469],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9103 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[2475],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9197 */
  {
    "xorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorhi3,
    &operand_data[2513],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9240 */
  {
    "xorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorqi3,
    &operand_data[2516],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9429 */
  {
    "xorqi_cc_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorqi_cc_ext_1,
    &operand_data[2596],
    3,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9449 */
  {
    "xorqi_cc_ext_1+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2590],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9470 */
  {
    "negti2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2593],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9491 */
  {
    "negti2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negti2,
    &operand_data[2273],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9506 */
  {
    "negti2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2273],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9528 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[2469],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9543 */
  {
    "negdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2246],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9590 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[2475],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9650 */
  {
    "neghi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_neghi2,
    &operand_data[2513],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9677 */
  {
    "negqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negqi2,
    &operand_data[2516],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9706 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[2599],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9712 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[2599],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9748 */
  {
    "copysignsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3,
    &operand_data[2601],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9758 */
  {
    "copysignsf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2603],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9786 */
  {
    "negdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2607],
    6,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9802 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[2613],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9808 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[2613],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9848 */
  {
    "copysigndf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3,
    &operand_data[2615],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9858 */
  {
    "copysigndf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2617],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9886 */
  {
    "negxf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2621],
    6,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9902 */
  {
    "negxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negxf2,
    &operand_data[2627],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9908 */
  {
    "absxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absxf2,
    &operand_data[2627],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9925 */
  {
    "negtf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negtf2,
    &operand_data[2298],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9931 */
  {
    "abstf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abstf2,
    &operand_data[2298],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9950 */
  {
    "abstf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2629],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9958 */
  {
    "abstf2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2632],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:9986 */
  {
    "abstf2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2636],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10010 */
  {
    "one_cmpldi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2639],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10048 */
  {
    "one_cmpldi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2642],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10074 */
  {
    "one_cmpldi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2645],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10227 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[2469],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10253 */
  {
    "one_cmpldi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2648],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10269 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[2475],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10304 */
  {
    "one_cmplsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2652],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10332 */
  {
    "one_cmplhi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2656],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10347 */
  {
    "one_cmplhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplhi2,
    &operand_data[2513],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10373 */
  {
    "one_cmplhi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2660],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10389 */
  {
    "one_cmplqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplqi2,
    &operand_data[2516],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10417 */
  {
    "one_cmplqi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2664],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10456 */
  {
    "ashlti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlti3,
    &operand_data[2668],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10506 */
  {
    "ashlti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2671],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10516 */
  {
    "x86_64_shift_adj-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2675],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10541 */
  {
    "x86_64_shift_adj",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_64_shift_adj,
    &operand_data[2678],
    4,
    3,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10557 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[2682],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10608 */
  {
    "ashldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2685],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10718 */
  {
    "ashldi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2688],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10729 */
  {
    "x86_shift_adj_1-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2688],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10756 */
  {
    "x86_shift_adj_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_shift_adj_1,
    &operand_data[2692],
    4,
    3,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10772 */
  {
    "x86_shift_adj_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_shift_adj_2,
    &operand_data[2692],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10800 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[2696],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10848 */
  {
    "ashlsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2699],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10875 */
  {
    "ashlsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2702],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:10932 */
  {
    "ashlhi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2705],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11074 */
  {
    "ashlhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlhi3,
    &operand_data[2708],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11240 */
  {
    "ashlqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlqi3,
    &operand_data[2711],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11446 */
  {
    "ashrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrti3,
    &operand_data[2668],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11481 */
  {
    "ashrti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2714],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11491 */
  {
    "ashrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2675],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11516 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[2718],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11647 */
  {
    "ashrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2721],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11658 */
  {
    "x86_shift_adj_3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2721],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11684 */
  {
    "x86_shift_adj_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_x86_shift_adj_3,
    &operand_data[2692],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11745 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[2696],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:11902 */
  {
    "ashrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrhi3,
    &operand_data[2708],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12005 */
  {
    "ashrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrqi3,
    &operand_data[2711],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12141 */
  {
    "lshrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrti3,
    &operand_data[2668],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12194 */
  {
    "lshrti3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2714],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12204 */
  {
    "lshrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2675],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12213 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[2718],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12327 */
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2721],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12338 */
  {
    "lshrsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2721],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12348 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[2696],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12506 */
  {
    "lshrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrhi3,
    &operand_data[2708],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12609 */
  {
    "lshrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrqi3,
    &operand_data[2711],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12741 */
  {
    "rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotldi3,
    &operand_data[2718],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12761 */
  {
    "rotldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2725],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12811 */
  {
    "rotlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[2696],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12870 */
  {
    "rotlhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlhi3,
    &operand_data[2708],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12904 */
  {
    "rotlqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlqi3,
    &operand_data[2711],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12965 */
  {
    "rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrdi3,
    &operand_data[2718],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:12985 */
  {
    "rotrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2725],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13035 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[2696],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13097 */
  {
    "rotrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrhi3,
    &operand_data[2708],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13131 */
  {
    "rotrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrqi3,
    &operand_data[2711],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13194 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[2729],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13211 */
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[2733],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13228 */
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[2737],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13297 */
  {
    "insv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2741],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13329 */
  {
    "insv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2741],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13361 */
  {
    "seq-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2741],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13403 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13409 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13415 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13421 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13427 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13433 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13439 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13445 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13451 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13457 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13463 */
  {
    "sunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunordered,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13469 */
  {
    "sordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sordered,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13475 */
  {
    "suneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_suneq,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13481 */
  {
    "sunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunge,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13487 */
  {
    "sungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sungt,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13493 */
  {
    "sunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunle,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13499 */
  {
    "sunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunlt,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13505 */
  {
    "sltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltgt,
    &operand_data[2307],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13537 */
  {
    "sltgt+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2744],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13548 */
  {
    "sltgt+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2746],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13559 */
  {
    "beq-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2744],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13579 */
  {
    "beq-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2746],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13632 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13640 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13648 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13656 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13664 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13672 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13680 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13688 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13696 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13704 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13712 */
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13720 */
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13728 */
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13736 */
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13744 */
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13752 */
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13760 */
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13768 */
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[743],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13820 */
  {
    "bltgt+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2747],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:13836 */
  {
    "bltgt+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2747],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14068 */
  {
    "bltgt+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2749],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14085 */
  {
    "bltgt+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2754],
    6,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14103 */
  {
    "indirect_jump-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2760],
    7,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14103 */
  {
    "indirect_jump-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2767],
    7,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14125 */
  {
    "indirect_jump-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2774],
    7,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14125 */
  {
    "indirect_jump-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2781],
    7,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14164 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[627],
    1,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14183 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[2788],
    2,
    0,
    1,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14237 */
  {
    "tablejump+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2789],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14258 */
  {
    "call_pop-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2789],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14286 */
  {
    "call_pop",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_pop,
    &operand_data[2793],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14333 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[2797],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14343 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[2797],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14415 */
  {
    "call_value_pop",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value_pop,
    &operand_data[2799],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14429 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[2804],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14441 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[2804],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14455 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[2808],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14504 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14582 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14614 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14619 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14624 */
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_return,
    &operand_data[2296],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14646 */
  {
    "eh_return+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2301],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14656 */
  {
    "ffssi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2314],
    1,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14682 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[2811],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14691 */
  {
    "ffssi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2811],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14710 */
  {
    "ffsdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2814],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14743 */
  {
    "ffsdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffsdi2,
    &operand_data[2817],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14752 */
  {
    "ffsdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2817],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14798 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[2552],
    2,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14838 */
  {
    "clzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_clzdi2,
    &operand_data[2548],
    2,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14893 */
  {
    "tls_global_dynamic_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_global_dynamic_32,
    &operand_data[2820],
    6,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14932 */
  {
    "tls_global_dynamic_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_global_dynamic_64,
    &operand_data[2826],
    2,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:14975 */
  {
    "tls_local_dynamic_base_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_local_dynamic_base_32,
    &operand_data[2828],
    5,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15010 */
  {
    "tls_local_dynamic_base_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_local_dynamic_base_64,
    &operand_data[2314],
    1,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15028 */
  {
    "tls_local_dynamic_base_64+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2833],
    6,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15102 */
  {
    "tls_dynamic_gnu2_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_dynamic_gnu2_32,
    &operand_data[2839],
    3,
    4,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15148 */
  {
    "tls_dynamic_gnu2_32+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2839],
    5,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15169 */
  {
    "tls_dynamic_gnu2_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tls_dynamic_gnu2_64,
    &operand_data[2826],
    2,
    3,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15208 */
  {
    "tls_dynamic_gnu2_64+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2844],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15711 */
  {
    "tls_dynamic_gnu2_64+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2848],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15711 */
  {
    "tls_dynamic_gnu2_64+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2852],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15731 */
  {
    "sqrtsf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2856],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15731 */
  {
    "sqrtsf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2860],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15753 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[2526],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15791 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[2523],
    2,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15889 */
  {
    "fmodsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fmodsf3,
    &operand_data[2864],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15914 */
  {
    "fmoddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fmoddf3,
    &operand_data[2867],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15939 */
  {
    "fmodxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fmodxf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15974 */
  {
    "dremsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_dremsf3,
    &operand_data[2864],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:15999 */
  {
    "dremdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_dremdf3,
    &operand_data[2867],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16024 */
  {
    "dremxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_dremxf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16144 */
  {
    "dremxf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2867],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16155 */
  {
    "dremxf3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2867],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16179 */
  {
    "dremxf3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2864],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16190 */
  {
    "dremxf3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2864],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16216 */
  {
    "dremxf3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2868],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16230 */
  {
    "tandf2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2868],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16256 */
  {
    "tandf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16267 */
  {
    "tandf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16296 */
  {
    "tandf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2871],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16309 */
  {
    "tandf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tandf2,
    &operand_data[2522],
    2,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16340 */
  {
    "tandf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2875],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16353 */
  {
    "tansf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tansf2,
    &operand_data[2525],
    2,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16383 */
  {
    "tansf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2879],
    4,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16396 */
  {
    "tanxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tanxf2,
    &operand_data[2519],
    2,
    2,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16421 */
  {
    "atan2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atan2df3,
    &operand_data[2867],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16435 */
  {
    "atandf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atandf2,
    &operand_data[2883],
    4,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16462 */
  {
    "atan2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atan2sf3,
    &operand_data[2864],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16476 */
  {
    "atansf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atansf2,
    &operand_data[2887],
    4,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16502 */
  {
    "atan2xf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atan2xf3,
    &operand_data[2519],
    3,
    0,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16515 */
  {
    "atanxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_atanxf2,
    &operand_data[2891],
    4,
    1,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16528 */
  {
    "asindf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_asindf2,
    &operand_data[2895],
    9,
    13,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16552 */
  {
    "asinsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_asinsf2,
    &operand_data[2904],
    9,
    13,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16576 */
  {
    "asinxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_asinxf2,
    &operand_data[2913],
    7,
    9,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16597 */
  {
    "acosdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_acosdf2,
    &operand_data[2895],
    9,
    13,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16621 */
  {
    "acossf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_acossf2,
    &operand_data[2904],
    9,
    13,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16645 */
  {
    "acosxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_acosxf2,
    &operand_data[2913],
    7,
    9,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16678 */
  {
    "logsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logsf2,
    &operand_data[2920],
    6,
    5,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16701 */
  {
    "logdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logdf2,
    &operand_data[2926],
    6,
    5,
    0,
    0
  },
  /* /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/i386/i386.md:16724 */
  {
    "logxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_logxf2,
    &operand_data[2891],
    4,
    1,
    0,
    0
  },
  {
    "log10sf2",
    { 0 },
#else