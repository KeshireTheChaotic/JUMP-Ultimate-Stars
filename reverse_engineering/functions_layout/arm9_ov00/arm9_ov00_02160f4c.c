
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160f4c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int in_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  bool bVar1;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr6;
  
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    bVar1 = true;
    unaff_r4 = unaff_r4 + -0x1d0;
  }
  else {
    param_3 = unaff_r5 >> 0x1e | unaff_r5 << 2;
    in_CY = param_4 <= param_3;
    bVar1 = SBORROW4(param_3,param_4);
    param_3 = param_3 - param_4;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!(bool)in_NG) {
    software_interrupt(0x656361);
  }
  if (bVar1) {
    unaff_r4 = unaff_r4 + -0xe75;
    *unaff_r4 = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_movefromRt(0,1,3,in_cr0,in_cr2);
  }
  if ((bool)in_ZR) {
    unaff_r6 = (param_3 >> 0x12 | param_3 << 0xe) - in_lr;
  }
  if (bVar1) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    unaff_r6 = *(int *)(unaff_r4 + -0x1e8);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x656c74);
  }
  if (bVar1) {
    *(undefined1 *)(unaff_r6 + -0x665) = (char)(undefined1 *)(unaff_r6 + -0x665);
    coprocessor_storelong(3,in_cr6,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

