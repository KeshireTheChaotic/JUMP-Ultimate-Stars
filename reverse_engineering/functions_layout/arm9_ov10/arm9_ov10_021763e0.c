
uint FUN_021763e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      uVar2 = uVar2 | 1 << *(sbyte *)(param_1 + iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return uVar2;
}

