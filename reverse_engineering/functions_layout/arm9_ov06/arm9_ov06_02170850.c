
undefined4 FUN_02170850(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(ushort *)(param_1 + 0x26) & 1) != 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = FUN_02170828();
  }
  iVar1 = 0;
  if ((uVar2 & 8) != 0) {
    iVar1 = -0x100;
  }
  if ((uVar2 & 4) != 0) {
    iVar1 = iVar1 + 0x100;
  }
  FUN_0217083c(*(undefined4 *)(param_1 + 0x2c),
               (iVar1 + ((int)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x30))
                        >> 8)) * 0x10000 >> 0x10,
               (int)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x32) * 0x100) >>
               0x10);
  return 1;
}

