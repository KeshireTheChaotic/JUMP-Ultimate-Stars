
void FUN_020674f8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_020673ec(1);
  if ((*(byte *)(iVar1 + 8) & param_1) != 0) {
    *(byte *)(iVar1 + 8) = *(byte *)(iVar1 + 8) & ~(byte)param_1;
    (**(code **)(iVar1 + 4))(param_1,param_2,param_3);
  }
  return;
}

