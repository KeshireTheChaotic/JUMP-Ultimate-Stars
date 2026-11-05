
bool FUN_0216f398(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  piVar1 = (int *)FUN_0216f0f0();
  iVar2 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    FUN_0216ec18(*(undefined4 *)(param_1 + 0x2c),param_1);
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78);
    if (((uVar3 & 4) == 0) && ((uVar3 & 8) == 0)) {
      iVar4 = FUN_02083788(*piVar1,piVar1[1]);
      iVar2 = iVar4 - piVar1[1] >> 8;
      if (((iVar4 == -1) || (iVar2 < 1)) || (*(char *)(param_1 + 0x4c) < iVar2)) {
        piVar5 = *(int **)(*(int *)(param_1 + 0x48) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,0);
      }
      else {
        piVar5 = *(int **)(*(int *)(param_1 + 0x48) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x48) + 4) + 0x50);
        piVar5[4] = iVar2 << 0xc;
        if (*(byte *)(piVar5 + 9) != (*(byte *)(piVar5 + 9) | 1)) {
          (**(code **)(*piVar5 + 0x18))();
        }
        *(byte *)(piVar5 + 9) = *(byte *)(piVar5 + 9) | 0x31;
      }
    }
    else {
      piVar5 = *(int **)(*(int *)(param_1 + 0x48) + 4);
      (**(code **)(*piVar5 + 0xd8))(piVar5,0);
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    uVar3 = *(uint *)(iVar2 + 0x78);
    if ((((uVar3 & 4) != 0) || ((uVar3 & 8) != 0)) || ((*(uint *)(iVar2 + 0x40) & 0x40000) != 0)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x40);
    }
  }
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78) & 0x400) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x40);
    }
    return false;
  }
  iVar2 = FUN_020836fc(*piVar1,piVar1[1]);
  if (iVar2 != 7) {
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar3 = *(uint *)(*(int *)(iVar2 + 0x10) + 0x78);
    if ((uVar3 & 0x400000) == 0) {
      if (((*(uint *)(*(int *)(iVar2 + 0x10) + 0x38) & 0x18) != 0) && ((uVar3 & 2) != 0)) {
        if (*(int *)(param_1 + 0x44) != 0) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x44);
        }
        *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x20;
        return false;
      }
      if ((*(uint *)(iVar2 + 0x2c) & 8) != 0) {
        return false;
      }
      if ((uVar3 & 1) != 0) {
        return false;
      }
      iVar2 = FUN_0216ea84(iVar2,param_1,param_1 + 0x3c,*(undefined4 *)(param_1 + 0x48));
      if ((iVar2 != 0) &&
         ((((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x1000) != 0 ||
           ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x38) & 1) != 0)) ||
          (iVar2 = FUN_0216ee14(), iVar2 != 0)))) {
        if (*(int *)(param_1 + 0x40) != 0) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x40);
        }
        return false;
      }
      *(short *)(iVar7 + 0x24) =
           (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x3c) >> 8);
      if ((*(uint *)(iVar7 + 0x34) & 2) != 0) {
        *(short *)(iVar7 + 0x26) =
             (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x3e) >> 8);
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        if ((*(uint *)(*(int *)(param_1 + 0x30) + 0x2c) & 9) != 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          return (*(uint *)(*(int *)(param_1 + 8) + 8) & 0x20000) == 0;
        }
        if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x200) != 0) {
          piVar5 = (int *)FUN_0216f0f0(*(undefined4 *)(param_1 + 0x2c));
          piVar6 = (int *)FUN_0216f0f0(*(undefined4 *)(param_1 + 0x30));
          FUN_0216f354(*(undefined4 *)(param_1 + 0x2c),
                       *piVar5 + (*piVar6 - *(int *)(param_1 + 0x34)),
                       piVar5[1] + (piVar6[1] - *(int *)(param_1 + 0x38)));
          FUN_02166a1c(param_1 + 0x34,piVar6);
        }
        if (((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x20000) != 0) &&
           ((*(uint *)(*(int *)(*(int *)(param_1 + 0x30) + 0x10) + 0x40) & 0x10) != 0)) {
          *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
          return false;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x400000) != 0) {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x28) == 0) {
          if ((*(ushort *)(param_1 + 0x26) & 0x400) != 0) {
            return false;
          }
        }
        else {
          *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x400;
        }
      }
      iVar2 = *piVar1;
      if (iVar2 < 0x100) {
        *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
        return false;
      }
      if (0x3ff00 < iVar2) {
        *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
      }
      return 0x3ff00 >= iVar2;
    }
  }
  *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
  return false;
}

