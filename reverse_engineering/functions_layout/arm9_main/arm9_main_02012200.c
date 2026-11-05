
int FUN_02012200(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[6] + 0x40))();
  }
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x78))();
  }
  return iVar1;
}

