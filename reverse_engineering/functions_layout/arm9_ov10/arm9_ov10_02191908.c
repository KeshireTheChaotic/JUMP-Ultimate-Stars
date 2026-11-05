
undefined4 FUN_02191908(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0xd) & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = FUN_02053c84(param_1,param_2,uVar2);
  if (iVar1 == 0) {
    FUN_0219195c(param_2);
    return 0xffffffd6;
  }
  return 0;
}

