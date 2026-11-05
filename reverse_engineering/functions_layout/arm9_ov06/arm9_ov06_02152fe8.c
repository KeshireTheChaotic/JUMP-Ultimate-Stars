
void FUN_02152fe8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4));
  return;
}

