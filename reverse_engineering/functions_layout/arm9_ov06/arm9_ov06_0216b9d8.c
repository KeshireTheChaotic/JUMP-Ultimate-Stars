
int FUN_0216b9d8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0216b514();
  uVar2 = 0;
  *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
  iVar1 = *(int *)(param_1 + 0x30);
  do {
    uVar2 = uVar2 + 1;
    if ((*(byte *)(iVar1 + 6) & 1) != 0) {
      *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) | 4;
    }
    iVar1 = iVar1 + 8;
  } while (uVar2 < 0x20);
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
  return param_1;
}

