
void FUN_021532f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_10 [4];
  undefined4 uStack_8;
  
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      local_10[iVar1] = (short)iVar1;
      iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
    } while (iVar1 < 4);
    uStack_8 = param_4;
    JQuizMainCommon::JQuizMainCommon_ListRandomMix();
  }
  return;
}

