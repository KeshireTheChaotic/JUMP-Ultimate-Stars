
void FUN_02155458(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(undefined2 *)(param_1 + 0x43c) = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x434) + 4);
  uStack_c = param_4;
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  piVar1 = *(int **)(*(int *)(param_1 + 0x438) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  local_10 = 0;
  FUN_02150070(*(undefined4 *)(param_1 + 0x434),&local_10);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x434) + 4),FUN_021554d0);
  return;
}

