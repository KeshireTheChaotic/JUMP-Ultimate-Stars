
void FUN_02197b04(ushort *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    puVar1 = param_1;
    do {
      *puVar1 = ~*puVar1;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  FUN_02197b2c(param_1,param_1,1);
  return;
}

