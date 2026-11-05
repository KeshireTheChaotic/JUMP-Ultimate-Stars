
int FUN_020594b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_02058494(param_1,param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_02058214(0,param_2);
  puVar2 = (undefined4 *)FUN_02058060();
  iVar1 = FUN_020580e8(0,3,*puVar2,puVar2[1]);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

