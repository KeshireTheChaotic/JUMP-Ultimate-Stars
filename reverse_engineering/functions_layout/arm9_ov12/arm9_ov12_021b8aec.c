
void FUN_021b8aec(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined1 auStack_20 [8];
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x50))();
  FUN_021b8b64(&local_18,iVar1 + 0x10);
  (**(code **)(*param_1 + 0xd4))(param_1,param_2);
  param_1[0x27] = param_1[0x25];
  param_1[0x25] = param_2;
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x50))();
  FUN_021b8b64(auStack_20,iVar1 + 0x10);
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x50))();
  local_24 = local_18 - *(int *)(iVar1 + 0x10);
  local_28 = local_14 - *(int *)(iVar1 + 0x14);
  local_18 = local_24;
  local_14 = local_28;
  FUN_021b8a58(param_1,&local_24,&local_28);
  return;
}

