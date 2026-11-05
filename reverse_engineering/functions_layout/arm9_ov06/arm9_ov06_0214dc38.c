
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dc38(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  undefined4 in_lr;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  
  if (in_ZR) {
    unaff_r4 = param_1 + unaff_r5 * 0x40 + (uint)in_CY;
  }
  if (!in_CY) {
    uVar1 = (int)unaff_r8 * 0x10000;
    in_CY = uVar1 < in_r12;
    in_OV = SBORROW4(in_r12,uVar1) != SBORROW4(in_r12 + (int)unaff_r8 * -0x10000,1);
    param_2 = in_r12 - (uVar1 + 1);
    in_NG = param_2 < 0;
  }
  if (in_CY) {
    unaff_r6 = param_2 * 0x10000 - unaff_r10;
  }
  if (!(bool)in_NG) {
    *unaff_r8 = unaff_r7;
  }
  if ((bool)in_OV) {
    *(undefined4 *)(param_1 + -4) = in_lr;
    *(undefined4 *)(param_1 + -8) = unaff_r11;
    *(undefined4 **)(param_1 + -0xc) = unaff_r8;
    *(int *)(param_1 + -0x10) = unaff_r6;
    *(int *)(param_1 + -0x14) = unaff_r4;
    *(undefined4 *)(param_1 + -0x18) = param_4;
    *(int *)(param_1 + -0x1c) = param_1;
    func_0x031e9354();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

