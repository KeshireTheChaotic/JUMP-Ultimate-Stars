
void FUN_021c662c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  }
  *(int **)(param_1 + 0x54) = param_2;
  (**(code **)(*param_2 + 8))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  FUN_020196c4(param_1 + 0x14,uVar1,0);
  uVar1 = (**(code **)(*param_2 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x30))();
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  return;
}

