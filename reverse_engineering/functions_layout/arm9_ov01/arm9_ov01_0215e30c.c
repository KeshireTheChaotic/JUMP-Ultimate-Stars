
void FUN_0215e30c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = piVar4[0x18];
  uStack_1c = param_4;
  while (iVar1 = FUN_02073840(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  (**(code **)(**(int **)(*piVar4 + 4) + 0xd8))(*(int **)(*piVar4 + 4),0);
  (**(code **)(**(int **)(piVar4[2] + 4) + 0xd8))(*(int **)(piVar4[2] + 4),0);
  (**(code **)(**(int **)(piVar4[1] + 4) + 0xd8))(*(int **)(piVar4[1] + 4),0);
  FUN_02023894(*(undefined4 *)(piVar4[0x16] + 4),0x883005,0);
  iVar1 = 0;
  do {
    if (piVar4[iVar1 + 5] != 0) {
      piVar2 = *(int **)(piVar4[iVar1 + 5] + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  FUN_0207342c(0x78,1);
  iVar1 = FUN_0203b424(0);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 0;
  iVar1 = FUN_0203b424();
  local_20 = 0;
  piVar4 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_20);
  iVar1 = FUN_0203b3f4();
  FUN_02150768(*(undefined4 *)(iVar1 + 0x88),1,&DAT_0216de4c);
  FUN_02073ef0(0xf,1);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x150) + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  iVar1 = FUN_0203b3f4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(uint *)(iVar1 + 0x8bc) = *(uint *)(iVar1 + 0x8bc) | 2;
  *(undefined1 *)(iVar1 + 0x901) = 1;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x60) + 4);
  (**(code **)(*piVar4 + 0x148))(piVar4,0x10);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0xac) + 4),1);
  while (iVar1 = FUN_02073840(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  func_0x021b65cc();
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 4));
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

