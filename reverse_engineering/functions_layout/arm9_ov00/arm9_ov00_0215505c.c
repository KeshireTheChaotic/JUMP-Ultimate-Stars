
void FUN_0215505c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b65cc();
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4));
  func_0x021bac78(*(undefined4 *)(iVar3 + 0x70),0xc,iVar3 + 0x85,0,0,0,0,0,0,param_4);
  FUN_0207342c(0x78,9);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0x70)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4),1);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x30) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

