
void FUN_0215f090(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 0x1c0);
  piVar1 = (int *)(param_1 + 8);
  if (iVar2 != 0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*piVar1 != 0) {
        FUN_02074608();
        if (piVar1[3] != 0) {
          FUN_02170498();
        }
        if (piVar1[1] != 0) {
          FUN_0206d444();
        }
      }
      piVar1 = piVar1 + 7;
    }
  }
  FUN_0201b244(param_1);
  return;
}

