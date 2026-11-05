
int FUN_02059260(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_02057f40(1,2);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_02058060();
  *(undefined2 *)(iVar1 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  FUN_02058214(8,param_1);
  iVar1 = FUN_020580e8(8,1,param_2);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

