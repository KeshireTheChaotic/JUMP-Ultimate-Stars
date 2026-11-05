
int FUN_0205abfc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_02057fe8();
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((param_2 != 0) && (param_2 != 1)) {
    return 6;
  }
  FUN_02058214(0x19,param_1);
  iVar1 = FUN_020580e8(0x19,1,param_2);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

