
void FUN_02166a30(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  sVar1 = *(short *)(param_2 + 0x20);
  *(short *)(param_2 + 0x20) = sVar1 + -1;
  if (sVar1 == 0) {
    FUN_0207cec8(*(undefined4 *)(param_1 + 0x10),0x10000000,param_3,param_4,param_4);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x100))();
    *(code **)(param_2 + 0x10) = FUN_02166a9c;
    FUN_02165d10(param_1,0);
    FUN_0207342c(0x7a,0x51);
    return;
  }
  return;
}

