
void FUN_02176fac(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_50 [21];
  undefined1 auStack_3b [21];
  undefined1 auStack_26 [26];
  
  if (*param_2 == 0) {
    if (*(int *)(DAT_021a759c + 4) == 3) {
      if (*(char *)((int)param_2 + 0x8e) != '\0') {
        FUN_0218229c();
        FUN_02177228(0x21773cd,0);
        *(undefined4 *)(DAT_021a759c + 4) = 1;
        return;
      }
      FUN_02069a2c(*(int *)(DAT_021a759c + 0x1c) + 4,*(undefined4 *)(DAT_021a759c + 0xc),auStack_50)
      ;
      FUN_02182148(param_1,0x705,auStack_50);
      iVar1 = FUN_02177480();
      if (iVar1 == 0) {
        *(undefined4 *)(DAT_021a759c + 4) = 4;
        FUN_02182188(param_1,param_2[1],0,0,0x2176fad,0);
        FUN_02177480();
        return;
      }
    }
    else if (*(int *)(DAT_021a759c + 4) == 4) {
      FUN_02069a2c(*(int *)(DAT_021a759c + 0x1c) + 4,*(undefined4 *)(DAT_021a759c + 0xc),auStack_3b)
      ;
      iVar1 = FUN_02004c2c((int)param_2 + 0x8e,auStack_3b);
      if (iVar1 == 0) {
        FUN_02069a2c(DAT_021a759c + 0x3c,*(undefined4 *)(DAT_021a759c + 0xc),auStack_26);
        FUN_020697d8(*(undefined4 *)(DAT_021a759c + 0x1c),DAT_021a759c + 0x3c,param_2[1]);
        FUN_0218229c(param_1);
        (*DAT_021a75a0)(DAT_021a759c + 0x48,DAT_021a759c + 0x148,DAT_021a7598);
        return;
      }
      FUN_02182188(param_1,param_2[1],0,0,0x2176fad,0);
      FUN_02177480();
    }
  }
  return;
}

