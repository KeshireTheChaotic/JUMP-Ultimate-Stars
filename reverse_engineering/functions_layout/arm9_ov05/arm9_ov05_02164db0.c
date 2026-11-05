
void FUN_02164db0(int param_1)

{
  int iVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(iVar4 + 0x124);
  iVar1 = FUN_0200d338(uVar3,3);
  FUN_0200d338(uVar3,3);
  piVar2 = *(int **)(*(int *)(iVar1 * 0xc + *(int *)(iVar4 + 0x10) + extraout_r1 * 4 + 0x2c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  return;
}

