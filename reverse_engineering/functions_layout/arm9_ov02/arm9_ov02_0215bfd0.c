
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215bfd0(uint param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *unaff_r4;
  undefined1 *unaff_r5;
  undefined1 *puVar5;
  char *unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  char *in_lr;
  char *pcVar6;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar7;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if ((bool)in_OV) {
    in_lr = *(char **)(unaff_r7 + -4);
    unaff_r6 = *(char **)(unaff_r7 + -0x10);
    param_1 = *(uint *)(unaff_r7 + -0x14);
    puVar5 = unaff_r5;
  }
  else {
    puVar5 = unaff_r5 + -0x764;
    *unaff_r5 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_ZR) {
    param_1 = param_1 & ((uint)(byte)in_CY << 0x1f | unaff_r8 >> 1);
  }
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = (char *)(0x6c00 - (int)puVar5);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_ZR) {
    param_1 = param_1 & ((uint)(byte)in_CY << 0x1f | unaff_r8 >> 1);
  }
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = (char *)(0x6c00 - (int)puVar5);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_ZR) {
    param_1 = param_1 & ((uint)(byte)in_CY << 0x1f | unaff_r8 >> 1);
  }
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = (char *)(0x6c00 - (int)puVar5);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if ((bool)in_ZR) {
    param_1 = param_1 & ((uint)(byte)in_CY << 0x1f | unaff_r8 >> 1);
  }
  puVar3 = param_2;
  if ((bool)in_OV) {
    puVar3 = param_2 + -0x128;
    coprocessor_storelong(7,in_cr4,param_2);
  }
  bVar7 = false;
  if (in_NG) {
    in_CY = unaff_r9 < 0x610001;
    in_OV = SBORROW4(0x610000,unaff_r9);
    bVar7 = (int)(-unaff_r9 + 0x610000) < 0;
    in_ZR = -unaff_r9 == -0x610000;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(4,in_cr7,unaff_r4);
    unaff_r4 = unaff_r4 + -0x2e9;
    unaff_r6 = (char *)(uint)*unaff_r4;
    puVar4 = puVar3 + -0x128;
    coprocessor_storelong(7,in_cr4,puVar3);
  }
  else {
    puVar5 = (undefined1 *)(param_4 - 0x194);
    puVar4 = puVar3;
  }
  if (bVar7) {
    in_CY = unaff_r9 < 0x610001;
    in_OV = SBORROW4(0x610000,unaff_r9);
    in_ZR = unaff_r9 == 0x610000;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(4,in_cr7,unaff_r4);
  }
  else {
    param_3 = ((uint)puVar5 >> 0x1c | (int)puVar5 << 4) - param_4;
  }
  if ((bool)in_ZR) {
    param_1 = param_1 & (param_1 >> (param_1 & 0x1f) | param_1 << 0x20 - (param_1 & 0x1f));
  }
  puVar3 = puVar4;
  if ((bool)in_OV) {
    in_lr = *(char **)(param_4 - 4);
    unaff_r6 = *(char **)(param_4 - 0x1c);
    param_4 = param_4 - 0x20;
    coprocessor_moveto(9,3,3,unaff_r6,in_cr15,in_cr4);
    puVar3 = puVar4 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar4);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  puVar4 = puVar3;
  if (!(bool)in_OV) {
    puVar4 = puVar3 + -0x25f;
    *puVar3 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  bVar7 = false;
  if ((bool)in_ZR) {
    uVar1 = (uint)puVar4 >> 2 | (int)puVar4 << 0x1e;
    in_CY = param_3 <= uVar1;
    in_OV = SBORROW4(uVar1,param_3);
    unaff_r6 = (char *)(uVar1 - param_3);
    bVar7 = unaff_r6 == (char *)0x0;
  }
  puVar3 = puVar4;
  if ((bool)in_OV) {
    puVar3 = puVar4 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar4);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  puVar4 = puVar5;
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bef4);
    puVar4 = puVar5 + -0x17c;
    coprocessor_storelong(3,in_cr7,puVar5);
  }
  if (bVar7) {
    param_4 = param_1 & param_1 >> ((uint)puVar3 & 0xff);
  }
  puVar5 = puVar3;
  if ((bool)in_OV) {
    puVar5 = puVar3 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar3);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bf08);
    coprocessor_storelong(3,in_cr7,puVar4);
  }
  if (bVar7) {
    param_4 = param_1 & param_1 >> (param_1 & 0xff);
  }
  puVar3 = puVar5;
  if (!(bool)in_OV) {
    puVar3 = puVar5 + -0x25f;
    *puVar5 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  if (bVar7) {
    unaff_r6 = (char *)((param_3 >> 0x12 | param_3 << 0xe) - (int)in_lr);
  }
  cVar2 = (char)unaff_r6;
  if ((bool)in_OV) {
    pcVar6 = s_font_jskfont_aft_0215c0a0 + 8;
    func_0x03e36968(param_1,puVar3,param_3,param_4);
  }
  else {
    pcVar6 = in_lr + -0xf66;
    *in_lr = cVar2;
  }
  if (!(bool)in_OV) {
    *pcVar6 = cVar2;
    *unaff_r6 = cVar2 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

