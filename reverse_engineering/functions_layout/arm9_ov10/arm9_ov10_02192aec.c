
int FUN_02192aec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x68);
  iVar1 = ((uint)*(ushort *)(iVar2 + 0x102) - (uint)*(ushort *)(iVar2 + 0x100)) + -1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + *(int *)(iVar2 + 0xf8);
  }
  return iVar1;
}

