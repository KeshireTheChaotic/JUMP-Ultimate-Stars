
void FUN_02016b18(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    param_1 = (uint)*(byte *)(param_1 + 0x10);
  }
  if (iVar2 != 0 && param_1 != 0) {
    iVar1 = FUN_0201a9ec(iVar2);
    if (iVar1 == 0) {
      FUN_0201a958(iVar2,1);
      return;
    }
    return;
  }
  return;
}

