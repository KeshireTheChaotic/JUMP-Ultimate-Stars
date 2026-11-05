
undefined4 FUN_021676dc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    if (param_4 == 0xe) {
      FUN_02167058(param_2,7);
    }
  }
  else if (param_3 == 2) {
    if (*(int *)(param_2 + 0x3c) != param_4) {
      *(int *)(param_2 + 0x3c) = param_4;
      uVar1 = FUN_02070cdc(0);
      FUN_0207265c(uVar1,*(uint *)(param_2 + 0x3c) & 0xff,0);
    }
    FUN_02167058(param_2,7);
  }
  return 1;
}

