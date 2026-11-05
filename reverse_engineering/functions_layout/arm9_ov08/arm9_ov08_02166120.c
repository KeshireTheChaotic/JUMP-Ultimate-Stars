
void FUN_02166120(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02166144();
  iVar3 = 0;
  if (0 < param_1) {
    iVar2 = iVar1;
    do {
      *(int *)(iVar2 + 4) = param_2;
      param_2 = param_2 + param_3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  *(char *)(iVar1 + 3) = (char)param_1;
  return;
}

