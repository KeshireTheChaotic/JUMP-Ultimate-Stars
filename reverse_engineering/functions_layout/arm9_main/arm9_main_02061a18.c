
undefined4 FUN_02061a18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    iVar1 = 1;
  }
  else if (param_1 == 2) {
    iVar1 = 3;
  }
  else if (param_1 == 3) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    return 0xffff;
  }
  uVar2 = FUN_02061b28();
  return uVar2;
}

