
void FUN_02165578(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = FUN_021655cc();
  if (iVar1 == 0) {
    return;
  }
  *(code **)(param_2 + 0x10) = FUN_021655e4;
  FUN_0207cec8(*(undefined4 *)(param_1 + 0x10),0x30000000);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68);
  (**(code **)(*piVar2 + 0xec))(piVar2,0xff01);
  return;
}

