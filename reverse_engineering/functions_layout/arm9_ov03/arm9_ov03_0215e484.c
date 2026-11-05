
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0215e4f8) */
/* WARNING: Removing unreachable block (ram,0x0215e500) */
/* WARNING: Removing unreachable block (ram,0x0215e508) */
/* WARNING: Removing unreachable block (ram,0x0215e57c) */
/* WARNING: Removing unreachable block (ram,0x0215e55c) */
/* WARNING: Removing unreachable block (ram,0x0215e53c) */
/* WARNING: Removing unreachable block (ram,0x0215e524) */
/* WARNING: Removing unreachable block (ram,0x0215e518) */
/* WARNING: Removing unreachable block (ram,0x0215e510) */
/* WARNING: Removing unreachable block (ram,0x0215e4ec) */
/* WARNING: Removing unreachable block (ram,0x0215e4e4) */
/* WARNING: Removing unreachable block (ram,0x0215e4dc) */
/* WARNING: Removing unreachable block (ram,0x0215e4e0) */
/* WARNING: Removing unreachable block (ram,0x0215e4e8) */
/* WARNING: Removing unreachable block (ram,0x0215e50c) */
/* WARNING: Removing unreachable block (ram,0x0215e514) */
/* WARNING: Removing unreachable block (ram,0x0215e520) */
/* WARNING: Removing unreachable block (ram,0x0215e530) */
/* WARNING: Removing unreachable block (ram,0x0215e54c) */
/* WARNING: Removing unreachable block (ram,0x0215e56c) */
/* WARNING: Removing unreachable block (ram,0x0215e504) */
/* WARNING: Removing unreachable block (ram,0x0215e4fc) */
/* WARNING: Removing unreachable block (ram,0x0215e4f4) */
/* WARNING: Removing unreachable block (ram,0x0215e4f0) */

void FUN_0215e484(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r4;
  undefined1 *unaff_r5;
  undefined1 *puVar1;
  undefined1 unaff_r6;
  int unaff_r7;
  uint unaff_r11;
  bool in_ZR;
  bool bVar2;
  undefined1 in_CY;
  bool in_OV;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if (in_ZR) {
    in_CY = 1;
  }
  bVar3 = ((uint)unaff_r5 & 0x80000003) == 0;
  bVar2 = in_ZR && bVar3;
  if (bVar2) {
    in_CY = 0;
  }
  bVar4 = ((uint)unaff_r5 & 0x20000003) == 0;
  bVar2 = bVar2 && bVar4;
  if (bVar2) {
    in_CY = 0;
  }
  bVar5 = ((uint)unaff_r5 & 0x40000003) == 0;
  bVar2 = bVar2 && bVar5;
  if (bVar2) {
    in_CY = 0;
  }
  bVar6 = ((uint)unaff_r5 & 0x60000003) == 0;
  bVar2 = bVar2 && bVar6;
  if (bVar2) {
    in_CY = 0;
  }
  bVar7 = ((uint)unaff_r5 & 0x30000003) == 0;
  bVar2 = bVar2 && bVar7;
  if (bVar2) {
    in_CY = 0;
  }
  bVar8 = ((uint)unaff_r5 & 0x70000003) == 0;
  bVar2 = bVar2 && bVar8;
  if (bVar2) {
    in_CY = 0;
  }
  bVar9 = ((uint)unaff_r5 & 0x50000003) == 0;
  bVar2 = bVar2 && bVar9;
  if (bVar2) {
    in_CY = 0;
  }
  bVar10 = ((uint)unaff_r5 & 0x10000003) == 0;
  bVar2 = bVar2 && bVar10;
  if (bVar2) {
    in_CY = 1;
  }
  bVar11 = ((uint)unaff_r5 & 0x90000003) == 0;
  bVar2 = bVar2 && bVar11;
  if (bVar2) {
    in_CY = 0;
  }
  bVar12 = ((uint)unaff_r5 & 3) == 0;
  bVar2 = bVar2 && bVar12;
  if (bVar2) {
    in_CY = 0;
  }
  bVar13 = (unaff_r4 & 0xc0) == 0;
  bVar2 = bVar2 && bVar13;
  if (bVar2) {
    in_CY = 0;
  }
  bVar14 = (unaff_r4 & 0x200) == 0;
  bVar2 = bVar2 && bVar14;
  if (bVar2) {
    in_CY = 0;
  }
  bVar15 = (unaff_r4 & 0x2500) == 0;
  bVar2 = bVar2 && bVar15;
  if (bVar2) {
    in_CY = 0;
  }
  bVar16 = (unaff_r4 & 0x1d0) == 0;
  bVar2 = bVar2 && bVar16;
  if (bVar2) {
    in_CY = 0;
  }
  bVar17 = (unaff_r11 & 0x144) == 0;
  if (bVar2 && bVar17) {
    in_CY = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0215e4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((((((((((((((((in_ZR && bVar3) && bVar4) && bVar5) && bVar6) && bVar7) && bVar8) && bVar9) &&
             bVar10) && bVar11) && bVar12) && bVar13) && bVar14) && bVar15) && bVar16) && bVar17) &&
      (unaff_r4 & 0x3d00) == 0) {
    (*(code *)(param_3 & 0x6800000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0215e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215e4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215e4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215e504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215e508. Too many branches */
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
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    unaff_r6 = (undefined1)*(undefined4 *)(unaff_r7 + -0x10);
  }
  else {
    *unaff_r5 = unaff_r6;
    puVar1 = unaff_r5 + -0xec8;
    unaff_r5[-0x764] = unaff_r6;
    unaff_r5 = unaff_r5 + -0x162c;
    *puVar1 = unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (!in_OV) {
    *unaff_r5 = unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

