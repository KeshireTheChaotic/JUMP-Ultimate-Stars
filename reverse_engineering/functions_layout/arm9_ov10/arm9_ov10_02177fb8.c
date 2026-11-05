
void FUN_02177fb8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_220 [4];
  uint local_21c;
  undefined1 auStack_118 [264];
  
  if ((*(int *)(DAT_021a75a4 + 0x34) != 0) && (iVar1 = FUN_02177f3c(*param_2), iVar1 != -1)) {
    FUN_02181e2c(param_1,param_2[2],auStack_220);
    (**(code **)(DAT_021a75a4 + 0x34))
              (iVar1,local_21c & 0xff,auStack_118,*(undefined4 *)(DAT_021a75a4 + 0x38));
  }
  return;
}

