
void FUN_0214fadc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_020517fc(param_1,0,param_2);
  iVar1 = FUN_020310f4();
  *param_1 = iVar1;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar1 + 4));
  iVar1 = FUN_02028920(0);
  param_1[4] = iVar1;
  func_0x021b65bc();
  JQuizCommonWork::JQuizCommonWork_Create(*param_1);
  return;
}

