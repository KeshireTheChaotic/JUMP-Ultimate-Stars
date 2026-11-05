
void FUN_02161758(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x28) = 1;
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  return;
}

