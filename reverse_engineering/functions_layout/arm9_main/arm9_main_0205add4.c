
int FUN_0205add4(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_02057fe8();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (3 < param_2) {
    return 6;
  }
  if (param_2 != 0) {
    if (param_3 == 0) {
      return 6;
    }
    DC_StoreRange(param_3,0x50);
  }
  FUN_02058214(0x14,param_1);
  iVar1 = FUN_020580e8(0x14,2,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

