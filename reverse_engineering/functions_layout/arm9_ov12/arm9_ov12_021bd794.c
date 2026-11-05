
void FUN_021bd794(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  (**(code **)(*(int *)piVar1[0x19] + 0x70))();
  (**(code **)(*piVar1 + 0xc4))();
  return;
}

