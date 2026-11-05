
undefined4 FUN_020619a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == 0) {
    if (param_2 == 1) {
      iVar2 = 6;
    }
    if (param_2 == 0) {
      iVar2 = 7;
    }
  }
  else if (param_1 == 1) {
    if (param_2 == 1) {
      iVar2 = 4;
    }
    if (param_2 == 0) {
      iVar2 = 5;
    }
  }
  else if (param_1 == 2) {
    if (param_2 == 1) {
      iVar2 = 8;
    }
    if (param_2 == 0) {
      iVar2 = 9;
    }
  }
  if (iVar2 == 0) {
    return 0xffff;
  }
  uVar1 = FUN_02061b28(iVar2,param_3,param_4);
  return uVar1;
}

