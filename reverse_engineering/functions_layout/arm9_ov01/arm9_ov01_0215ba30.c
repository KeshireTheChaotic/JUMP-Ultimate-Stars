
void FUN_0215ba30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar6 = *(int *)(iVar5 + 0xac);
  piVar1 = *(int **)(iVar6 + 4);
  pcVar4 = *(code **)(*piVar1 + 0x198);
  (*pcVar4)(piVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x124),0x198,pcVar4,param_4);
  FUN_0215ab48(iVar5);
  iVar2 = FUN_0215716c(iVar5);
  if (iVar2 == 0) {
    FUN_02076c18(*(undefined4 *)(iVar5 + 0x2cc));
    FUN_0207974c(*(undefined4 *)(iVar5 + 0x2d4));
    FUN_0207907c(*(undefined4 *)(iVar5 + 0x2d4),*(undefined4 *)(iVar5 + 0x2cc));
    return;
  }
  uVar3 = (**(code **)(**(int **)(iVar6 + 4) + 0x194))();
  uVar3 = FUN_021571a8(iVar5,uVar3);
  FUN_020769cc(*(undefined4 *)(iVar5 + 0x2cc),uVar3);
  FUN_0207974c(*(undefined4 *)(iVar5 + 0x2d4));
  FUN_0215f3f0(*(undefined4 *)(iVar5 + 0x2d4),*(undefined4 *)(iVar5 + 0x2cc));
  return;
}

