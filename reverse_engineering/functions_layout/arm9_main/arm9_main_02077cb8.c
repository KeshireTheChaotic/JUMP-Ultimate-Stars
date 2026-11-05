
int FUN_02077cb8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (uint)*(byte *)(param_2 + 0x41) * 0x14 + *(int *)(DAT_0214bd80 + 0x48);
  iVar2 = *(char *)(*(int *)(param_2 + 0x34) + 8) + -1;
  iVar4 = iVar3 + iVar2 * 8;
  *(ushort *)(param_2 + 0x16) = (ushort)*(byte *)(iVar4 + 5) << 6;
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_2 + 0x16);
  *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(iVar3 + iVar2 * 8);
  *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(iVar4 + 4);
  *(undefined1 *)(param_2 + 0x2b) = *(undefined1 *)(iVar4 + 1);
  *(undefined2 *)(param_2 + 0x30) = *(undefined2 *)(iVar3 + iVar2 * 2 + 0x10);
  cVar1 = *(char *)(param_1 + 0x5e4);
  *(char *)(param_1 + 0x5e4) = cVar1 + '\x01';
  return (int)cVar1;
}

