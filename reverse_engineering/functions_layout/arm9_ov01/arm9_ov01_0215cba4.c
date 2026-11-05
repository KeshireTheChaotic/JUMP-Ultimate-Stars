
void FUN_0215cba4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_70 [92];
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021bacf4(*(undefined4 *)(iVar4 + 0x2d8));
  if (iVar1 != 0) {
    while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x2d8)), iVar1 == 0) {
      (*DAT_020a0e18)();
    }
  }
  (*DAT_020a0e18)();
  iVar1 = FUN_020869b8(*(undefined4 *)(iVar4 + 0x2ec));
  if (iVar1 == 0) {
    FUN_02076bbc(*(undefined4 *)(iVar4 + 0x2cc),auStack_70);
    iVar1 = FUN_0207879c(*(undefined4 *)(iVar4 + 0x2cc));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_02078814(*(undefined4 *)(iVar4 + 0x2cc),auStack_70), iVar1 == 0)) {
      for (uVar5 = 0; uVar3 = FUN_0215716c(iVar4), uVar5 < uVar3; uVar5 = uVar5 + 1) {
        piVar2 = *(int **)(*(int *)(iVar4 + 0xac) + 4);
        (**(code **)(*piVar2 + 0x198))(piVar2,uVar5);
        FUN_02076bbc(*(undefined4 *)(iVar4 + 0x2cc),auStack_70);
        iVar1 = FUN_0207879c(*(undefined4 *)(iVar4 + 0x2cc));
        if ((iVar1 == 0) &&
           (iVar1 = FUN_02078814(*(undefined4 *)(iVar4 + 0x2cc),auStack_70), iVar1 != 0)) break;
      }
    }
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
    FUN_0215c944(iVar4);
  }
  return;
}

