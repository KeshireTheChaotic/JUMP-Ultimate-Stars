
undefined4 FUN_0216fdcc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  if ((*(int *)(param_1 + 0x30) != 0) && ((*(uint *)(*(int *)(param_1 + 0x30) + 0x2c) & 9) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(ushort *)(param_1 + 0x26) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
      piVar2 = (int *)FUN_0216faf4();
      iVar5 = *piVar2;
      iVar1 = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0x10);
      *(int *)(iVar6 + 0xc) = iVar5 + iVar1;
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
    }
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x200000) != 0) {
      piVar2 = (int *)FUN_0216faf4(*(undefined4 *)(param_1 + 0x2c));
      piVar3 = (int *)FUN_0216faf4(*(undefined4 *)(param_1 + 0x30));
      FUN_0216fdb8(*(undefined4 *)(param_1 + 0x2c),*piVar2 + (*piVar3 - *(int *)(param_1 + 0x40)),
                   piVar2[1] + (piVar3[1] - *(int *)(param_1 + 0x44)));
      FUN_02166a1c(param_1 + 0x40,piVar3);
    }
  }
  iVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4) + 0x68) +
                      0x68))();
  if ((iVar6 == 0) &&
     (iVar6 = FUN_02155620(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18)), iVar6 != 0)) {
    FUN_0207cfe0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10),0x30000000);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4) + 0x68) + 0x70))
              ();
    FUN_020282f4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    if ((*(uint *)(*(int *)(param_1 + 0x4c) + 0x2c) & 9) == 0) {
      puVar4 = (undefined4 *)FUN_0216faf4();
      FUN_0216fdb8(*(undefined4 *)(param_1 + 0x2c),*puVar4,puVar4[1] + -0x2600);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  return 1;
}

