
undefined4 FUN_0216df50(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_020836b4(*(undefined4 *)(param_3 + 4),*(int *)(param_3 + 8) + -0x100);
  if (iVar2 == 0) {
    uVar3 = FUN_0216e780(param_2,param_3 + 4);
    *(undefined4 *)(param_3 + 4) = uVar3;
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x400) != 0) {
      FUN_0216e6d4(param_2,param_3 + 4,param_3 + 4);
    }
  }
  iVar2 = FUN_02083788(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x8000) == 0) {
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x5c) + 0x10)
    ;
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x400) != 0) {
      FUN_0216e6d4(param_2,param_3 + 4,param_3 + 4);
    }
  }
  else {
    if (iVar2 == -1) {
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
      return 0;
    }
    *(int *)(param_3 + 8) = iVar2 + -1;
    iVar2 = FUN_020836fc(*(undefined4 *)(param_3 + 4));
    if (iVar2 == 7) {
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
      return 0;
    }
  }
  iVar2 = FUN_020836b4(*(undefined4 *)(param_3 + 4),*(int *)(param_3 + 8) + -0x100);
  if (iVar2 == 0) {
    uVar3 = FUN_0216e780(param_2,param_3 + 4);
    *(undefined4 *)(param_3 + 4) = uVar3;
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x400) != 0) {
      FUN_0216e6d4(param_2,param_3 + 4,param_3 + 4);
    }
  }
  iVar2 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff,0);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
  }
  else {
    FUN_0216e820(iVar2,param_2,*(undefined4 *)(param_1 + 0x28));
    if ((*(uint *)(param_2 + 0x2c) & 1) == 0) {
      *(int *)(param_1 + 0x30) = param_2;
    }
    if (*(char *)(param_3 + 0x1c) == '\0') {
      uVar1 = 0x100;
    }
    else {
      uVar1 = 0xff00;
    }
    *(undefined2 *)(param_1 + 0x38) = uVar1;
    if (0x7f < *(byte *)(param_3 + 0x24) + 0x40) {
      *(short *)(param_1 + 0x38) = -*(short *)(param_1 + 0x38);
    }
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    if ((*(uint *)(param_3 + 0x20) & 2) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0216ece4(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x18),
                           *(undefined1 *)(param_3 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,0);
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar2 + 0x78) = *(uint *)(iVar2 + 0x78) & 0xfffcffff;
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar2 + 0x78) = *(uint *)(iVar2 + 0x78) & 0xffefffff;
  }
  return 0;
}

