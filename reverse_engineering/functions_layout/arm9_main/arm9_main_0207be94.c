
void FUN_0207be94(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  do {
    piVar1 = (int *)*piVar2;
    while (piVar1 != (int *)0x0) {
      piVar1 = (int *)*piVar1;
      FUN_0207c070();
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar3 < 3);
  FUN_0207c3a8(param_1);
  (**(code **)(*(int *)param_1[10] + 8))();
  FUN_0201b244(param_1);
  return;
}

