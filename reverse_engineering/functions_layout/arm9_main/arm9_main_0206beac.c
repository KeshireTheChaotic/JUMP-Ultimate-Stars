
void FUN_0206beac(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = *(ushort *)(iVar2 + 0x6c);
  *(short *)(iVar2 + 0x6c) = *(short *)(iVar2 + 0x6c) + 1;
  if (*(ushort *)(iVar2 + 0x72) <= uVar1) {
    *(undefined2 *)(iVar2 + 0x6c) = 0;
    FUN_0206bee8(iVar2);
  }
  FUN_0206bf14(iVar2);
  return;
}

