
void FUN_0217dda8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_02175628();
  iVar4 = *(int *)(iVar3 + 4);
  iVar2 = **(int **)(*(int *)(*(int *)(iVar2 + 4) + 0x10) + 0x24);
  if (*(char *)(iVar4 + 0x10) == '\0') {
    bVar1 = *(byte *)(iVar2 + 0xc3);
    *(ushort *)(iVar4 + 0xc) = (ushort)*(byte *)(iVar2 + 0xc2);
    *(ushort *)(iVar4 + 0xe) = (ushort)bVar1;
    iVar2 = *(int *)(iVar3 + 4);
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = 4;
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0217d92c,1,iVar2,param_4);
    *(undefined4 *)(iVar3 + 8) = 0;
    return;
  }
  return;
}

