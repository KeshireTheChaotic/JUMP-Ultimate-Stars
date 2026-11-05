
void FUN_0214ef7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214f1bc(*(undefined4 *)(iVar3 + 0x2c),0);
  bVar4 = iVar1 != 0;
  if ((!bVar4) &&
     ((*(char *)(iVar3 + 0xaa) != '\0' ||
      (iVar1 = FUN_0214f1f0(*(undefined4 *)(iVar3 + 0x10)), iVar1 != 0)))) {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),2,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x30) + 4) + 0x68) + 0x6c))();
    FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4),4,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x2c) + 4) + 0x68) + 0x6c))();
    bVar4 = true;
  }
  if (bVar4) {
    if (*(int *)(iVar3 + 0x8c) == 0) {
      FUN_0214fd84(iVar3);
      FUN_0208c538();
      iVar1 = func_0x02199e58();
      if (iVar1 == 0) {
        func_0x021bac28(*(undefined4 *)(iVar3 + 0x84),0x25,0,0,0,0,0,0);
        while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0x84)), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
      }
      FUN_02070fd4();
      iVar1 = func_0x0219ba50();
      if (iVar1 != 0) {
        FUN_021516f0(*(undefined4 *)(iVar3 + 0x84),0x44);
      }
      iVar1 = FUN_02071f08();
      uVar2 = FUN_02070fd4();
      func_0x0219bacc(uVar2,iVar1 + 0x40);
      FUN_0214fda4(iVar3);
    }
    if (*(int *)(iVar3 + 0x9c) == 1) {
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x94) * 4 + 0x3c) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4),1);
    }
    else {
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x98) * 4 + 0x3c) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x9c) * 4 + 0x28) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x9c) * 4 + 0x40) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x98) * 4 + 0x3c) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x9c) * 4 + 0x28) + 4),1);
    }
    *(undefined1 *)(iVar3 + 0xaa) = 0;
    *(undefined1 *)(iVar3 + 0xad) = 0;
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}

