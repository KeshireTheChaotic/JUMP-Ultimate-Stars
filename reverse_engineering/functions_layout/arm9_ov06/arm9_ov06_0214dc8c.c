
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dc8c(uint param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr9;
  
  if (in_OV) {
    *param_3 = in_lr;
    param_3[-1] = unaff_r11;
    param_3[-2] = unaff_r6;
    param_3[-3] = param_3;
    param_3[-4] = param_1;
  }
  if (in_ZR) {
    param_3 = (undefined4 *)(param_1 + (unaff_r10 >> (param_1 & 0xff)));
  }
  else {
    coprocessor_moveto(0xe,2,0,unaff_r5,in_cr9,in_cr1);
  }
  uVar1 = (uint)param_3 & 0xff;
  if (!in_NG) {
    coprocessor_load(0xd,in_cr1,unaff_r10);
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)(unaff_r4 + param_1 * -0x100000);
  }
  if (!in_ZR) {
    coprocessor_storelong(2,in_cr2,unaff_r4);
  }
  if (in_OV) {
    *unaff_r11 = in_lr;
    unaff_r11[-1] = in_r12;
    unaff_r11[-2] = unaff_r10;
    unaff_r11[-3] = unaff_r8;
    unaff_r11[-4] = unaff_r4;
    unaff_r11[-5] = param_4;
    unaff_r11[-6] = param_2;
    *in_r12 = in_lr;
    in_r12[-1] = in_r12;
    in_r12[-2] = unaff_r9;
    in_r12[-3] = unaff_r4;
    in_r12[-4] = param_4;
    in_r12[-5] = param_2;
  }
  puVar2 = param_3;
  if (!in_NG) {
    puVar2 = (undefined4 *)((int)param_3 + 0xcc3);
    *(char *)param_3 = (char)param_2;
  }
  if (!in_ZR) {
    coprocessor_store(8,in_cr6,param_4 + -0x30);
    coprocessor_storelong(4,in_cr5,param_4 + -0x388);
  }
  if (!in_CY) {
    *unaff_r8 = in_lr;
    unaff_r8[-1] = register0x00000054;
    unaff_r8[-2] = unaff_r11;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = puVar2;
  }
  if (in_OV) {
    *unaff_r9 = in_lr;
    unaff_r9[-1] = in_r12;
    unaff_r9[-2] = unaff_r10;
    unaff_r9[-3] = unaff_r7;
    unaff_r9[-4] = unaff_r6;
    unaff_r9[-5] = (int)unaff_r8 - (param_2 << uVar1);
    unaff_r9[-6] = param_2;
  }
  if (!in_ZR) {
    coprocessor_function(8,5,0,in_cr5,in_cr1,in_cr8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

