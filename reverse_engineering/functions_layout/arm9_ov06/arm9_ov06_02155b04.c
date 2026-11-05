
void FUN_02155b04(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 4;
  iVar1 = FUN_021565a4(param_1,1,*(ushort *)(param_2 + 4) & 0xff);
  *(undefined1 *)(iVar1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_2 + 3);
  *(char *)(iVar1 + 4) = (char)*(undefined2 *)(param_2 + 6);
  *(char *)(iVar1 + 5) = (char)*(undefined2 *)(param_2 + 10);
  *(char *)(iVar1 + 6) = (char)*(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(iVar1 + 10) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)(param_2 + 0x10);
  uVar2 = *(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 10) <= *(ushort *)(iVar1 + 0xc)) {
    uVar2 = *(ushort *)(iVar1 + 0xc);
  }
  *(ushort *)(iVar1 + 8) = uVar2;
  uVar2 = *(ushort *)(iVar1 + 0xe);
  if (*(ushort *)(iVar1 + 0xe) <= *(ushort *)(iVar1 + 8)) {
    uVar2 = *(ushort *)(iVar1 + 8);
  }
  *(ushort *)(iVar1 + 8) = uVar2;
  return;
}

