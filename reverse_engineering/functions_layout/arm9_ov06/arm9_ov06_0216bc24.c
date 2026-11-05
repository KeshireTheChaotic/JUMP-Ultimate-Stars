
undefined4 FUN_0216bc24(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  FUN_0216ce38(param_1 + 0x2c);
  if (((*(byte *)(param_1 + 0x4c) & 0x10) == 0) &&
     (iVar2 = FUN_0216ed30(**(undefined4 **)(param_1 + 100)), iVar2 != 0)) {
    FUN_0216ec18(**(undefined4 **)(param_1 + 100),param_1,1);
    uVar5 = 0;
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 0x18;
    piVar4 = *(int **)(param_1 + 0x30);
    do {
      uVar5 = uVar5 + 1;
      if ((*(byte *)((int)piVar4 + 6) & 1) != 0) {
        *(undefined2 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x5c) + 0x24) = 0;
      }
      piVar4 = piVar4 + 2;
    } while (uVar5 < 0x20);
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(ushort *)(param_1 + 0x26) & 1) != 0) {
    uVar3 = FUN_0216cd9c(param_1,param_1 + 0x2c);
    return uVar3;
  }
  if ((*(byte *)(param_1 + 0x4c) & 8) != 0) {
    return 1;
  }
  iVar2 = *(int *)(**(int **)(param_1 + 100) + 0x10);
  if ((((*(short *)(*(int *)(iVar2 + 0x5c) + 0x24) == 0) ||
       (uVar5 = *(uint *)(iVar2 + 0x78), (uVar5 & 4) != 0)) || ((uVar5 & 8) != 0)) ||
     (sVar1 = *(short *)(param_1 + 0x18), *(short *)(param_1 + 0x18) = sVar1 + -1, sVar1 < 0)) {
    uVar5 = 0;
    piVar4 = *(int **)(param_1 + 0x30);
    do {
      uVar5 = uVar5 + 1;
      if ((*(byte *)((int)piVar4 + 6) & 1) != 0) {
        *(undefined2 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x5c) + 0x24) = 0;
      }
      piVar4 = piVar4 + 2;
    } while (uVar5 < 0x20);
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 8;
    return 1;
  }
  *(short *)(param_1 + 0x58) =
       *(short *)(param_1 + 0x58) -
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x48) * 0x100 >> 0x10);
  if (*(short *)(param_1 + 0x58) < 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    for (uVar5 = 0; uVar5 < 0x20; uVar5 = uVar5 + 1) {
      if ((*(byte *)(iVar2 + 6) & 1) == 0) {
        FUN_0216c5f0(iVar2,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                     *(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
        *(byte *)(iVar2 + 6) = *(byte *)(iVar2 + 6) | 2;
        *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
        break;
      }
      iVar2 = iVar2 + 8;
    }
  }
  FUN_0216cd10(param_1,param_1 + 0x2c);
  return 1;
}

