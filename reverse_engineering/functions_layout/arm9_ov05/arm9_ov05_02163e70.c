
void FUN_02163e70(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_02023940(*(undefined4 *)(param_1 + 4));
  FUN_02151fcc(&local_10,param_1,&DAT_021713c4);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_10,0,local_c);
  FUN_02023c70(*(undefined4 *)(param_1 + 4),2);
  FUN_020239a0(*(undefined4 *)(param_1 + 4));
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_10,0,local_c);
  FUN_02023c70(*(undefined4 *)(param_1 + 4),1);
  func_0x021b400c(*(undefined4 *)(param_1 + 4),2);
  func_0x021b3f78(*(undefined4 *)(param_1 + 4),1);
  func_0x021b3fb0(*(undefined4 *)(param_1 + 4),1);
  return;
}

