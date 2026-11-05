
void FUN_0214ef88(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021bad2c(*puVar2);
  if (iVar1 == 0) {
    return;
  }
  FUN_0214fe9c(puVar2[5]);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214efc4);
  return;
}

