
int FUN_0203341c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_0201033c(param_1,0,0);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 4);
  }
  iVar1 = (**(code **)*DAT_020a0ffc)(DAT_020a0ffc,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02033524(iVar1);
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_0201ac08(*(int *)(iVar1 + 0x20),param_1);
  }
  return iVar1;
}

