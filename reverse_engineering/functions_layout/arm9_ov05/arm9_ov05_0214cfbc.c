
void FUN_0214cfbc(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined2 *)(param_1 + 0x50) = 0xffff;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  piVar2 = (int *)(param_1 + 0x30);
  iVar3 = 8;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 8))();
      *piVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (0 < iVar3);
  piVar2 = (int *)(param_1 + 0x10);
  iVar3 = 8;
  do {
    if (*piVar2 != 0) {
      piVar1 = *(int **)(*piVar2 + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      (**(code **)(*(int *)*piVar2 + 8))();
      *piVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (0 < iVar3);
  return;
}

