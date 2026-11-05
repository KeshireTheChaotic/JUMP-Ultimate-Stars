
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0215dba4) */
/* WARNING: Removing unreachable block (ram,0x0215dbac) */
/* WARNING: Removing unreachable block (ram,0x0215dbb4) */
/* WARNING: Removing unreachable block (ram,0x0215dc08) */
/* WARNING: Removing unreachable block (ram,0x0215dbe8) */
/* WARNING: Removing unreachable block (ram,0x0215dbd0) */
/* WARNING: Removing unreachable block (ram,0x0215dbc4) */
/* WARNING: Removing unreachable block (ram,0x0215dbbc) */
/* WARNING: Removing unreachable block (ram,0x0215db98) */
/* WARNING: Removing unreachable block (ram,0x0215db90) */
/* WARNING: Removing unreachable block (ram,0x0215db88) */
/* WARNING: Removing unreachable block (ram,0x0215db8c) */
/* WARNING: Removing unreachable block (ram,0x0215db94) */
/* WARNING: Removing unreachable block (ram,0x0215dbb8) */
/* WARNING: Removing unreachable block (ram,0x0215dbc0) */
/* WARNING: Removing unreachable block (ram,0x0215dbcc) */
/* WARNING: Removing unreachable block (ram,0x0215dbdc) */
/* WARNING: Removing unreachable block (ram,0x0215dbf8) */
/* WARNING: Removing unreachable block (ram,0x0215dbb0) */
/* WARNING: Removing unreachable block (ram,0x0215dba8) */
/* WARNING: Removing unreachable block (ram,0x0215dba0) */
/* WARNING: Removing unreachable block (ram,0x0215db9c) */

void FUN_0215db50(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  uint unaff_r4;
  undefined1 *unaff_r5;
  undefined1 unaff_r6;
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
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr15;
  
  if (in_ZR) {
    in_CY = 0;
  }
  bVar2 = (unaff_r4 & 0xc0) == 0;
  bVar1 = in_ZR && bVar2;
  if (bVar1) {
    in_CY = 0;
  }
  bVar3 = (unaff_r4 & 0x200) == 0;
  bVar1 = bVar1 && bVar3;
  if (bVar1) {
    in_CY = 0;
  }
  bVar4 = (unaff_r4 & 0x2500) == 0;
  bVar1 = bVar1 && bVar4;
  if (bVar1) {
    in_CY = 0;
  }
  bVar5 = (unaff_r4 & 0x1d0) == 0;
  bVar1 = bVar1 && bVar5;
  if (bVar1) {
    in_CY = 0;
  }
  bVar6 = (unaff_r11 & 0x144) == 0;
  if (bVar1 && bVar6) {
    in_CY = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0215db84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((((((in_ZR && bVar2) && bVar3) && bVar4) && bVar5) && bVar6) && (unaff_r4 & 0x3d00) == 0) {
    (*(code *)(param_3 & 0x6800000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0215db9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215dba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215dbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215dbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_OV) {
    software_interrupt(0x666e49);
  }
  if ((bool)in_CY) {
    coprocessor_function(2,6,1,in_cr6,in_cr7,in_cr15);
  }
  if (in_OV) {
    software_interrupt(0x666e49);
  }
  if ((bool)in_CY) {
    coprocessor_function(2,6,1,in_cr6,in_cr7,in_cr15);
  }
  if (in_OV) {
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    software_interrupt(0x54414a);
    coprocessor_moveto(0xd,3,3,unaff_r4,in_cr5,in_cr0);
    *param_2 = (char)unaff_r5;
    software_interrupt(0x434c41);
  }
  else {
    *unaff_r5 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

