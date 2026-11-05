
void FUN_02152100(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_02070ff4();
    iVar1 = func_0x021a2934(iVar1 + iVar2 * 0xc);
    if (iVar1 != 0) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + iVar1 + 0x640) = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x32);
  *(int *)(param_1 + 0x708) = iVar3;
  for (; iVar3 < 0x32; iVar3 = iVar3 + 1) {
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x640) = 0xffffffff;
  }
  return;
}

