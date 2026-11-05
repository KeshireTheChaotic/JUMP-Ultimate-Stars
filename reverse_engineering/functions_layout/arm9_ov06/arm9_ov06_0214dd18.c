
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dd18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_NG) {
    *(undefined4 *)(unaff_r8 + 4) = param_1;
    *(undefined4 *)(unaff_r8 + 8) = param_4;
    *(undefined4 *)(unaff_r8 + 0xc) = unaff_r5;
    *(undefined4 *)(unaff_r8 + 0x10) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(undefined4 *)(unaff_r8 + 0x18) = in_lr;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    func_0x01e1e734();
  }
  iVar1 = func_0x0398b8dc();
  if ((bool)in_OV) {
    *(BADSPACEBASE **)iVar1 = register0x00000054;
    *(undefined4 *)(iVar1 + -4) = in_r12;
    *(undefined4 *)(iVar1 + -8) = unaff_r7;
    *(undefined4 *)(iVar1 + -0xc) = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

