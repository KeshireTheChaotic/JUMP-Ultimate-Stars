
int FUN_020595f0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_02057f40(1,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_02058214(3,param_1);
  puVar2 = (undefined4 *)FUN_02058060();
  iVar1 = FUN_020580e8(3,3,*puVar2,puVar2[1]);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

