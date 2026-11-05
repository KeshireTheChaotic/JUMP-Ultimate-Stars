
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02160df0) */
/* WARNING: Removing unreachable block (ram,0x02160df8) */
/* WARNING: Removing unreachable block (ram,0x02160e00) */
/* WARNING: Removing unreachable block (ram,0x02160dd0) */
/* WARNING: Removing unreachable block (ram,0x02160dfc) */
/* WARNING: Removing unreachable block (ram,0x02160df4) */
/* WARNING: Removing unreachable block (ram,0x02160dec) */
/* WARNING: Removing unreachable block (ram,0x02160de8) */
/* WARNING: Removing unreachable block (ram,0x02160dd8) */
/* WARNING: Removing unreachable block (ram,0x02160dd4) */
/* WARNING: Removing unreachable block (ram,0x02160e04) */
/* WARNING: Removing unreachable block (ram,0x02160e08) */
/* WARNING: Removing unreachable block (ram,0x02160ddc) */
/* WARNING: Removing unreachable block (ram,0x02160e0c) */
/* WARNING: Removing unreachable block (ram,0x02160de0) */
/* WARNING: Removing unreachable block (ram,0x02160e14) */
/* WARNING: Removing unreachable block (ram,0x02160e18) */
/* WARNING: Removing unreachable block (ram,0x02160de4) */
/* WARNING: Removing unreachable block (ram,0x02160e24) */
/* WARNING: Removing unreachable block (ram,0x02160e34) */

void FUN_02160d6c(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4)

{
  uint unaff_r4;
  undefined1 *unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  uint unaff_r11;
  bool in_ZR;
  bool bVar1;
  undefined1 in_CY;
  bool in_OV;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = 0x6c00 - (int)unaff_r5;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (in_OV) {
    unaff_r11 = *(uint *)(unaff_r7 + -8);
    param_4 = param_4 + -0x142;
    unaff_r6 = (uint)*param_4;
  }
  else {
    *unaff_r5 = (char)unaff_r6;
    unaff_r5 = unaff_r5 + -0x764;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (in_OV) {
    unaff_r11 = *(uint *)(unaff_r7 + -8);
    unaff_r6 = (uint)param_4[-0x142];
  }
  else {
    *unaff_r5 = (char)unaff_r6;
    unaff_r5 = unaff_r5 + -0x764;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (in_ZR) {
    in_CY = 0;
  }
  bVar2 = ((uint)unaff_r5 & 0x10000000) == 0;
  bVar1 = in_ZR && bVar2;
  if (bVar1) {
    in_CY = 0;
  }
  bVar3 = ((uint)unaff_r5 & 0x15000000) == 0;
  bVar1 = bVar1 && bVar3;
  if (bVar1) {
    in_CY = 1;
  }
  bVar4 = ((uint)unaff_r5 & 0xc8000000) == 0;
  bVar5 = (undefined1 *)(unaff_r4 & 0xc4) == (undefined1 *)0x0;
  bVar1 = (bVar1 && bVar4) && bVar5;
  if (bVar1) {
    in_CY = 0;
  }
  bVar6 = (unaff_r11 & 0x144) == 0;
  if (bVar1 && bVar6) {
    in_CY = false;
  }
                    /* WARNING: Could not recover jumptable at 0x02160dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((((((in_ZR && bVar2) && bVar3) && bVar4) && bVar5) && bVar6) &&
      ((uint)unaff_r5 & 0xa000000) == 0) {
    (*(code *)(param_3 & 0x6800000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02160de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02160de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02160dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02160df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02160df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02160df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02160dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    coprocessor_loadlong(9,in_cr6,unaff_r4 - 0x150);
    unaff_r6 = *(uint *)(unaff_r4 - 0x338);
    unaff_r4 = unaff_r4 - 0x344;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    software_interrupt(0x6c2f65);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

