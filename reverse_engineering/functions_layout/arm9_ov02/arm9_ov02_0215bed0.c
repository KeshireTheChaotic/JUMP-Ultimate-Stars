
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0215bf78) */
/* WARNING: Removing unreachable block (ram,0x0215bf80) */
/* WARNING: Removing unreachable block (ram,0x0215bf88) */
/* WARNING: Removing unreachable block (ram,0x0215bf58) */
/* WARNING: Removing unreachable block (ram,0x0215bf84) */
/* WARNING: Removing unreachable block (ram,0x0215bf7c) */
/* WARNING: Removing unreachable block (ram,0x0215bf74) */
/* WARNING: Removing unreachable block (ram,0x0215bf70) */
/* WARNING: Removing unreachable block (ram,0x0215bf60) */
/* WARNING: Removing unreachable block (ram,0x0215bf5c) */
/* WARNING: Removing unreachable block (ram,0x0215bf8c) */
/* WARNING: Removing unreachable block (ram,0x0215bf64) */
/* WARNING: Removing unreachable block (ram,0x0215bf90) */
/* WARNING: Removing unreachable block (ram,0x0215bf68) */
/* WARNING: Removing unreachable block (ram,0x0215bf94) */
/* WARNING: Removing unreachable block (ram,0x0215bf9c) */
/* WARNING: Removing unreachable block (ram,0x0215bf6c) */
/* WARNING: Removing unreachable block (ram,0x0215bfa0) */
/* WARNING: Removing unreachable block (ram,0x0215c004) */
/* WARNING: Removing unreachable block (ram,0x0215bfdc) */
/* WARNING: Removing unreachable block (ram,0x0215bfbc) */
/* WARNING: Removing unreachable block (ram,0x0215bfac) */
/* WARNING: Removing unreachable block (ram,0x0215bfcc) */
/* WARNING: Removing unreachable block (ram,0x0215bff0) */
/* WARNING: Removing unreachable block (ram,0x0215c018) */

void FUN_0215bed0(uint param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *unaff_r4;
  undefined1 *unaff_r5;
  undefined1 *puVar6;
  char *unaff_r6;
  int unaff_r7;
  uint unaff_r9;
  uint unaff_r11;
  char *in_lr;
  char *pcVar7;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  bVar8 = false;
  if (in_ZR) {
    in_lr = (char *)((uint)unaff_r4 & 0xb0000001);
    in_NG = (int)in_lr < 0;
    bVar8 = in_lr == (char *)0x0;
    in_CY = 1;
  }
  bVar9 = false;
  if (bVar8) {
    in_lr = (char *)((uint)unaff_r4 & 2);
    bVar9 = in_lr == (char *)0x0;
    in_CY = 0;
    in_NG = 0;
  }
  bVar8 = false;
  if (bVar9) {
    in_lr = (char *)((uint)unaff_r4 & 0x4000000f);
    bVar8 = in_lr == (char *)0x0;
    in_CY = 0;
    in_NG = 0;
  }
  if (bVar8) {
    in_NG = 0;
  }
  bVar9 = false;
  if (bVar8 && (undefined1 *)((uint)unaff_r4 & 0x1c) == (undefined1 *)0x0) {
    param_1 = unaff_r11 & 0x144;
    bVar9 = param_1 == 0;
    in_CY = 0;
    in_NG = 0;
  }
  bVar8 = false;
  if (bVar9) {
    in_lr = (char *)((uint)unaff_r4 & 0x50000001);
    bVar8 = in_lr == (char *)0x0;
    in_CY = false;
    in_NG = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0215bf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar8) {
    (*(code *)(param_3 & 0x6800000))();
    return;
  }
  bVar8 = false;
                    /* WARNING: Could not recover jumptable at 0x0215bf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215bf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215bf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215bf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215bf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0215bf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_OV) {
    software_interrupt(0x4e4c41);
    coprocessor_storelong(5,in_cr6,unaff_r9 - 400);
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    in_lr = *(char **)(unaff_r7 + -4);
    unaff_r6 = *(char **)(unaff_r7 + -0x10);
    param_1 = *(uint *)(unaff_r7 + -0x14);
  }
  else {
    uVar2 = SUB41(unaff_r6,0);
    *unaff_r5 = uVar2;
    puVar6 = unaff_r5 + -0xec8;
    unaff_r5[-0x764] = uVar2;
    unaff_r5 = unaff_r5 + -0x162c;
    *puVar6 = uVar2;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = (char *)(0x6c00 - (int)unaff_r5);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = (char *)(0x6c00 - (int)unaff_r5);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = (char *)(0x6c00 - (int)unaff_r5);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  puVar6 = param_2;
  if ((bool)in_OV) {
    puVar6 = param_2 + -0x128;
    coprocessor_storelong(7,in_cr4,param_2);
  }
  bVar9 = false;
  if ((bool)in_NG) {
    in_CY = unaff_r9 < 0x610001;
    in_OV = SBORROW4(0x610000,unaff_r9);
    bVar9 = (int)(-unaff_r9 + 0x610000) < 0;
    bVar8 = -unaff_r9 == -0x610000;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(4,in_cr7,unaff_r4);
    unaff_r4 = unaff_r4 + -0x2e9;
    unaff_r6 = (char *)(uint)*unaff_r4;
    puVar4 = puVar6 + -0x128;
    coprocessor_storelong(7,in_cr4,puVar6);
  }
  else {
    unaff_r5 = (undefined1 *)(param_4 - 0x194);
    puVar4 = puVar6;
  }
  if (bVar9) {
    in_CY = unaff_r9 < 0x610001;
    in_OV = SBORROW4(0x610000,unaff_r9);
    bVar8 = unaff_r9 == 0x610000;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(4,in_cr7,unaff_r4);
  }
  else {
    param_3 = ((uint)unaff_r5 >> 0x1c | (int)unaff_r5 << 4) - param_4;
  }
  if (bVar8) {
    param_1 = param_1 & (param_1 >> (param_1 & 0x1f) | param_1 << 0x20 - (param_1 & 0x1f));
  }
  puVar6 = puVar4;
  if ((bool)in_OV) {
    in_lr = *(char **)(param_4 - 4);
    unaff_r6 = *(char **)(param_4 - 0x1c);
    param_4 = param_4 - 0x20;
    coprocessor_moveto(9,3,3,unaff_r6,in_cr15,in_cr4);
    puVar6 = puVar4 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar4);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  puVar4 = puVar6;
  if (!(bool)in_OV) {
    puVar4 = puVar6 + -0x25f;
    *puVar6 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  bVar9 = false;
  if (bVar8) {
    uVar1 = (uint)puVar4 >> 2 | (int)puVar4 << 0x1e;
    in_CY = param_3 <= uVar1;
    in_OV = SBORROW4(uVar1,param_3);
    unaff_r6 = (char *)(uVar1 - param_3);
    bVar9 = unaff_r6 == (char *)0x0;
  }
  puVar6 = puVar4;
  if ((bool)in_OV) {
    puVar6 = puVar4 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar4);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  puVar4 = unaff_r5;
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bef4);
    puVar4 = unaff_r5 + -0x17c;
    coprocessor_storelong(3,in_cr7,unaff_r5);
  }
  if (bVar9) {
    param_4 = param_1 & param_1 >> ((uint)puVar6 & 0xff);
  }
  puVar5 = puVar6;
  if ((bool)in_OV) {
    puVar5 = puVar6 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar6);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bf08);
    coprocessor_storelong(3,in_cr7,puVar4);
  }
  if (bVar9) {
    param_4 = param_1 & param_1 >> (param_1 & 0xff);
  }
  puVar6 = puVar5;
  if (!(bool)in_OV) {
    puVar6 = puVar5 + -0x25f;
    *puVar5 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  if (bVar9) {
    unaff_r6 = (char *)((param_3 >> 0x12 | param_3 << 0xe) - (int)in_lr);
  }
  cVar3 = (char)unaff_r6;
  if ((bool)in_OV) {
    pcVar7 = s_font_jskfont_aft_0215c0a0 + 8;
    func_0x03e36968(param_1,puVar6,param_3,param_4);
  }
  else {
    pcVar7 = in_lr + -0xf66;
    *in_lr = cVar3;
  }
  if (!(bool)in_OV) {
    *pcVar7 = cVar3;
    *unaff_r6 = cVar3 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

