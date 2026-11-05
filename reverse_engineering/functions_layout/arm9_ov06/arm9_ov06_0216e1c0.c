
bool FUN_0216e1c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  iVar1 = FUN_0216ed30();
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if (((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x80) != 0) &&
     ((*(ushort *)(param_1 + 0x26) & 0x80) != 0)) {
    return false;
  }
  iVar1 = FUN_0216ea84(*(undefined4 *)(param_1 + 0x2c),param_1,param_1 + 0x38,
                       *(undefined4 *)(param_1 + 0x34),param_4);
  if ((iVar1 != 0) &&
     ((((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x1000) != 0 ||
       ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x38) & 1) != 0)) ||
      (iVar1 = FUN_0216ee14(), iVar1 != 0)))) {
    return false;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x34) + 4);
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78) & 2) == 0) {
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    else {
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    }
  }
  *(short *)(iVar4 + 0x24) =
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x38) >> 8);
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) & 8) != 0) {
    return false;
  }
  uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78);
  if ((uVar3 & 0x400) != 0) {
    return false;
  }
  if ((uVar3 & 0x400000) != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x2c) & 9) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      return (*(uint *)(*(int *)(param_1 + 8) + 8) & 0x20000) == 0;
    }
    if (((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x20000) != 0) &&
       ((*(uint *)(*(int *)(iVar1 + 0x10) + 0x40) & 0x10) != 0)) {
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
      return false;
    }
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 < 0x100) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
    return false;
  }
  if (0x3ff00 < iVar1) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
  }
  return 0x3ff00 >= iVar1;
}

