
void FUN_02150e3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    iVar2 = *(int *)(DAT_02172960 + iVar1 * 4 + 0xdc);
    *(byte *)(iVar2 + 0x11d) = *(byte *)(iVar2 + 0x11d) & 0xfe;
  }
  return;
}

