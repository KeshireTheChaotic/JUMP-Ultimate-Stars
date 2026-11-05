
void FUN_02027560(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0201b45c();
  *(byte *)((int)param_1 + 0x29) = *(byte *)((int)param_1 + 0x29) | 0x40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))();
  }
  (**(code **)(*param_1 + 100))();
  (**(code **)(*param_1 + 0x50))(param_1,1);
  (**(code **)(*param_1 + 0x5c))();
  FUN_02028488(param_1[0xd] + 0x10,param_1);
  return;
}

