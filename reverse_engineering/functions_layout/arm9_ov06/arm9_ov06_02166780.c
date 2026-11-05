
void FUN_02166780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar2 = *(int *)(param_1 + 0x30);
  local_10 = param_4;
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x78) & 0x400000) != 0) {
    (**(code **)(iVar2 + 0x18))(param_1,iVar2);
    return;
  }
  iVar1 = FUN_02165774();
  if (iVar1 != 0) {
    FUN_02165eb0(param_1,&local_10);
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
    *(short *)(iVar1 + 0x30) = *(short *)(iVar1 + 0x30) + (short)local_10;
    *(short *)(iVar1 + 0x32) = *(short *)(iVar1 + 0x32) + local_10._2_2_;
  }
  iVar1 = FUN_02165e70(param_1);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(iVar2 + 0x14))(param_1,iVar2);
  return;
}

