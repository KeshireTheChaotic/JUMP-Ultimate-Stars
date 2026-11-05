
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215c24c(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *unaff_r4;
  undefined1 unaff_r6;
  uint unaff_r9;
  int in_r12;
  undefined1 *in_lr;
  int in_pc;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  uVar2 = param_2;
  if (in_OV) {
    uVar2 = param_2 - 0x128;
    coprocessor_storelong(7,in_cr4,param_2);
  }
  if (!(bool)in_NG) {
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    in_CY = unaff_r9 <= uVar3;
    in_OV = SBORROW4(uVar3,unaff_r9);
    in_NG = (int)(uVar3 - unaff_r9) < 0;
    in_ZR = uVar3 == unaff_r9;
  }
  uVar3 = uVar2;
  if (in_OV) {
    in_lr = in_lr + -0x16c;
    *in_lr = unaff_r6;
    unaff_r4 = unaff_r4 + -0x165;
    unaff_r6 = *unaff_r4;
    uVar3 = uVar2 - 0x128;
    coprocessor_storelong(7,in_cr4,uVar2);
  }
  if (!(bool)in_NG) {
    uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
    in_CY = unaff_r9 <= uVar2;
    in_OV = SBORROW4(uVar2,unaff_r9);
    in_NG = (int)(uVar2 - unaff_r9) < 0;
    in_ZR = uVar2 == unaff_r9;
  }
  if (in_OV) {
    in_lr[-0x16c] = unaff_r6;
    iVar4 = uVar3 - 0x14c;
    coprocessor_storelong(3,in_cr6,uVar3);
    coprocessor_moveto(9,3,3,*(undefined4 *)(param_4 + -0x1c),in_cr15,in_cr4);
    uVar3 = uVar3 - 0x2f4;
    coprocessor_storelong(7,in_cr6,iVar4);
  }
  else {
    param_3 = ((uint)unaff_r4 >> ((uint)in_lr & 0x1f) | (int)unaff_r4 << 0x20 - ((uint)in_lr & 0x1f)
              ) - param_4;
  }
  if ((bool)in_CY) {
    software_interrupt(0x797861);
  }
  if (in_OV) {
    iVar4 = SignedSaturate(in_r12 * 2);
    SignedDoesSaturate(iVar4,0x20);
    uVar1 = SignedSaturate(in_pc - iVar4,0x20);
    SignedDoesSaturate(uVar1,0x20);
  }
  if ((bool)in_CY) {
    coprocessor_function(5,7,3,in_cr6,in_cr4,in_cr14);
  }
  if ((bool)in_ZR) {
    uVar2 = uVar3 >> 2 | uVar3 << 0x1e;
    in_OV = SBORROW4(uVar2,param_3);
    in_NG = (int)(uVar2 - param_3) < 0;
  }
  if (in_OV) {
    coprocessor_storelong(7,in_cr4,uVar3);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x707261);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

