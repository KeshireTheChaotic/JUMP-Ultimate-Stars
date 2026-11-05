
void FUN_0215dfe8(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0214e27c(&local_14,param_1);
  if (local_14 < -0x18000) {
    bVar1 = *(byte *)(iVar2 + 0x1b4);
    FUN_0214e27c(&local_1c,param_1);
    local_18 = local_1c + (short)(ushort)bVar1 * 0x30000;
    FUN_0215dafc(param_1,&local_18);
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  }
  else {
    FUN_0214e27c(&local_20,param_1);
    if (local_20 < 0x128000) {
      (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
    }
  }
  FUN_0214e27c(&local_28,param_1);
  local_24 = local_28 - *(int *)(iVar2 + 0x68);
  FUN_0215dafc(param_1,&local_24);
  return;
}

