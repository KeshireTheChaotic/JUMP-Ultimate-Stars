
void FUN_02150e04(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_02172960 + iVar2 * 4 + 0xdc);
    *(byte *)(iVar1 + 0x11d) = *(byte *)(iVar1 + 0x11d) | 1;
  }
  return;
}

