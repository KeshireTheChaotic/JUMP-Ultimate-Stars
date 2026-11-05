
void FUN_021656ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x78) & 0x400000) != 0) {
    (**(code **)(iVar2 + 0x18))(param_1,iVar2,*(code **)(iVar2 + 0x18),param_4,param_4);
    return;
  }
  iVar1 = FUN_02165774();
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 8) != 0) {
      (**(code **)(iVar2 + 0x14))(param_1,iVar2);
      return;
    }
  }
  else {
    iVar1 = FUN_0216578c(param_1);
    if (iVar1 == 0) {
      (**(code **)(iVar2 + 0x14))(param_1,iVar2);
      return;
    }
    if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x150) & 0x600) != 0) {
      (**(code **)(iVar2 + 0x14))(param_1,iVar2);
      return;
    }
    FUN_02165ecc(param_1,iVar2,1);
  }
  (**(code **)(iVar2 + 0x10))(param_1,iVar2);
  return;
}

