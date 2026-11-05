
void FUN_021af768(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  (**(code **)(*(int *)(iVar1 + 0x14) + 0x38))();
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  return;
}

