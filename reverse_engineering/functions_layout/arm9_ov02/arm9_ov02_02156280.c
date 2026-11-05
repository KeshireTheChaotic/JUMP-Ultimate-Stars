
void FUN_02156280(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
  pcVar3 = *(code **)(*piVar1 + 0x148);
  (*pcVar3)(piVar1,0x10,pcVar3,param_4,param_4);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 8) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 4) + 4),1);
  if (*(char *)(param_1 + 0x26) == '\0') {
    if (*(char *)(param_1 + 0x25) == '\0') {
      iVar2 = FUN_0203b3e4();
      FUN_021560e4(*(undefined4 *)(iVar2 + 0x88),0x3d,0xfffffff8);
    }
    else {
      FUN_02073f24(9,1,0x3d);
    }
  }
  else if (*(char *)(param_1 + 0x25) == '\0') {
    iVar2 = FUN_0203b3f4();
    FUN_021560e4(*(undefined4 *)(iVar2 + 0x88),0x3d,0xfffffff8);
  }
  else {
    FUN_02073f24(0x12,1,0x3d);
  }
  if (*(char *)(param_1 + 0x25) != '\0') {
    while (iVar2 = FUN_02073840(), iVar2 == 0) {
      (*DAT_020a0e18)();
    }
  }
  FUN_0207342c(0x78,4);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 8) + 4),1);
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return;
}

