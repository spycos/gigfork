/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1314:  /* sync_xordi */
    case 1313:  /* sync_xorsi */
    case 1312:  /* sync_xorhi */
    case 1311:  /* sync_xorqi */
    case 1310:  /* sync_anddi */
    case 1309:  /* sync_andsi */
    case 1308:  /* sync_andhi */
    case 1307:  /* sync_andqi */
    case 1306:  /* sync_iordi */
    case 1305:  /* sync_iorsi */
    case 1304:  /* sync_iorhi */
    case 1303:  /* sync_iorqi */
    case 1302:  /* sync_subdi */
    case 1301:  /* sync_subsi */
    case 1300:  /* sync_subhi */
    case 1299:  /* sync_subqi */
    case 1298:  /* sync_adddi */
    case 1297:  /* sync_addsi */
    case 1296:  /* sync_addhi */
    case 1295:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1294:  /* sync_lock_test_and_setdi */
    case 1293:  /* sync_lock_test_and_setsi */
    case 1292:  /* sync_lock_test_and_sethi */
    case 1291:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1290:  /* sync_old_adddi */
    case 1289:  /* sync_old_addsi */
    case 1288:  /* sync_old_addhi */
    case 1287:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1286:  /* *sync_double_compare_and_swap_ccdi_pic */
    case 1285:  /* sync_double_compare_and_swap_ccti */
    case 1284:  /* sync_double_compare_and_swap_ccdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 3);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1283:  /* *sync_compare_and_swap_ccdi */
    case 1282:  /* *sync_compare_and_swap_ccsi */
    case 1281:  /* *sync_compare_and_swap_cchi */
    case 1280:  /* *sync_compare_and_swap_ccqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 1279:  /* *sync_double_compare_and_swapdi_pic */
    case 1278:  /* sync_double_compare_and_swapti */
    case 1277:  /* sync_double_compare_and_swapdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1276:  /* *sync_compare_and_swapdi */
    case 1275:  /* *sync_compare_and_swapsi */
    case 1274:  /* *sync_compare_and_swaphi */
    case 1273:  /* *sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1272:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1271:  /* sse4_2_pcmpistrm */
    case 1270:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1269:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1268:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1267:  /* sse4_2_pcmpestrm */
    case 1266:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1265:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1264:  /* sse4_1_roundss */
    case 1263:  /* sse4_1_roundsd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1260:  /* sse4_1_ptest */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1234:  /* sse4_1_pblendw */
    case 1225:  /* sse4_1_blendps */
    case 1224:  /* sse4_1_blendpd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1222:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1198:  /* ssse3_pmulhrswv4hi3 */
    case 1197:  /* ssse3_pmulhrswv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 1193:  /* ssse3_phsubswv8hi3 */
    case 1189:  /* ssse3_phsubwv8hi3 */
    case 1187:  /* ssse3_phaddswv8hi3 */
    case 1183:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1215:  /* sse3_monitor64 */
    case 1182:  /* sse3_monitor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1181:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1180:  /* *sse2_lfence */
    case 1179:  /* *sse2_mfence */
    case 1177:  /* *sse_sfence */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1155:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1063:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1053:  /* sse2_shufpd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1152:  /* *sse4_1_pextrq */
    case 1151:  /* *sse4_1_pextrd */
    case 1150:  /* *sse4_1_pextrw_memory */
    case 1148:  /* *sse4_1_pextrb_memory */
    case 1002:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1000:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1156:  /* sse2_loadld */
    case 998:  /* *vec_setv4sf_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1060:  /* sse2_movsd */
    case 994:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1057:  /* sse2_loadlpd */
    case 993:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 989:  /* sse_shufps_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1051:  /* *sse3_movddup */
    case 988:  /* sse3_movsldup */
    case 987:  /* sse3_movshdup */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 972:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1047:  /* sse2_cvtss2sd */
    case 1046:  /* sse2_cvtsd2ss */
    case 1038:  /* sse2_cvtsi2sdq */
    case 1037:  /* sse2_cvtsi2sd */
    case 975:  /* sse_cvtsi2ssq */
    case 974:  /* sse_cvtsi2ss */
    case 971:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1025:  /* sse2_ucomi */
    case 1024:  /* sse2_comi */
    case 962:  /* sse_ucomi */
    case 961:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1023:  /* sse2_vmmaskcmpv2df3 */
    case 960:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1194:  /* ssse3_phsubswv4hi3 */
    case 1191:  /* ssse3_phsubdv4si3 */
    case 1190:  /* ssse3_phsubwv4hi3 */
    case 1188:  /* ssse3_phaddswv4hi3 */
    case 1185:  /* ssse3_phadddv4si3 */
    case 1184:  /* ssse3_phaddwv4hi3 */
    case 958:  /* sse3_hsubv4sf3 */
    case 957:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1044:  /* *sse2_cvtpd2dq */
    case 943:  /* sse_vmrsqrtv4sf2 */
    case 941:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1018:  /* sse2_vmsminv2df3 */
    case 1015:  /* sse2_vmsmaxv2df3 */
    case 1010:  /* sse2_vmdivv2df3 */
    case 1008:  /* sse2_vmmulv2df3 */
    case 1006:  /* sse2_vmsubv2df3 */
    case 1004:  /* sse2_vmaddv2df3 */
    case 951:  /* sse_vmsminv4sf3 */
    case 948:  /* sse_vmsmaxv4sf3 */
    case 939:  /* sse_vmdivv4sf3 */
    case 937:  /* sse_vmmulv4sf3 */
    case 935:  /* sse_vmsubv4sf3 */
    case 933:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 930:  /* sse_movqv4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      break;

    case 1174:  /* *sse2_maskmovdqu_rex64 */
    case 1173:  /* *sse2_maskmovdqu */
    case 912:  /* *mmx_maskmovq_rex */
    case 911:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1154:  /* sse2_pshuflw_1 */
    case 1153:  /* sse2_pshufd_1 */
    case 900:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1149:  /* sse2_pextrw */
    case 1147:  /* *sse4_1_pextrb */
    case 899:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1146:  /* *sse4_1_pinsrq */
    case 1145:  /* *sse4_1_pinsrd */
    case 1144:  /* *sse2_pinsrw */
    case 1143:  /* *sse4_1_pinsrb */
    case 999:  /* *vec_setv4sf_sse4_1 */
    case 898:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1142:  /* sse2_punpcklqdq */
    case 1141:  /* sse2_punpckhqdq */
    case 1140:  /* sse2_punpckldq */
    case 1139:  /* sse2_punpckhdq */
    case 1138:  /* sse2_punpcklwd */
    case 1137:  /* sse2_punpckhwd */
    case 1136:  /* sse2_punpcklbw */
    case 1135:  /* sse2_punpckhbw */
    case 1052:  /* sse2_unpcklpd */
    case 1050:  /* sse2_unpckhpd */
    case 986:  /* sse_unpcklps */
    case 985:  /* sse_unpckhps */
    case 984:  /* sse_movlhps */
    case 983:  /* sse_movhlps */
    case 897:  /* mmx_punpckldq */
    case 896:  /* mmx_punpckhdq */
    case 895:  /* mmx_punpcklwd */
    case 894:  /* mmx_punpckhwd */
    case 893:  /* mmx_punpcklbw */
    case 892:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1232:  /* sse4_1_packusdw */
    case 1134:  /* sse2_packuswb */
    case 1133:  /* sse2_packssdw */
    case 1132:  /* sse2_packsswb */
    case 891:  /* mmx_packuswb */
    case 890:  /* mmx_packssdw */
    case 889:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 866:  /* mmx_ashlv1di2si */
    case 865:  /* mmx_ashlv2si2si */
    case 864:  /* mmx_ashlv4hi2si */
    case 860:  /* mmx_lshrv1di2si */
    case 859:  /* mmx_lshrv2si2si */
    case 858:  /* mmx_lshrv4hi2si */
    case 854:  /* mmx_ashrv2si2si */
    case 853:  /* mmx_ashrv4hi2si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1085:  /* sse4_1_mulv2siv2di3 */
    case 1084:  /* sse2_umulv2siv2di3 */
    case 846:  /* sse2_umulsidi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1168:  /* sse2_uavgv8hi3 */
    case 1167:  /* sse2_uavgv16qi3 */
    case 908:  /* mmx_uavgv4hi3 */
    case 907:  /* mmx_uavgv8qi3 */
    case 845:  /* mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1196:  /* ssse3_pmaddubswv4hi3 */
    case 1195:  /* ssse3_pmaddubswv8hi3 */
    case 1086:  /* sse2_pmaddwd */
    case 844:  /* mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1083:  /* *umulv8hi3_highpart */
    case 1082:  /* *smulv8hi3_highpart */
    case 843:  /* mmx_umulv4hi3_highpart */
    case 842:  /* mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1259:  /* *sse4_1_zero_extendv2siv2di2 */
    case 1257:  /* *sse4_1_zero_extendv2hiv2di2 */
    case 1255:  /* *sse4_1_zero_extendv4hiv4si2 */
    case 1253:  /* *sse4_1_zero_extendv2qiv2di2 */
    case 1251:  /* *sse4_1_zero_extendv4qiv4si2 */
    case 1249:  /* *sse4_1_zero_extendv8qiv8hi2 */
    case 1247:  /* *sse4_1_extendv2siv2di2 */
    case 1245:  /* *sse4_1_extendv2hiv2di2 */
    case 1243:  /* *sse4_1_extendv4hiv4si2 */
    case 1241:  /* *sse4_1_extendv2qiv2di2 */
    case 1239:  /* *sse4_1_extendv4qiv4si2 */
    case 1237:  /* *sse4_1_extendv8qiv8hi2 */
    case 818:  /* mmx_pi2fw */
    case 817:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1019:  /* sse3_addsubv2df3 */
    case 956:  /* sse3_addsubv4sf3 */
    case 812:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1192:  /* ssse3_phsubdv2si3 */
    case 1186:  /* ssse3_phadddv2si3 */
    case 1021:  /* sse3_hsubv2df3 */
    case 1020:  /* sse3_haddv2df3 */
    case 811:  /* mmx_hsubv2sf3 */
    case 810:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 788:  /* stack_tls_protect_test_di */
    case 787:  /* stack_tls_protect_test_si */
    case 786:  /* stack_protect_test_di */
    case 785:  /* stack_protect_test_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 778:  /* *prefetch_sse_rex */
    case 777:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 776:  /* *sse_prologue_save_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      break;

    case 774:  /* *sibcall_value_1_rex64_v */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1119:  /* sse2_nandv2di3 */
    case 1118:  /* sse2_nandv4si3 */
    case 1117:  /* sse2_nandv8hi3 */
    case 1116:  /* sse2_nandv16qi3 */
    case 1056:  /* sse2_loadhpd */
    case 1048:  /* *sse2_cvtpd2ps */
    case 1045:  /* *sse2_cvttpd2dq */
    case 1031:  /* *nanddf3 */
    case 1027:  /* sse2_nandv2df3 */
    case 1012:  /* sse2_vmsqrtv2df2 */
    case 991:  /* sse_loadhps */
    case 968:  /* *nandsf3 */
    case 964:  /* sse_nandv4sf3 */
    case 945:  /* sse_vmsqrtv4sf2 */
    case 880:  /* mmx_nandv1di3 */
    case 879:  /* mmx_nandv2si3 */
    case 878:  /* mmx_nandv4hi3 */
    case 877:  /* mmx_nandv8qi3 */
    case 773:  /* *sibcall_value_1_rex64 */
    case 772:  /* *call_value_1_rex64 */
    case 771:  /* *sibcall_value_1 */
    case 770:  /* *call_value_1 */
    case 769:  /* *call_value_0_rex64 */
    case 768:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 767:  /* *call_value_pop_1 */
    case 766:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 765:  /* allocate_stack_worker_rex64 */
    case 764:  /* allocate_stack_worker_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 763:  /* pro_epilogue_adjust_stack_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1318:  /* sse4_2_crc32di */
    case 1317:  /* sse4_2_crc32si */
    case 1316:  /* sse4_2_crc32hi */
    case 1315:  /* sse4_2_crc32qi */
    case 1262:  /* sse4_1_roundps */
    case 1261:  /* sse4_1_roundpd */
    case 1223:  /* sse4a_insertq */
    case 1221:  /* sse4a_extrq */
    case 1206:  /* ssse3_psignv2si3 */
    case 1205:  /* ssse3_psignv4hi3 */
    case 1204:  /* ssse3_psignv8qi3 */
    case 1203:  /* ssse3_psignv4si3 */
    case 1202:  /* ssse3_psignv8hi3 */
    case 1201:  /* ssse3_psignv16qi3 */
    case 1200:  /* ssse3_pshufbv8qi3 */
    case 1199:  /* ssse3_pshufbv16qi3 */
    case 1169:  /* sse2_psadbw */
    case 955:  /* *ieee_smaxv2df3 */
    case 954:  /* *ieee_sminv2df3 */
    case 953:  /* *ieee_smaxv4sf3 */
    case 952:  /* *ieee_sminv4sf3 */
    case 909:  /* mmx_psadbw */
    case 809:  /* mmx_rsqit1v2sf3 */
    case 807:  /* mmx_rcpit2v2sf3 */
    case 806:  /* mmx_rcpit1v2sf3 */
    case 760:  /* *ieee_smaxdf3 */
    case 759:  /* *ieee_smindf3 */
    case 758:  /* *ieee_smaxsf3 */
    case 757:  /* *ieee_sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 748:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 752:  /* *movxfcc_1 */
    case 751:  /* *movdfcc_1_rex64 */
    case 750:  /* *movdfcc_1 */
    case 749:  /* *movsfcc_1_387 */
    case 747:  /* *movhicc_noc */
    case 746:  /* *movsicc_noc */
    case 744:  /* *movdicc_c_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 742:  /* *strlenqi_rex_1 */
    case 741:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 740:  /* *darwin_cmpstrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 8), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 739:  /* *darwin_cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 8), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 738:  /* *cmpstrnqi_rex_1 */
    case 737:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 736:  /* *cmpstrnqi_nz_rex_1 */
    case 735:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 734:  /* *rep_stosqi_rex64 */
    case 733:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 732:  /* *rep_stossi_rex64 */
    case 731:  /* *rep_stossi */
    case 730:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 729:  /* *strsetqi_rex_1 */
    case 728:  /* *strsetqi_1 */
    case 727:  /* *strsethi_rex_1 */
    case 726:  /* *strsethi_1 */
    case 725:  /* *strsetsi_rex_1 */
    case 724:  /* *strsetsi_1 */
    case 723:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 722:  /* *rep_movqi_rex64 */
    case 721:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 720:  /* *rep_movsi_rex64 */
    case 719:  /* *rep_movsi */
    case 718:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 717:  /* *strmovqi_rex_1 */
    case 716:  /* *strmovqi_1 */
    case 715:  /* *strmovhi_rex_1 */
    case 714:  /* *strmovhi_1 */
    case 713:  /* *strmovsi_rex_1 */
    case 712:  /* *strmovsi_1 */
    case 711:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 701:  /* fistdi2_ceil_with_temp */
    case 690:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 705:  /* fistsi2_ceil_with_temp */
    case 704:  /* fisthi2_ceil_with_temp */
    case 700:  /* fistdi2_ceil */
    case 694:  /* fistsi2_floor_with_temp */
    case 693:  /* fisthi2_floor_with_temp */
    case 689:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 708:  /* frndintxf2_mask_pm */
    case 706:  /* frndintxf2_trunc */
    case 699:  /* *fistdi2_ceil_1 */
    case 698:  /* *fistsi2_ceil_1 */
    case 697:  /* *fisthi2_ceil_1 */
    case 695:  /* frndintxf2_ceil */
    case 688:  /* *fistdi2_floor_1 */
    case 687:  /* *fistsi2_floor_1 */
    case 686:  /* *fisthi2_floor_1 */
    case 684:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 709:  /* frndintxf2_mask_pm_i387 */
    case 707:  /* frndintxf2_trunc_i387 */
    case 703:  /* fistsi2_ceil */
    case 702:  /* fisthi2_ceil */
    case 696:  /* frndintxf2_ceil_i387 */
    case 692:  /* fistsi2_floor */
    case 691:  /* fisthi2_floor */
    case 685:  /* frndintxf2_floor_i387 */
    case 677:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 784:  /* stack_tls_protect_set_di */
    case 783:  /* stack_tls_protect_set_si */
    case 782:  /* stack_protect_set_di */
    case 781:  /* stack_protect_set_si */
    case 683:  /* fistsi2_with_temp */
    case 682:  /* fisthi2_with_temp */
    case 676:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 670:  /* fyl2xp1_xf3 */
    case 669:  /* fyl2x_xf3 */
    case 668:  /* atan2xf3_1 */
    case 667:  /* atan2sf3_1 */
    case 666:  /* atan2df3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 661:  /* *sincosextendsfdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 671:  /* *fxtractxf3 */
    case 665:  /* *tanxf3_1 */
    case 664:  /* *tansf3_1 */
    case 663:  /* *tandf3_1 */
    case 662:  /* sincosxf3 */
    case 660:  /* sincossf3 */
    case 659:  /* sincosdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1218:  /* sse4a_vmmovntv4sf */
    case 1216:  /* sse4a_vmmovntv2df */
    case 1040:  /* sse2_cvtsd2siq */
    case 1039:  /* sse2_cvtsd2si */
    case 977:  /* sse_cvtss2siq */
    case 976:  /* sse_cvtss2si */
    case 928:  /* sse_loadqv4si */
    case 657:  /* *cosextendsfdf2 */
    case 653:  /* *sinextendsfdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 673:  /* *fscalexf4 */
    case 650:  /* fprem1xf4 */
    case 649:  /* fpremxf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 638:  /* *fop_xf_6_i387 */
    case 629:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 637:  /* *fop_xf_5_i387 */
    case 635:  /* *fop_xf_3si_i387 */
    case 634:  /* *fop_xf_3hi_i387 */
    case 628:  /* *fop_df_5_i387 */
    case 626:  /* *fop_df_3si_i387 */
    case 625:  /* *fop_df_3hi_i387 */
    case 616:  /* *fop_sf_3si_i387 */
    case 615:  /* *fop_sf_3hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 636:  /* *fop_xf_4_i387 */
    case 633:  /* *fop_xf_2si_i387 */
    case 632:  /* *fop_xf_2hi_i387 */
    case 627:  /* *fop_df_4_i387 */
    case 624:  /* *fop_df_2si_i387 */
    case 623:  /* *fop_df_2hi_i387 */
    case 614:  /* *fop_sf_2si_i387 */
    case 613:  /* *fop_sf_2hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1022:  /* sse2_maskcmpv2df3 */
    case 959:  /* sse_maskcmpv4sf3 */
    case 631:  /* *fop_xf_1_i387 */
    case 630:  /* *fop_xf_comm_i387 */
    case 622:  /* *fop_df_1_i387 */
    case 621:  /* *fop_df_1_sse */
    case 620:  /* *fop_df_1_mixed */
    case 619:  /* *fop_df_comm_i387 */
    case 618:  /* *fop_df_comm_sse */
    case 617:  /* *fop_df_comm_mixed */
    case 612:  /* *fop_sf_1_i387 */
    case 611:  /* *fop_sf_1_sse */
    case 610:  /* *fop_sf_1_mixed */
    case 609:  /* *fop_sf_comm_i387 */
    case 608:  /* *fop_sf_comm_sse */
    case 607:  /* *fop_sf_comm_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 606:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 605:  /* *tls_dynamic_call_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1235:  /* sse4_1_phminposuw */
    case 1230:  /* sse4_1_movntdqa */
    case 1219:  /* sse4a_movntsf */
    case 1217:  /* sse4a_movntdf */
    case 1172:  /* sse2_pmovmskb */
    case 1171:  /* sse2_movmskpd */
    case 1170:  /* sse_movmskps */
    case 1035:  /* sse2_cvtpd2pi */
    case 981:  /* sse2_cvtps2dq */
    case 942:  /* sse_rsqrtv4sf2 */
    case 940:  /* sse_rcpv4sf2 */
    case 931:  /* sse3_lddqu */
    case 929:  /* sse_storeqv4si */
    case 927:  /* sse2_movntsi */
    case 926:  /* sse2_movntv2di */
    case 925:  /* sse2_movntv2df */
    case 924:  /* sse_movntv4sf */
    case 923:  /* sse2_movdqu */
    case 922:  /* sse2_movupd */
    case 921:  /* sse_movups */
    case 910:  /* mmx_pmovmskb */
    case 808:  /* mmx_rsqrtv2sf2 */
    case 805:  /* mmx_rcpv2sf2 */
    case 799:  /* sse_movntv1di */
    case 681:  /* fistsi2 */
    case 680:  /* fisthi2 */
    case 679:  /* *fistsi2_1 */
    case 678:  /* *fisthi2_1 */
    case 675:  /* *fistdi2_1 */
    case 674:  /* frndintxf2 */
    case 672:  /* *f2xm1xf2 */
    case 658:  /* *cosxf2 */
    case 656:  /* *cossf2 */
    case 655:  /* *cosdf2 */
    case 654:  /* *sinxf2 */
    case 652:  /* *sinsf2 */
    case 651:  /* *sindf2 */
    case 604:  /* *tls_dynamic_lea_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 603:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 602:  /* *tls_dynamic_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 601:  /* *tls_dynamic_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 600:  /* *add_tp_di */
    case 598:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 596:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 594:  /* *tls_local_dynamic_base_32_sun */
    case 593:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 592:  /* *tls_global_dynamic_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 591:  /* *tls_global_dynamic_32_sun */
    case 590:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 589:  /* *bsr_rex64 */
    case 586:  /* *bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 583:  /* *ffsdi_1 */
    case 581:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 573:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 569:  /* return_indirect_internal */
    case 568:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 914:  /* mmx_femms */
    case 913:  /* mmx_emms */
    case 775:  /* trap */
    case 710:  /* cld */
    case 578:  /* leave_rex64 */
    case 577:  /* leave */
    case 570:  /* nop */
    case 567:  /* return_internal_long */
    case 566:  /* return_internal */
      break;

    case 1178:  /* sse2_clflush */
    case 1175:  /* sse_ldmxcsr */
    case 571:  /* align */
    case 565:  /* blockage */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 558:  /* *call_pop_1 */
    case 557:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 556:  /* *tablejump_1_rtx64 */
    case 555:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 564:  /* *sibcall_1_rex64_v */
    case 554:  /* *indirect_jump_rtx64 */
    case 553:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 552:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 551:  /* *fp_jcc_8si_387 */
    case 550:  /* *fp_jcc_8hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 548:  /* *fp_jcc_6_387 */
    case 546:  /* *fp_jcc_4_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 549:  /* *fp_jcc_7_387 */
    case 547:  /* *fp_jcc_5_387 */
    case 545:  /* *fp_jcc_3_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 544:  /* *fp_jcc_2_387 */
    case 543:  /* *fp_jcc_2_sse */
    case 542:  /* *fp_jcc_2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 541:  /* *fp_jcc_1_387 */
    case 540:  /* *fp_jcc_1_sse */
    case 539:  /* *fp_jcc_1_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 538:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 537:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 536:  /* *sse_setccdf */
    case 535:  /* *sse_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 532:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 531:  /* *btrq */
    case 530:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 517:  /* ix86_rotrdi3 */
    case 504:  /* ix86_rotldi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 443:  /* x86_shrd_1 */
    case 434:  /* x86_64_shrd */
    case 418:  /* x86_shld_1 */
    case 413:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 470:  /* lshrti3_1 */
    case 432:  /* ashrti3_1 */
    case 411:  /* ashlti3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1166:  /* *vec_concatv2di */
    case 1165:  /* *vec_concatv4si_1 */
    case 1164:  /* *sse1_concatv2si */
    case 1163:  /* *sse2_concatv2si */
    case 1131:  /* sse4_1_uminv4si3 */
    case 1130:  /* sse4_1_uminv8hi3 */
    case 1129:  /* sse4_1_sminv4si3 */
    case 1128:  /* sse4_1_sminv16qi3 */
    case 1127:  /* *xorv2di3 */
    case 1126:  /* *xorv4si3 */
    case 1125:  /* *xorv8hi3 */
    case 1124:  /* *xorv16qi3 */
    case 1123:  /* *iorv2di3 */
    case 1122:  /* *iorv4si3 */
    case 1121:  /* *iorv8hi3 */
    case 1120:  /* *iorv16qi3 */
    case 1115:  /* *andv2di3 */
    case 1114:  /* *andv4si3 */
    case 1113:  /* *andv8hi3 */
    case 1112:  /* *andv16qi3 */
    case 1111:  /* sse4_2_gtv2di3 */
    case 1110:  /* sse2_gtv4si3 */
    case 1109:  /* sse2_gtv8hi3 */
    case 1108:  /* sse2_gtv16qi3 */
    case 1107:  /* sse4_1_eqv2di3 */
    case 1106:  /* sse2_eqv4si3 */
    case 1105:  /* sse2_eqv8hi3 */
    case 1104:  /* sse2_eqv16qi3 */
    case 1103:  /* *sminv8hi3 */
    case 1102:  /* *uminv16qi3 */
    case 1101:  /* sse4_1_umaxv4si3 */
    case 1100:  /* sse4_1_umaxv8hi3 */
    case 1099:  /* sse4_1_smaxv4si3 */
    case 1098:  /* sse4_1_smaxv16qi3 */
    case 1097:  /* *smaxv8hi3 */
    case 1096:  /* *umaxv16qi3 */
    case 1095:  /* ashlv2di3 */
    case 1094:  /* ashlv4si3 */
    case 1093:  /* ashlv8hi3 */
    case 1092:  /* lshrv2di3 */
    case 1091:  /* lshrv4si3 */
    case 1090:  /* lshrv8hi3 */
    case 1089:  /* ashrv4si3 */
    case 1088:  /* ashrv8hi3 */
    case 1087:  /* *sse4_1_mulv4si3 */
    case 1081:  /* *mulv8hi3 */
    case 1080:  /* sse2_ussubv8hi3 */
    case 1079:  /* sse2_ussubv16qi3 */
    case 1078:  /* sse2_sssubv8hi3 */
    case 1077:  /* sse2_sssubv16qi3 */
    case 1076:  /* *subv2di3 */
    case 1075:  /* *subv4si3 */
    case 1074:  /* *subv8hi3 */
    case 1073:  /* *subv16qi3 */
    case 1072:  /* sse2_usaddv8hi3 */
    case 1071:  /* sse2_usaddv16qi3 */
    case 1070:  /* sse2_ssaddv8hi3 */
    case 1069:  /* sse2_ssaddv16qi3 */
    case 1068:  /* *addv2di3 */
    case 1067:  /* *addv4si3 */
    case 1066:  /* *addv8hi3 */
    case 1065:  /* *addv16qi3 */
    case 1064:  /* *vec_concatv2df */
    case 1033:  /* *xordf3 */
    case 1032:  /* *iordf3 */
    case 1030:  /* *anddf3 */
    case 1029:  /* *xorv2df3 */
    case 1028:  /* *iorv2df3 */
    case 1026:  /* *andv2df3 */
    case 1017:  /* *sminv2df3 */
    case 1016:  /* *sminv2df3_finite */
    case 1014:  /* *smaxv2df3 */
    case 1013:  /* *smaxv2df3_finite */
    case 1009:  /* *divv2df3 */
    case 1007:  /* *mulv2df3 */
    case 1005:  /* *subv2df3 */
    case 1003:  /* *addv2df3 */
    case 997:  /* *sse_concatv4sf */
    case 996:  /* *sse_concatv2sf */
    case 970:  /* *xorsf3 */
    case 969:  /* *iorsf3 */
    case 967:  /* *andsf3 */
    case 966:  /* *xorv4sf3 */
    case 965:  /* *iorv4sf3 */
    case 963:  /* *andv4sf3 */
    case 950:  /* *sminv4sf3 */
    case 949:  /* *sminv4sf3_finite */
    case 947:  /* *smaxv4sf3 */
    case 946:  /* *smaxv4sf3_finite */
    case 938:  /* *divv4sf3 */
    case 936:  /* *mulv4sf3 */
    case 934:  /* *subv4sf3 */
    case 932:  /* *addv4sf3 */
    case 904:  /* *mmx_concatv2si */
    case 888:  /* mmx_xorv1di3 */
    case 887:  /* mmx_xorv2si3 */
    case 886:  /* mmx_xorv4hi3 */
    case 885:  /* mmx_xorv8qi3 */
    case 884:  /* mmx_iorv1di3 */
    case 883:  /* mmx_iorv2si3 */
    case 882:  /* mmx_iorv4hi3 */
    case 881:  /* mmx_iorv8qi3 */
    case 876:  /* mmx_andv1di3 */
    case 875:  /* mmx_andv2si3 */
    case 874:  /* mmx_andv4hi3 */
    case 873:  /* mmx_andv8qi3 */
    case 872:  /* mmx_gtv2si3 */
    case 871:  /* mmx_gtv4hi3 */
    case 870:  /* mmx_gtv8qi3 */
    case 869:  /* mmx_eqv2si3 */
    case 868:  /* mmx_eqv4hi3 */
    case 867:  /* mmx_eqv8qi3 */
    case 863:  /* mmx_ashlv1di3 */
    case 862:  /* mmx_ashlv2si3 */
    case 861:  /* mmx_ashlv4hi3 */
    case 857:  /* mmx_lshrv1di3 */
    case 856:  /* mmx_lshrv2si3 */
    case 855:  /* mmx_lshrv4hi3 */
    case 852:  /* mmx_ashrv2si3 */
    case 851:  /* mmx_ashrv4hi3 */
    case 850:  /* mmx_sminv4hi3 */
    case 849:  /* mmx_uminv8qi3 */
    case 848:  /* mmx_smaxv4hi3 */
    case 847:  /* mmx_umaxv8qi3 */
    case 841:  /* mmx_mulv4hi3 */
    case 840:  /* mmx_ussubv4hi3 */
    case 839:  /* mmx_ussubv8qi3 */
    case 838:  /* mmx_sssubv4hi3 */
    case 837:  /* mmx_sssubv8qi3 */
    case 836:  /* mmx_subv1di3 */
    case 835:  /* mmx_subv2si3 */
    case 834:  /* mmx_subv4hi3 */
    case 833:  /* mmx_subv8qi3 */
    case 832:  /* mmx_usaddv4hi3 */
    case 831:  /* mmx_usaddv8qi3 */
    case 830:  /* mmx_ssaddv4hi3 */
    case 829:  /* mmx_ssaddv8qi3 */
    case 828:  /* mmx_addv1di3 */
    case 827:  /* mmx_addv2si3 */
    case 826:  /* mmx_addv4hi3 */
    case 825:  /* mmx_addv8qi3 */
    case 822:  /* *mmx_concatv2sf */
    case 815:  /* mmx_eqv2sf3 */
    case 814:  /* mmx_gev2sf3 */
    case 813:  /* mmx_gtv2sf3 */
    case 804:  /* mmx_sminv2sf3 */
    case 803:  /* mmx_smaxv2sf3 */
    case 802:  /* mmx_mulv2sf3 */
    case 801:  /* mmx_subv2sf3 */
    case 800:  /* mmx_addv2sf3 */
    case 756:  /* smaxdf3 */
    case 755:  /* smindf3 */
    case 754:  /* smaxsf3 */
    case 753:  /* sminsf3 */
    case 471:  /* sse2_lshrti3 */
    case 410:  /* sse2_ashlti3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 405:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 385:  /* copysigndf3_var */
    case 380:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1233:  /* sse4_1_pblendvb */
    case 1231:  /* sse4_1_mpsadbw */
    case 1229:  /* sse4_1_dpps */
    case 1228:  /* sse4_1_dppd */
    case 1227:  /* sse4_1_blendvps */
    case 1226:  /* sse4_1_blendvpd */
    case 1220:  /* sse4a_extrqi */
    case 1208:  /* ssse3_palignrv1di */
    case 1207:  /* ssse3_palignrti */
    case 384:  /* copysigndf3_const */
    case 379:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 387:  /* *absnegtf2_sse */
    case 386:  /* *absnegxf2_i387 */
    case 383:  /* *absnegdf2_i387 */
    case 382:  /* *absnegdf2_sse */
    case 381:  /* *absnegdf2_mixed */
    case 378:  /* *absnegsf2_i387 */
    case 377:  /* *absnegsf2_sse */
    case 376:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 371:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 369:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 409:  /* *one_cmplqi2_2 */
    case 407:  /* *one_cmplhi2_2 */
    case 404:  /* *one_cmplsi2_2 */
    case 401:  /* *one_cmpldi2_2_rex64 */
    case 375:  /* *negqi2_cmpz */
    case 373:  /* *neghi2_cmpz */
    case 370:  /* *negsi2_cmpz */
    case 367:  /* *negdi2_cmpz_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 489:  /* *lshrsi3_cmp_zext */
    case 486:  /* *lshrsi3_cmp_one_bit_zext */
    case 348:  /* *xorsi_2_zext_imm */
    case 326:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 595:  /* *tls_local_dynamic_base_64 */
    case 481:  /* *lshrsi3_1_one_bit_zext */
    case 345:  /* *xorsi_1_zext_imm */
    case 323:  /* *iorsi_1_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 363:  /* *xorqi_cc_ext_1_rex64 */
    case 362:  /* *xorqi_cc_ext_1 */
    case 314:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 360:  /* *xorqi_2_slp */
    case 334:  /* *iorqi_2_slp */
    case 312:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 299:  /* *testqi_ext_3_rex64 */
    case 298:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 297:  /* *testqi_ext_2 */
    case 296:  /* *testqi_ext_1_rex64 */
    case 295:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 294:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 287:  /* *udivmodsi4_noext */
    case 285:  /* *udivmoddi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 286:  /* udivmodsi4 */
    case 284:  /* udivmoddi4 */
    case 283:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 288:  /* *udivmodhi_noext */
    case 282:  /* *divmodsi_noext */
    case 279:  /* *divmoddi_noext_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 281:  /* *divmodsi4_cltd */
    case 280:  /* *divmodsi4_nocltd */
    case 278:  /* *divmoddi4_cltd_rex64 */
    case 277:  /* *divmoddi4_nocltd_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 274:  /* *smulsi3_highpart_zext */
    case 271:  /* *umulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 273:  /* *smulsi3_highpart_insn */
    case 272:  /* *smuldi3_highpart_rex64 */
    case 270:  /* *umulsi3_highpart_insn */
    case 269:  /* *umuldi3_highpart_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 268:  /* *mulsidi3_insn */
    case 267:  /* *mulditi3_insn */
    case 266:  /* *umulsidi3_insn */
    case 265:  /* *umulditi3_insn */
    case 264:  /* *mulqihi3_insn */
    case 263:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 250:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 244:  /* subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 257:  /* *subqi_3 */
    case 253:  /* *subhi_3 */
    case 249:  /* *subsi_3 */
    case 240:  /* *subdi_3_rex63 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 243:  /* subsi3_carry */
    case 242:  /* subhi3_carry */
    case 241:  /* subqi3_carry */
    case 237:  /* subdi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 358:  /* *xorqi_ext_2 */
    case 357:  /* *xorqi_ext_1_rex64 */
    case 356:  /* *xorqi_ext_1 */
    case 339:  /* *iorqi_ext_2 */
    case 338:  /* *iorqi_ext_1_rex64 */
    case 337:  /* *iorqi_ext_1 */
    case 317:  /* *andqi_ext_2 */
    case 316:  /* *andqi_ext_1_rex64 */
    case 315:  /* *andqi_ext_1 */
    case 234:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 355:  /* xorqi_ext_0 */
    case 336:  /* iorqi_ext_0 */
    case 313:  /* andqi_ext_0 */
    case 233:  /* *addqi_ext_1_rex64 */
    case 232:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 529:  /* *rotrqi3_1_slp */
    case 527:  /* *rotrqi3_1_one_bit_slp */
    case 515:  /* *rotlqi3_1_slp */
    case 513:  /* *rotlqi3_1_one_bit_slp */
    case 499:  /* *lshrqi3_1_slp */
    case 497:  /* *lshrqi3_1_one_bit_slp */
    case 465:  /* *ashrqi3_1_slp */
    case 463:  /* *ashrqi3_1_one_bit_slp */
    case 354:  /* *xorqi_1_slp */
    case 332:  /* *iorqi_1_slp */
    case 309:  /* *andqi_1_slp */
    case 255:  /* *subqi_1_slp */
    case 227:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 216:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 455:  /* *ashrsi3_cmp_zext */
    case 452:  /* *ashrsi3_one_bit_cmp_zext */
    case 423:  /* *ashlsi3_cmp_zext */
    case 347:  /* *xorsi_2_zext */
    case 325:  /* *iorsi_2_zext */
    case 305:  /* *andsi_2_zext */
    case 248:  /* *subsi_2_zext */
    case 214:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 523:  /* *rotrsi3_1_zext */
    case 521:  /* *rotrsi3_1_one_bit_zext */
    case 510:  /* *rotlsi3_1_zext */
    case 508:  /* *rotlsi3_1_one_bit_zext */
    case 483:  /* *lshrsi3_1_zext */
    case 449:  /* *ashrsi3_1_zext */
    case 447:  /* *ashrsi3_1_one_bit_zext */
    case 445:  /* *ashrsi3_31_zext */
    case 420:  /* *ashlsi3_1_zext */
    case 344:  /* *xorsi_1_zext */
    case 322:  /* *iorsi_1_zext */
    case 303:  /* *andsi_1_zext */
    case 260:  /* *mulsi3_1_zext */
    case 246:  /* *subsi_1_zext */
    case 212:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 503:  /* *lshrqi2_cconly */
    case 501:  /* *lshrqi2_one_bit_cconly */
    case 495:  /* *lshrhi3_cconly */
    case 493:  /* *lshrhi3_one_bit_cconly */
    case 488:  /* *lshrsi3_cconly */
    case 485:  /* *lshrsi3_one_bit_cconly */
    case 478:  /* *lshrdi3_cconly_rex64 */
    case 476:  /* *lshrdi3_cconly_one_bit_rex64 */
    case 469:  /* *ashrqi3_cconly */
    case 467:  /* *ashrqi3_one_bit_cconly */
    case 461:  /* *ashrhi3_cconly */
    case 459:  /* *ashrhi3_one_bit_cconly */
    case 454:  /* *ashrsi3_cconly */
    case 451:  /* *ashrsi3_one_bit_cconly */
    case 441:  /* *ashrdi3_cconly_rex64 */
    case 439:  /* *ashrdi3_one_bit_cconly_rex64 */
    case 431:  /* *ashlqi3_cconly */
    case 427:  /* *ashlhi3_cconly */
    case 422:  /* *ashlsi3_cconly */
    case 416:  /* *ashldi3_cconly_rex64 */
    case 361:  /* *xorqi_cc_2 */
    case 352:  /* *xorhi_3 */
    case 349:  /* *xorsi_3 */
    case 342:  /* *xordi_3_rex64 */
    case 335:  /* *iorqi_3 */
    case 330:  /* *iorhi_3 */
    case 327:  /* *iorsi_3 */
    case 320:  /* *iordi_3_rex64 */
    case 231:  /* *addqi_5 */
    case 224:  /* *addhi_5 */
    case 218:  /* *addsi_5 */
    case 210:  /* *adddi_5_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 230:  /* *addqi_4 */
    case 223:  /* *addhi_4 */
    case 217:  /* *addsi_4 */
    case 209:  /* *adddi_4_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 229:  /* *addqi_3 */
    case 222:  /* *addhi_3 */
    case 215:  /* *addsi_3 */
    case 208:  /* *adddi_3_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 502:  /* *lshrqi2_cmp */
    case 500:  /* *lshrqi2_one_bit_cmp */
    case 494:  /* *lshrhi3_cmp */
    case 492:  /* *lshrhi3_one_bit_cmp */
    case 487:  /* *lshrsi3_cmp */
    case 484:  /* *lshrsi3_one_bit_cmp */
    case 477:  /* *lshrdi3_cmp_rex64 */
    case 475:  /* *lshrdi3_cmp_one_bit_rex64 */
    case 468:  /* *ashrqi3_cmp */
    case 466:  /* *ashrqi3_one_bit_cmp */
    case 460:  /* *ashrhi3_cmp */
    case 458:  /* *ashrhi3_one_bit_cmp */
    case 453:  /* *ashrsi3_cmp */
    case 450:  /* *ashrsi3_one_bit_cmp */
    case 440:  /* *ashrdi3_cmp_rex64 */
    case 438:  /* *ashrdi3_one_bit_cmp_rex64 */
    case 430:  /* *ashlqi3_cmp */
    case 426:  /* *ashlhi3_cmp */
    case 421:  /* *ashlsi3_cmp */
    case 415:  /* *ashldi3_cmp_rex64 */
    case 359:  /* *xorqi_cc_1 */
    case 351:  /* *xorhi_2 */
    case 346:  /* *xorsi_2 */
    case 341:  /* *xordi_2_rex64 */
    case 333:  /* *iorqi_2 */
    case 329:  /* *iorhi_2 */
    case 324:  /* *iorsi_2 */
    case 319:  /* *iordi_2_rex64 */
    case 311:  /* *andqi_2 */
    case 310:  /* *andqi_2_maybe_si */
    case 307:  /* *andhi_2 */
    case 304:  /* *andsi_2 */
    case 301:  /* *anddi_2 */
    case 256:  /* *subqi_2 */
    case 252:  /* *subhi_2 */
    case 247:  /* *subsi_2 */
    case 239:  /* *subdi_2_rex64 */
    case 228:  /* *addqi_2 */
    case 221:  /* *addhi_2 */
    case 213:  /* *addsi_2 */
    case 207:  /* *adddi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 205:  /* *lea_general_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 204:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 203:  /* *lea_general_2_zext */
    case 201:  /* *lea_general_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 202:  /* *lea_general_2 */
    case 200:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 193:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 195:  /* addqi3_cc */
    case 194:  /* *addsi3_cc */
    case 189:  /* *adddi3_cc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 192:  /* addsi3_carry */
    case 191:  /* addhi3_carry */
    case 190:  /* addqi3_carry */
    case 188:  /* adddi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 762:  /* pro_epilogue_adjust_stack_rex64 */
    case 761:  /* pro_epilogue_adjust_stack_1 */
    case 528:  /* *rotrqi3_1 */
    case 526:  /* *rotrqi3_1_one_bit */
    case 525:  /* *rotrhi3 */
    case 524:  /* *rotrhi3_one_bit */
    case 522:  /* *rotrsi3_1 */
    case 520:  /* *rotrsi3_1_one_bit */
    case 519:  /* *rotrdi3_1_rex64 */
    case 518:  /* *rotrdi3_1_one_bit_rex64 */
    case 516:  /* *rotlqi3_1 */
    case 514:  /* *rotlqi3_1_one_bit */
    case 512:  /* *rotlhi3_1 */
    case 511:  /* *rotlhi3_1_one_bit */
    case 509:  /* *rotlsi3_1 */
    case 507:  /* *rotlsi3_1_one_bit */
    case 506:  /* *rotldi3_1_rex64 */
    case 505:  /* *rotlsi3_1_one_bit_rex64 */
    case 498:  /* *lshrqi3_1 */
    case 496:  /* *lshrqi3_1_one_bit */
    case 491:  /* *lshrhi3_1 */
    case 490:  /* *lshrhi3_1_one_bit */
    case 482:  /* *lshrsi3_1 */
    case 480:  /* *lshrsi3_1_one_bit */
    case 479:  /* *lshrdi3_1 */
    case 474:  /* *lshrdi3_1_rex64 */
    case 473:  /* *lshrdi3_1_one_bit_rex64 */
    case 472:  /* *lshrti3_2 */
    case 464:  /* *ashrqi3_1 */
    case 462:  /* *ashrqi3_1_one_bit */
    case 457:  /* *ashrhi3_1 */
    case 456:  /* *ashrhi3_1_one_bit */
    case 448:  /* *ashrsi3_1 */
    case 446:  /* *ashrsi3_1_one_bit */
    case 444:  /* ashrsi3_31 */
    case 442:  /* *ashrdi3_1 */
    case 437:  /* *ashrdi3_1_rex64 */
    case 436:  /* *ashrdi3_1_one_bit_rex64 */
    case 435:  /* *ashrdi3_63_rex64 */
    case 433:  /* *ashrti3_2 */
    case 429:  /* *ashlqi3_1 */
    case 428:  /* *ashlqi3_1_lea */
    case 425:  /* *ashlhi3_1 */
    case 424:  /* *ashlhi3_1_lea */
    case 419:  /* *ashlsi3_1 */
    case 417:  /* *ashldi3_1 */
    case 414:  /* *ashldi3_1_rex64 */
    case 412:  /* *ashlti3_2 */
    case 353:  /* *xorqi_1 */
    case 350:  /* *xorhi_1 */
    case 343:  /* *xorsi_1 */
    case 340:  /* *xordi_1_rex64 */
    case 331:  /* *iorqi_1 */
    case 328:  /* *iorhi_1 */
    case 321:  /* *iorsi_1 */
    case 318:  /* *iordi_1_rex64 */
    case 308:  /* *andqi_1 */
    case 306:  /* *andhi_1 */
    case 302:  /* *andsi_1 */
    case 300:  /* *anddi_1_rex64 */
    case 276:  /* udivqi3 */
    case 275:  /* divqi3 */
    case 262:  /* *mulqi3_1 */
    case 261:  /* *mulhi3_1 */
    case 259:  /* *mulsi3_1 */
    case 258:  /* *muldi3_1_rex64 */
    case 254:  /* *subqi_1 */
    case 251:  /* *subhi_1 */
    case 245:  /* *subsi_1 */
    case 238:  /* *subdi_1_rex64 */
    case 236:  /* *subdi3_1 */
    case 235:  /* *subti3_1 */
    case 226:  /* *addqi_1 */
    case 225:  /* *addqi_1_lea */
    case 220:  /* *addhi_1 */
    case 219:  /* *addhi_1_lea */
    case 211:  /* *addsi_1 */
    case 206:  /* *adddi_1_rex64 */
    case 187:  /* *adddi3_1 */
    case 186:  /* *addti3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 162:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 166:  /* fix_truncsi_i387_with_temp */
    case 165:  /* fix_trunchi_i387_with_temp */
    case 161:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 164:  /* fix_truncsi_i387 */
    case 163:  /* fix_trunchi_i387 */
    case 157:  /* fix_truncdi_i387_fisttp_with_temp */
    case 156:  /* fix_truncsi_i387_fisttp_with_temp */
    case 155:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 582:  /* *ffs_rex64 */
    case 580:  /* *ffs_no_cmove */
    case 579:  /* *ffs_cmove */
    case 154:  /* fix_truncdi_i387_fisttp */
    case 153:  /* fix_truncsi_i387_fisttp */
    case 152:  /* fix_trunchi_i387_fisttp */
    case 141:  /* *truncxfdf2_i387 */
    case 139:  /* *truncxfdf2_mixed */
    case 137:  /* *truncxfsf2_i387 */
    case 135:  /* *truncxfsf2_mixed */
    case 133:  /* *truncdfsf_i387 */
    case 132:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 115:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 745:  /* x86_movsicc_0_m1 */
    case 743:  /* x86_movdicc_0_m1_rex64 */
    case 588:  /* bswapdi2 */
    case 587:  /* bswapsi2 */
    case 585:  /* ctzdi2 */
    case 584:  /* ctzsi2 */
    case 374:  /* *negqi2_1 */
    case 372:  /* *neghi2_1 */
    case 368:  /* *negsi2_1 */
    case 366:  /* *negdi2_1_rex64 */
    case 365:  /* *negdi2_1 */
    case 364:  /* *negti2_1 */
    case 160:  /* *fix_truncdi_i387_1 */
    case 159:  /* *fix_truncsi_i387_1 */
    case 158:  /* *fix_trunchi_i387_1 */
    case 111:  /* zero_extendsidi2_32 */
    case 109:  /* *zero_extendqisi2_movzbw_and */
    case 108:  /* *zero_extendqisi2_and */
    case 106:  /* *zero_extendqihi2_movzbw_and */
    case 105:  /* *zero_extendqihi2_and */
    case 103:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 73:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1258:  /* sse4_1_zero_extendv2siv2di2 */
    case 1256:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1254:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1252:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1250:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1248:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1246:  /* sse4_1_extendv2siv2di2 */
    case 1244:  /* sse4_1_extendv2hiv2di2 */
    case 1242:  /* sse4_1_extendv4hiv4si2 */
    case 1240:  /* sse4_1_extendv2qiv2di2 */
    case 1238:  /* sse4_1_extendv4qiv4si2 */
    case 1236:  /* sse4_1_extendv8qiv8hi2 */
    case 1049:  /* sse2_cvtps2pd */
    case 1043:  /* sse2_cvtdq2pd */
    case 1042:  /* sse2_cvttsd2siq */
    case 1041:  /* sse2_cvttsd2si */
    case 979:  /* sse_cvttss2siq */
    case 978:  /* sse_cvttss2si */
    case 973:  /* sse_cvttps2pi */
    case 902:  /* *vec_dupv4hi */
    case 648:  /* *sqrtextenddfxf2_i387 */
    case 647:  /* *sqrtextendsfxf2_i387 */
    case 645:  /* *sqrtextendsfdf2_i387 */
    case 403:  /* *one_cmplsi2_1_zext */
    case 399:  /* *absextendsfxf2 */
    case 398:  /* *absextenddfxf2 */
    case 397:  /* *absextendsfdf2 */
    case 396:  /* *negextendsfxf2 */
    case 395:  /* *negextenddfxf2 */
    case 394:  /* *negextendsfdf2 */
    case 198:  /* *lea_1_zext */
    case 123:  /* *extendqisi2_zext */
    case 120:  /* *extendhisi2_zext */
    case 70:  /* *movqi_extzv_2_rex64 */
    case 69:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 60:  /* *movstrictqi_xor */
    case 59:  /* *movstrictqi_and */
    case 52:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 101:  /* swapxf */
    case 96:  /* *swapdf */
    case 91:  /* *swapsf */
    case 85:  /* *swapdi_rex64 */
    case 57:  /* *swapqi_2 */
    case 56:  /* *swapqi_1 */
    case 50:  /* *swaphi_2 */
    case 49:  /* *swaphi_1 */
    case 43:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1214:  /* ssse3_pabsv2si2 */
    case 1213:  /* ssse3_pabsv4hi2 */
    case 1212:  /* ssse3_pabsv8qi2 */
    case 1211:  /* ssse3_pabsv4si2 */
    case 1210:  /* ssse3_pabsv8hi2 */
    case 1209:  /* ssse3_pabsv16qi2 */
    case 1162:  /* *vec_dupv2di */
    case 1161:  /* *vec_dupv4si */
    case 1160:  /* *vec_extractv2di_1_sse */
    case 1159:  /* *vec_extractv2di_1_sse2 */
    case 1158:  /* *sse2_storeq */
    case 1157:  /* sse2_stored */
    case 1062:  /* *vec_dupv2df */
    case 1061:  /* *vec_dupv2df_sse3 */
    case 1059:  /* *vec_extractv2df_0_sse */
    case 1058:  /* *vec_extractv2df_1_sse */
    case 1055:  /* sse2_storelpd */
    case 1054:  /* sse2_storehpd */
    case 1036:  /* sse2_cvttpd2pi */
    case 1034:  /* sse2_cvtpi2pd */
    case 1011:  /* sqrtv2df2 */
    case 1001:  /* *vec_extractv4sf_0 */
    case 995:  /* *vec_dupv4sf */
    case 992:  /* sse_storelps */
    case 990:  /* sse_storehps */
    case 982:  /* sse2_cvttps2dq */
    case 980:  /* sse2_cvtdq2ps */
    case 944:  /* sqrtv4sf2 */
    case 906:  /* *vec_extractv2si_1 */
    case 905:  /* *vec_extractv2si_0 */
    case 903:  /* *vec_dupv2si */
    case 901:  /* mmx_pswapdv2si2 */
    case 824:  /* *vec_extractv2sf_1 */
    case 823:  /* *vec_extractv2sf_0 */
    case 821:  /* *vec_dupv2sf */
    case 820:  /* mmx_pswapdv2sf2 */
    case 819:  /* mmx_floatv2si2 */
    case 816:  /* mmx_pf2id */
    case 646:  /* sqrtxf2 */
    case 644:  /* *sqrtdf2_i387 */
    case 643:  /* *sqrtdf2_sse */
    case 642:  /* *sqrtdf2_mixed */
    case 641:  /* *sqrtsf2_i387 */
    case 640:  /* *sqrtsf2_sse */
    case 639:  /* *sqrtsf2_mixed */
    case 408:  /* *one_cmplqi2_1 */
    case 406:  /* *one_cmplhi2_1 */
    case 402:  /* *one_cmplsi2_1 */
    case 400:  /* *one_cmpldi2_1_rex64 */
    case 393:  /* *absxf2_1 */
    case 392:  /* *absdf2_1 */
    case 391:  /* *abssf2_1 */
    case 390:  /* *negxf2_1 */
    case 389:  /* *negdf2_1 */
    case 388:  /* *negsf2_1 */
    case 197:  /* *lea_1_rex64 */
    case 185:  /* floatdixf2 */
    case 184:  /* floatsixf2 */
    case 183:  /* floathixf2 */
    case 182:  /* *floatdidf2_i387 */
    case 181:  /* *floatdidf2_sse */
    case 180:  /* *floatdidf2_mixed */
    case 179:  /* *floatsidf2_i387 */
    case 178:  /* *floatsidf2_sse */
    case 177:  /* *floatsidf2_mixed */
    case 176:  /* *floathidf2_i387 */
    case 175:  /* *floatdisf2_i387 */
    case 174:  /* *floatdisf2_sse */
    case 173:  /* *floatdisf2_mixed */
    case 172:  /* *floatsisf2_i387 */
    case 171:  /* *floatsisf2_sse */
    case 170:  /* *floatsisf2_mixed */
    case 169:  /* *floathisf2_i387 */
    case 151:  /* fix_truncdi_fisttp_i387_1 */
    case 150:  /* fix_truncsi_fisttp_i387_1 */
    case 149:  /* fix_trunchi_fisttp_i387_1 */
    case 148:  /* fix_truncdfsi_sse */
    case 147:  /* fix_truncsfsi_sse */
    case 146:  /* fix_truncdfdi_sse */
    case 145:  /* fix_truncsfdi_sse */
    case 144:  /* fixuns_truncsfhi2 */
    case 143:  /* fixuns_truncdfhi2 */
    case 142:  /* *truncxfdf2_i387_1 */
    case 140:  /* truncxfdf2_i387_noop */
    case 138:  /* *truncxfsf2_i387_1 */
    case 136:  /* truncxfsf2_i387_noop */
    case 134:  /* *truncdfsf2_i387_1 */
    case 131:  /* *truncdfsf_fast_i387 */
    case 130:  /* *truncdfsf_fast_sse */
    case 129:  /* *truncdfsf_fast_mixed */
    case 128:  /* *extenddfxf2_i387 */
    case 127:  /* *extendsfxf2_i387 */
    case 126:  /* *extendsfdf2_i387 */
    case 125:  /* *extendsfdf2_sse */
    case 124:  /* *extendsfdf2_mixed */
    case 122:  /* extendqisi2 */
    case 121:  /* extendqihi2 */
    case 119:  /* extendhisi2 */
    case 118:  /* extendqidi2 */
    case 117:  /* extendhidi2 */
    case 116:  /* extendsidi2_rex64 */
    case 114:  /* zero_extendqidi2 */
    case 113:  /* zero_extendhidi2 */
    case 112:  /* zero_extendsidi2_rex64 */
    case 110:  /* *zero_extendqisi2_movzbw */
    case 107:  /* *zero_extendqihi2_movzbl */
    case 104:  /* *zero_extendhisi2_movzwl */
    case 84:  /* *movabsdi_2_rex64 */
    case 68:  /* *movsi_extzv_1 */
    case 67:  /* *movdi_extzv_1 */
    case 66:  /* *movabsqi_2_rex64 */
    case 64:  /* *movqi_extv_1_rex64 */
    case 63:  /* *movqi_extv_1 */
    case 62:  /* *movhi_extv_1 */
    case 61:  /* *movsi_extv_1 */
    case 48:  /* *movabshi_2_rex64 */
    case 42:  /* *movabssi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 563:  /* *sibcall_1_rex64 */
    case 562:  /* *call_1_rex64 */
    case 561:  /* *sibcall_1 */
    case 560:  /* *call_1 */
    case 559:  /* *call_0 */
    case 534:  /* *setcc_2 */
    case 83:  /* *movabsdi_1_rex64 */
    case 72:  /* movdi_insv_1_rex64 */
    case 71:  /* movsi_insv_1 */
    case 65:  /* *movabsqi_1_rex64 */
    case 58:  /* *movstrictqi_1 */
    case 51:  /* *movstricthi_1 */
    case 47:  /* *movabshi_1_rex64 */
    case 41:  /* *movabssi_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 572:  /* set_got */
    case 78:  /* popdi1 */
    case 77:  /* *popdi1_epilogue_rex64 */
    case 37:  /* popsi1 */
    case 36:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 80:  /* *movdi_or_rex64 */
    case 79:  /* *movdi_xor_rex64 */
    case 76:  /* *pushdi2_prologue_rex64 */
    case 39:  /* *movsi_or */
    case 38:  /* *movsi_xor */
    case 35:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 920:  /* *movv2df_internal */
    case 919:  /* *movv4sf_internal */
    case 918:  /* *movv2di_internal */
    case 917:  /* *movv4si_internal */
    case 916:  /* *movv8hi_internal */
    case 915:  /* *movv16qi_internal */
    case 798:  /* *movv2sf_internal */
    case 797:  /* *movv2sf_internal_rex64 */
    case 796:  /* *movv1di_internal */
    case 795:  /* *movv2si_internal */
    case 794:  /* *movv4hi_internal */
    case 793:  /* *movv8qi_internal */
    case 792:  /* *movv1di_internal_rex64 */
    case 791:  /* *movv2si_internal_rex64 */
    case 790:  /* *movv4hi_internal_rex64 */
    case 789:  /* *movv8qi_internal_rex64 */
    case 780:  /* *prefetch_3dnow_rex */
    case 779:  /* *prefetch_3dnow */
    case 533:  /* *setcc_1 */
    case 199:  /* *lea_2_rex64 */
    case 196:  /* *lea_1 */
    case 102:  /* *movtf_internal */
    case 100:  /* *movxf_integer */
    case 99:  /* *movxf_nointeger */
    case 98:  /* *pushxf_integer */
    case 97:  /* *pushxf_nointeger */
    case 95:  /* *movdf_integer */
    case 94:  /* *movdf_nointeger */
    case 93:  /* *pushdf_integer */
    case 92:  /* *pushdf_nointeger */
    case 90:  /* *movsf_1 */
    case 89:  /* *pushsf_rex64 */
    case 88:  /* *pushsf */
    case 87:  /* *movti_rex64 */
    case 86:  /* *movti_internal */
    case 82:  /* *movdi_1_rex64 */
    case 81:  /* *movdi_2 */
    case 75:  /* *pushdi2_rex64 */
    case 74:  /* *pushdi */
    case 55:  /* *movqi_1 */
    case 54:  /* *pushqi2_rex64 */
    case 53:  /* *pushqi2 */
    case 46:  /* *movhi_1 */
    case 45:  /* *pushhi2_rex64 */
    case 44:  /* *pushhi2 */
    case 40:  /* *movsi_1 */
    case 34:  /* *pushsi2_rex64 */
    case 33:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 576:  /* eh_return_di */
    case 575:  /* eh_return_si */
    case 168:  /* x86_fldcw_1 */
    case 26:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1176:  /* sse_stmxcsr */
    case 599:  /* *load_tp_di */
    case 597:  /* *load_tp_si */
    case 574:  /* set_got_rex64 */
    case 167:  /* x86_fnstcw_1 */
    case 25:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 24:  /* *cmpfp_si */
    case 23:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 22:  /* *cmpfp_u */
    case 21:  /* *cmpfp_xf */
    case 20:  /* *cmpfp_df */
    case 19:  /* *cmpfp_sf */
    case 18:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 17:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 16:  /* cmpqi_ext_3_insn_rex64 */
    case 15:  /* cmpqi_ext_3_insn */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1_rex64 */
    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 293:  /* *testqi_1 */
    case 292:  /* *testqi_1_maybe_si */
    case 291:  /* *testhi_1 */
    case 290:  /* testsi_1 */
    case 289:  /* *testdi_1_rex64 */
    case 11:  /* *cmpqi_minus_1 */
    case 7:  /* *cmphi_minus_1 */
    case 4:  /* *cmpsi_minus_1 */
    case 1:  /* *cmpdi_minus_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 32:  /* *cmpfp_iu_387 */
    case 31:  /* *cmpfp_iu_sse */
    case 30:  /* *cmpfp_iu_mixed */
    case 29:  /* *cmpfp_i_i387 */
    case 28:  /* *cmpfp_i_sse */
    case 27:  /* *cmpfp_i_mixed */
    case 10:  /* *cmpqi_1 */
    case 9:  /* *cmpqi_ccno_1 */
    case 8:  /* *cmphi_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpsi_1_insn */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* cmpdi_1_insn_rex64 */
    case 0:  /* cmpdi_ccno_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
