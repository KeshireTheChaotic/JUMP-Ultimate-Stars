
void FUN_02165b80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (-1 < param_2) {
    *(ushort *)(iVar2 + 4 + param_2 * 8) =
         *(ushort *)(iVar2 + 4 + param_2 * 8) & 0xf3ff | (ushort)(param_3 << 10);
    return;
  }
  iVar1 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xf3ff | (ushort)(param_3 << 10);
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}

