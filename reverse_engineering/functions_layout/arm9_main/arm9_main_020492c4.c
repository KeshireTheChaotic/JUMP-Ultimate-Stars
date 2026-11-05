
void FUN_020492c4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  (**(code **)(*(int *)(iVar1 + 0x14) + 0x34))();
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  return;
}

