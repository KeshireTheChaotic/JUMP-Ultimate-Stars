
void FUN_02165c80(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (-1 < param_2) {
    puVar1[param_2 * 2] = puVar1[param_2 * 2] & 0xfffff3ff | param_3 << 10;
    *(ushort *)(puVar1 + param_2 * 2 + 1) =
         (ushort)puVar1[param_2 * 2 + 1] & 0xfff | (ushort)(param_4 << 0xc);
    return;
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      *puVar1 = *puVar1 & 0xfffff3ff | param_3 << 10;
      *(ushort *)(puVar1 + 1) = (ushort)puVar1[1] & 0xfff | (ushort)(param_4 << 0xc);
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}

