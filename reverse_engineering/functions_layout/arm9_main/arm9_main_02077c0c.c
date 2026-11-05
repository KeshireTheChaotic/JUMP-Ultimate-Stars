
int FUN_02077c0c(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  
  puVar1 = (undefined1 *)((uint)*(byte *)(param_2 + 0x41) * 0x3c + *(int *)(DAT_0214bd80 + 0x40));
  iVar3 = *(char *)(*(int *)(param_2 + 0x34) + 8) + -3;
  cVar2 = puVar1[iVar3 * 4 + 0x11];
  if (cVar2 == '\0') {
    cVar2 = '\x04';
  }
  *(char *)(param_2 + 0x49) = cVar2;
  *(ushort *)(param_2 + 0x16) = (ushort)(byte)puVar1[iVar3 * 4 + 0x10] << 6;
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_2 + 0x16);
  *(undefined1 *)(param_2 + 0x10) = puVar1[2];
  *(undefined1 *)(param_2 + 0x11) = puVar1[1];
  *(undefined1 *)(param_2 + 0x13) = *puVar1;
  *(undefined1 *)(param_2 + 0x14) = puVar1[iVar3 * 4 + 0x12];
  *(undefined1 *)(param_2 + 0x15) = puVar1[iVar3 * 4 + 0x13];
  *(undefined2 *)(param_2 + 0x2e) = *(undefined2 *)(puVar1 + 0x30);
  *(undefined2 *)(param_2 + 0x30) = *(undefined2 *)(puVar1 + iVar3 * 2 + 0x32);
  cVar2 = *(char *)(param_1 + 0x5e3);
  *(char *)(param_1 + 0x5e3) = cVar2 + '\x01';
  return (int)cVar2;
}

