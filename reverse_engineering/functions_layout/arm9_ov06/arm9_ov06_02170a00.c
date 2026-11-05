
bool FUN_02170a00(int param_1)

{
  bool bVar1;
  int iVar2;
  int extraout_r1;
  int *piVar3;
  uint uVar4;
  
  bVar1 = true;
  *(char *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) + '\x01';
  if ((*(int *)(param_1 + 0x2c) != 0) && ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) & 9) != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return false;
  }
  uVar4 = 0;
  piVar3 = *(int **)(param_1 + 0x30);
  do {
    if (((*(byte *)((int)piVar3 + 6) & 1) != 0) &&
       ((bVar1 = false, (*(uint *)(*piVar3 + 0x2c) & 8) != 0 ||
        (iVar2 = piVar3[1], *(short *)(piVar3 + 1) = (short)iVar2 + 1, 0x18 < (short)iVar2)))) {
      *(byte *)((int)piVar3 + 6) = *(byte *)((int)piVar3 + 6) & 0xfe;
      FUN_02083648(*piVar3);
      *piVar3 = 0;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 2;
  } while (uVar4 < 0x20);
  if (*(short *)(param_1 + 0x18) == 0) {
    return !bVar1;
  }
  FUN_0200d12c(*(undefined1 *)(param_1 + 0x50),3);
  if (extraout_r1 == 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    for (uVar4 = 0; uVar4 < 0x20; uVar4 = uVar4 + 1) {
      if ((*(byte *)(iVar2 + 6) & 1) == 0) {
        FUN_02170b84(iVar2,param_1 + 0x2c,param_1);
        *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) ^ 1;
        break;
      }
      iVar2 = iVar2 + 8;
    }
  }
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + -1;
  return true;
}

