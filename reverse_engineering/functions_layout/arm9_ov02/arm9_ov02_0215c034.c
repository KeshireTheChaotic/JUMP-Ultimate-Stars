
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215c034(uint param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 unaff_r4;
  uint unaff_r5;
  uint uVar4;
  char *unaff_r6;
  uint unaff_r9;
  char *in_lr;
  char *pcVar5;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar6;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr15;
  
  puVar2 = param_2;
  if ((bool)in_OV) {
    puVar2 = param_2 + -0x128;
    coprocessor_storelong(7,in_cr4,param_2);
  }
  if (in_NG) {
    in_CY = unaff_r9 < 0x610001;
    in_OV = SBORROW4(0x610000,unaff_r9);
    in_ZR = unaff_r9 == 0x610000;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(4,in_cr7,unaff_r4);
  }
  else {
    param_3 = (unaff_r5 >> 0x1c | unaff_r5 << 4) - param_4;
  }
  if ((bool)in_ZR) {
    param_1 = param_1 & (param_1 >> (param_1 & 0x1f) | param_1 << 0x20 - (param_1 & 0x1f));
  }
  puVar3 = puVar2;
  if ((bool)in_OV) {
    in_lr = *(char **)(param_4 - 4);
    unaff_r6 = *(char **)(param_4 - 0x1c);
    param_4 = param_4 - 0x20;
    coprocessor_moveto(9,3,3,unaff_r6,in_cr15,in_cr4);
    puVar3 = puVar2 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar2);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  puVar2 = puVar3;
  if (!(bool)in_OV) {
    puVar2 = puVar3 + -0x25f;
    *puVar3 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  bVar6 = false;
  if ((bool)in_ZR) {
    uVar4 = (uint)puVar2 >> 2 | (int)puVar2 << 0x1e;
    in_CY = param_3 <= uVar4;
    in_OV = SBORROW4(uVar4,param_3);
    unaff_r6 = (char *)(uVar4 - param_3);
    bVar6 = unaff_r6 == (char *)0x0;
  }
  puVar3 = puVar2;
  if ((bool)in_OV) {
    puVar3 = puVar2 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar2);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  uVar4 = unaff_r5;
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bef4);
    uVar4 = unaff_r5 - 0x17c;
    coprocessor_storelong(3,in_cr7,unaff_r5);
  }
  if (bVar6) {
    param_4 = param_1 & param_1 >> ((uint)puVar3 & 0xff);
  }
  puVar2 = puVar3;
  if ((bool)in_OV) {
    puVar2 = puVar3 + -0x1a8;
    coprocessor_storelong(7,in_cr6,puVar3);
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bf08);
    coprocessor_storelong(3,in_cr7,uVar4);
  }
  if (bVar6) {
    param_4 = param_1 & param_1 >> (param_1 & 0xff);
  }
  puVar3 = puVar2;
  if (!(bool)in_OV) {
    puVar3 = puVar2 + -0x25f;
    *puVar2 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  if (bVar6) {
    unaff_r6 = (char *)((param_3 >> 0x12 | param_3 << 0xe) - (int)in_lr);
  }
  cVar1 = (char)unaff_r6;
  if ((bool)in_OV) {
    pcVar5 = s_font_jskfont_aft_0215c0a0 + 8;
    func_0x03e36968(param_1,puVar3,param_3,param_4);
  }
  else {
    pcVar5 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if (!(bool)in_OV) {
    *pcVar5 = cVar1;
    *unaff_r6 = cVar1 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

