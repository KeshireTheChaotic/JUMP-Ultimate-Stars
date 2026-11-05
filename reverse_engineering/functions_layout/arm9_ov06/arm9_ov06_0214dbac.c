
void FUN_0214dbac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_OV;
  
  if (in_OV) {
    *(BADSPACEBASE **)param_1 = register0x00000054;
    *(undefined4 *)(param_1 + -4) = in_r12;
    *(undefined4 *)(param_1 + -8) = unaff_r7;
    *(undefined4 *)(param_1 + -0xc) = unaff_r6;
    *(int *)(param_1 + -0x10) = unaff_r4;
    *(undefined4 *)(param_1 + -0x14) = param_3;
  }
  software_interrupt(0x6f000);
  if (in_NG) {
    *(undefined4 *)(unaff_r4 + -4) = in_lr;
    *(BADSPACEBASE **)(unaff_r4 + -8) = register0x00000054;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r6;
    *(undefined4 *)(unaff_r4 + -0x14) = unaff_r5;
  }
  func_0x01a8b728();
  FUN_0214dbcc(unaff_r4);
  return;
}

