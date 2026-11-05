
void FUN_027e8d1c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((short)param_1[2] != 0) {
    while (iVar2 != -1) {
      iVar1 = FUN_037f8b44(iVar2);
      FUN_037f89b8(param_1,iVar2);
      iVar2 = iVar1;
    }
  }
  return;
}

