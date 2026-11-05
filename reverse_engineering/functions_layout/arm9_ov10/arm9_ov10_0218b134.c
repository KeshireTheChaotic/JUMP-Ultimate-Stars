
undefined4 FUN_0218b134(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0218c278();
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = FUN_02189f98(param_1,iVar1,param_2,param_3,1,0,0,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    return 1;
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    if ((*(int *)(iVar1 + 0x20) == 0) ||
       (iVar2 = FUN_02001ed8(), (uint)(iVar2 - *(int *)(iVar1 + 0x1c)) < *(uint *)(iVar1 + 0x20))) {
      return 1;
    }
    iVar1 = FUN_0218bccc(iVar1,6,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0218bccc(iVar1,2,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

