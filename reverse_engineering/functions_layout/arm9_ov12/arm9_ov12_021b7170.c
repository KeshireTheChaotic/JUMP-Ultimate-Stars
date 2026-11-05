
void FUN_021b7170(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x68))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1[0x1a] + 0x70))();
    local_10 = (**(code **)(*(int *)param_1[0x1a] + 0x98))();
    local_10 = local_10 << 0xc;
    (**(code **)(*(int *)param_1[0x1a] + 0xb8))((int *)param_1[0x1a],&local_10);
  }
  (**(code **)(*param_1 + 0x14c))(param_1,4);
  return;
}

