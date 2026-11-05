
void FUN_02159e9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  puVar2 = (undefined4 *)piVar1[4];
  (**(code **)(*piVar1 + 0xd8))(piVar1,0,*(code **)(*piVar1 + 0xd8),param_4,param_4);
  func_0x021b65d8(*(undefined4 *)(param_1 + 4));
  FUN_02158820(*puVar2);
  return;
}

