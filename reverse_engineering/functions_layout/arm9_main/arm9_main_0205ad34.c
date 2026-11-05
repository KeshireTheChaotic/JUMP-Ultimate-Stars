
int FUN_0205ad34(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

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
    if (param_4 == 0) {
      return 6;
    }
    DC_StoreRange(param_4,0x50);
  }
  FUN_02058214(0x27,param_1);
  iVar1 = FUN_020580e8(0x27,3,param_2,param_4);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

