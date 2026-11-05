
int FUN_02059c5c(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02057f40(1,8);
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0x10,4);
  if (*(int *)(*(int *)(iVar1 + 4) + 0x10) == 1) {
    return 3;
  }
  if (param_3 < 0x10) {
    return 6;
  }
  if (param_2 == 0) {
    return 6;
  }
  DC_StoreRange(param_2,param_3);
  FUN_02058214(0x11,param_1);
  iVar1 = FUN_020580e8(0x11,2,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

