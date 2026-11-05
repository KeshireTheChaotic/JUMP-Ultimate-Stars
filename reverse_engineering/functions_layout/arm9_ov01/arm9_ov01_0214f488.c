
void FUN_0214f488(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b424(1);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 0;
  if (param_1[0x11] != 0) {
    FUN_0207525c();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  iVar1 = 0;
  do {
    (**(code **)(*(int *)param_1[iVar1 + 1] + 8))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0xc))();
  }
  FUN_0201b244(param_1);
  return;
}

