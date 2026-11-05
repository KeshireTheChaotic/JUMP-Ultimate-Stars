
void FUN_021cbb40(int param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short extraout_r1;
  
  FUN_0200d338(param_3,*(undefined4 *)(param_1 + 0x3c));
  *param_2 = *(short *)(param_1 + 0x38) * extraout_r1;
  sVar1 = FUN_0200d338(param_3,*(undefined4 *)(param_1 + 0x3c));
  param_2[1] = *(short *)(param_1 + 0x3a) * sVar1;
  param_2[2] = *(short *)(param_1 + 0x38);
  param_2[3] = *(short *)(param_1 + 0x3a);
  return;
}

