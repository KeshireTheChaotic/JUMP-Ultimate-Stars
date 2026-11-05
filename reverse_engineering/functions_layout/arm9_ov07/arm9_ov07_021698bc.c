
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0216994c) */
/* WARNING: Removing unreachable block (ram,0x02169954) */
/* WARNING: Removing unreachable block (ram,0x0216995c) */
/* WARNING: Removing unreachable block (ram,0x02169978) */
/* WARNING: Removing unreachable block (ram,0x0216996c) */
/* WARNING: Removing unreachable block (ram,0x02169964) */
/* WARNING: Removing unreachable block (ram,0x02169940) */
/* WARNING: Removing unreachable block (ram,0x02169938) */
/* WARNING: Removing unreachable block (ram,0x02169930) */
/* WARNING: Removing unreachable block (ram,0x02169934) */
/* WARNING: Removing unreachable block (ram,0x0216993c) */
/* WARNING: Removing unreachable block (ram,0x02169960) */
/* WARNING: Removing unreachable block (ram,0x02169968) */
/* WARNING: Removing unreachable block (ram,0x02169974) */
/* WARNING: Removing unreachable block (ram,0x02169958) */
/* WARNING: Removing unreachable block (ram,0x02169950) */
/* WARNING: Removing unreachable block (ram,0x02169948) */
/* WARNING: Removing unreachable block (ram,0x02169944) */

void FUN_021698bc(undefined4 param_1,uint param_2,uint param_3)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r11;
  undefined1 *in_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar1;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  if (in_OV) {
    unaff_r6 = 0;
  }
  else {
    *in_lr = (char)unaff_r6;
  }
  if (in_CY) {
    coprocessor_function(0xe,7,3,in_cr6,in_cr4,in_cr15);
  }
  bVar1 = false;
  if (in_ZR) {
    unaff_r6 = (param_2 >> 0xc | param_2 << 0x14) - unaff_r4;
    bVar1 = unaff_r6 == 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0216992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (((((((((((((!bVar1 || (unaff_r6 & 0x48000) != 0) || (unaff_r6 & 0x4000) != 0) ||
               (unaff_r6 & 0x60000) != 0) || (unaff_r6 & 0x30000) != 0) ||
             (unaff_r6 & 0x270000) != 0) || (unaff_r6 & 0x48000) != 0) || (unaff_r6 & 0x2a0000) != 0
           ) || (unaff_r5 & 0x4500000) != 0) || (unaff_r5 & 0x5100000) != 0) ||
        (unaff_r5 & 0x33000000) != 0) || (unaff_r4 & 0x1100) != 0) || (unaff_r11 & 0x144) != 0) ||
      (unaff_r5 & 0x2c00000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02169944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0216994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0216995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(param_3 & 0x6800000))();
  return;
}

