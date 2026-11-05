
void FUN_0214cebc(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(byte *)(param_1 + 0x5d) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x5d) = (char)param_2;
  piVar2 = (int *)(param_1 + 0x10);
  iVar3 = 8;
  if (param_2 == 0) {
    do {
      if (*piVar2 != 0) {
        piVar1 = *(int **)(*piVar2 + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      }
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + 1;
    } while (0 < iVar3);
    return;
  }
  do {
    if (*piVar2 != 0) {
      piVar1 = *(int **)(*piVar2 + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (0 < iVar3);
  return;
}

