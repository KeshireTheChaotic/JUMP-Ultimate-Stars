
void FUN_02164d34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_r1;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0200d338(uVar4,3,param_3,param_4,param_4);
  iVar1 = FUN_0200d338(uVar4,3);
  uVar2 = FUN_021653ac(*(undefined4 *)(iVar5 + 0x94),*(undefined4 *)(iVar5 + 0x104),iVar1,
                       extraout_r1);
  FUN_02166344(*(undefined4 *)(iVar5 + 0x90),uVar2);
  *(char *)(iVar5 + 0x10c) = (char)uVar4;
  piVar3 = *(int **)(*(int *)(iVar1 * 0xc + iVar5 + extraout_r1 * 4 + 0x2c) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  return;
}

