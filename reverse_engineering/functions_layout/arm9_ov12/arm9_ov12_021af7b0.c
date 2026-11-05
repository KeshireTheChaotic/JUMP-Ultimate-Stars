
void FUN_021af7b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  (**(code **)(*(int *)(iVar1 + 0x14) + 0x30))();
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  return;
}

