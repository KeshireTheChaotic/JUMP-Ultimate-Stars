
undefined4 FUN_0218a658(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) < 5) {
    bVar1 = false;
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0xc) < 4) {
        if (60000 < (uint)(param_2 - *(int *)(param_1 + 0x1c))) {
          bVar1 = true;
        }
      }
    }
    else if (*(uint *)(param_1 + 0x20) != 0) {
      if (*(uint *)(param_1 + 0x20) < (uint)(param_2 - *(int *)(param_1 + 0x1c))) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_0218ab00(param_1);
      FUN_0218a4f0(param_1);
      iVar2 = FUN_0218a304(param_1,6,0,0);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

