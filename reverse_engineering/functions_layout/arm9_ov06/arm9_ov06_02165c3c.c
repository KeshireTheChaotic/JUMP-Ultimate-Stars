
void FUN_02165c3c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  FUN_0207342c(0x7a,0x3a,param_3,param_4,param_4);
  if (param_1 != 0) {
    FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),0x300041,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  FUN_02165d10(param_1,1);
  FUN_02165d30(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x5c));
  *(code **)(param_2 + 0x10) = FUN_02165660;
  *(code **)(param_2 + 0x14) = FUN_02165d50;
  *(undefined4 *)(param_2 + 0x1c) = 0x300041;
  FUN_02083b74(param_1,FUN_021657a4,1);
  FUN_0207cec8(*(undefined4 *)(param_1 + 0x10),0x10000000);
  FUN_0207d020(*(undefined4 *)(param_1 + 0x10),0xff);
  FUN_0207d0bc(*(undefined4 *)(param_1 + 0x10),0x10ff,0);
  return;
}

