
void FUN_021cb0f4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[0xd];
  while (piVar1 != param_1) {
    piVar2 = (int *)piVar1[0xd];
    *(short *)(piVar1 + 1) = (short)piVar1[1] + -1;
    if (((short)piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = piVar2;
  }
  FUN_0201c8a0(param_1);
  return;
}

