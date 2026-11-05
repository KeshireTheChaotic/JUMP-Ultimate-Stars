
void FUN_021534ec(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0217296d == '\0') &&
     (iVar2 = DAT_02172970 + 1, bVar1 = 0x70 < DAT_02172970, DAT_02172970 = iVar2, bVar1)) {
    DAT_0217296d = '\x01';
  }
  if (*(int *)(DAT_02172960 + 0x164) == 1) {
    DAT_0217296d = 1;
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}

