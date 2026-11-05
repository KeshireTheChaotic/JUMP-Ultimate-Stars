
undefined4 FUN_0216be0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  piVar5 = *(int **)(param_1 + 0x30);
  FUN_0216ce38(param_1 + 0x2c);
  if ((*(ushort *)(param_1 + 0x26) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x4e) < 0xc) &&
       (*(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x20),
       (int)((int)*(short *)(param_1 + 0x58) - (uint)*(ushort *)(param_1 + 0x20)) < 0)) {
      piVar4 = piVar5;
      for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 1) {
        if ((*(byte *)((int)piVar4 + 6) & 1) == 0) {
          if (*(char *)(param_1 + 0x4e) == '\v') {
            FUN_0216c5f0(piVar4,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x18),param_4);
            FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
          }
          else {
            FUN_0216c5f0(piVar4,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x10),param_4);
          }
          iVar3 = *(int *)(*(int *)(*piVar4 + 0x10) + 0x5c);
          *(undefined2 *)(iVar3 + 0x26) = 0;
          *(undefined2 *)(iVar3 + 0x24) = 0;
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 0x1000;
          *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
          *(byte *)((int)piVar4 + 6) = *(byte *)((int)piVar4 + 6) | 2;
          *(undefined2 *)(piVar4 + 1) = 0;
          break;
        }
        piVar4 = piVar4 + 2;
      }
    }
    uVar2 = 0;
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      iVar3 = **(int **)(param_1 + 0x14);
      uVar2 = *(uint *)(iVar3 + *(int *)(iVar3 + 0x70) * 4 + 0x18);
    }
    if ((uVar2 & 1) != 0) {
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0x40;
    }
    if ((uVar2 & 2) != 0) {
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x40;
    }
    if ((uVar2 & 8) != 0) {
      *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -0x40;
    }
    if ((uVar2 & 4) != 0) {
      *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 0x40;
    }
    iVar3 = *(int *)(*piVar5 + 0x10);
    uVar2 = *(uint *)(iVar3 + 0x40);
    bVar6 = (uVar2 & 1) != 0;
    if (bVar6) {
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    if (bVar6 && uVar2 != 0) {
      uVar2 = *(uint *)(iVar3 + 0x158);
      iVar3 = FUN_0216ed30();
      if ((iVar3 != 0) &&
         ((uVar2 & 0xf) == (*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x34) & 0xf))) {
        *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 0x20;
      }
    }
    FUN_0216c028(param_1,param_1 + 0x2c);
    uVar1 = 1;
  }
  else if (((*(byte *)(param_1 + 0x4c) & 0x20) == 0) && (*(short *)(param_1 + 0x18) != 0)) {
    FUN_0216c028(param_1,param_1 + 0x2c);
    uVar1 = 1;
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + -1;
  }
  else {
    uVar1 = FUN_0216cd9c(param_1,param_1 + 0x2c);
  }
  return uVar1;
}

