
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x021613f0) */
/* WARNING: Removing unreachable block (ram,0x021613f8) */
/* WARNING: Removing unreachable block (ram,0x02161400) */
/* WARNING: Removing unreachable block (ram,0x02161424) */
/* WARNING: Removing unreachable block (ram,0x0216141c) */
/* WARNING: Removing unreachable block (ram,0x02161410) */
/* WARNING: Removing unreachable block (ram,0x02161408) */
/* WARNING: Removing unreachable block (ram,0x021613e4) */
/* WARNING: Removing unreachable block (ram,0x021613dc) */
/* WARNING: Removing unreachable block (ram,0x021613d8) */
/* WARNING: Removing unreachable block (ram,0x021613e0) */
/* WARNING: Removing unreachable block (ram,0x021613e8) */
/* WARNING: Removing unreachable block (ram,0x0216140c) */
/* WARNING: Removing unreachable block (ram,0x02161414) */
/* WARNING: Removing unreachable block (ram,0x02161420) */
/* WARNING: Removing unreachable block (ram,0x02161404) */
/* WARNING: Removing unreachable block (ram,0x021613fc) */
/* WARNING: Removing unreachable block (ram,0x021613f4) */
/* WARNING: Removing unreachable block (ram,0x021613ec) */

void FUN_02161380(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r11;
  bool in_ZR;
  
                    /* WARNING: Could not recover jumptable at 0x021613d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((((((!in_ZR || (unaff_r5 & 0x10000000) != 0) || (unaff_r5 & 0x15000000) != 0) ||
        (unaff_r5 & 0xc8000000) != 0) || (undefined1 *)(unaff_r4 & 0xc4) != (undefined1 *)0x0) ||
      (unaff_r11 & 0x144) != 0) || (unaff_r5 & 0xa000000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021613ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x021613f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x021613f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x021613f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x021613fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02161400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02161404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(param_3 & 0x6800000))();
  return;
}

