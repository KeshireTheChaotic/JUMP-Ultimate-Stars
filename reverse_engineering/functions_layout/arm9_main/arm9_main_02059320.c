
int FUN_02059320(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_02057f40(1,2);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == (int *)0x0) {
    return 6;
  }
  if (((short)param_2[1] != 0) && (*param_2 == 0)) {
    return 6;
  }
  if ((short)param_2[5] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x2a;
  }
  if ((uint)*(ushort *)(param_2 + 0xd) + iVar1 < 0x201) {
    if ((short)param_2[5] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 6;
    }
    if ((uint)*(ushort *)((int)param_2 + 0x36) + iVar1 < 0x201) {
      FUN_020592d0(param_2);
      FUN_02058214(7,param_1);
      DC_StoreRange(param_2,0x40);
      if ((short)param_2[1] != 0) {
        DC_StoreRange(*param_2);
      }
      iVar1 = FUN_020580e8(7,1,param_2);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      return iVar1;
    }
  }
  return 6;
}

