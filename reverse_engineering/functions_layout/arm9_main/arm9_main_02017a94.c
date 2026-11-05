
void FUN_02017a94(int param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((int)((uint)*(ushort *)(param_1 + 8) * (uint)*(ushort *)(param_1 + 10)) / 2 < 1) {
    return;
  }
  pbVar1 = *(byte **)(param_1 + 0xc);
  for (; iVar2 < (int)((uint)*(ushort *)(param_1 + 8) * (uint)*(ushort *)(param_1 + 10)) / 2;
      iVar2 = iVar2 + 1) {
    *pbVar1 = param_2 | param_2 << 4;
    pbVar1 = pbVar1 + 1;
  }
  return;
}

