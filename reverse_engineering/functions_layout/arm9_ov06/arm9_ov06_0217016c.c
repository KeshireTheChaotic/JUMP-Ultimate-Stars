
bool FUN_0217016c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  iVar1 = *(int *)(iVar3 + 0xc) - *(int *)(param_1 + 0x34);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (*(short *)(param_1 + 0x3c) * 0x100 <= iVar1) {
    iVar1 = (int)*(short *)(param_1 + 0x30);
    *(short *)(param_1 + 0x30) = -*(short *)(param_1 + 0x30);
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x10) == 0) {
      bVar4 = *(short *)(param_1 + 0x30) < 0;
      if (bVar4) {
        iVar1 = 1;
      }
      if (!bVar4) {
        iVar1 = 0;
      }
      FUN_02083950(*(undefined4 *)(param_1 + 0x2c),iVar1,param_3,param_4,param_4);
    }
  }
  *(short *)(iVar3 + 0x24) =
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x30) >> 8);
  *(short *)(iVar3 + 0x26) =
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x32) >> 8);
  iVar1 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) & 8) != 0) {
    return false;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x78);
  if ((uVar2 & 0x400000) != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
    return false;
  }
  if (((*(uint *)(iVar1 + 0x38) & 8) != 0) && ((uVar2 & 2) != 0)) {
    return false;
  }
  iVar1 = *(int *)(iVar3 + 0xc);
  if (iVar1 < 0x100) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
    return false;
  }
  if (0x3ff00 < iVar1) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
  }
  return 0x3ff00 >= iVar1;
}

