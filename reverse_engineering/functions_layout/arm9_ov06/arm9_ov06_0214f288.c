
void FUN_0214f288(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  FUN_0214f208(param_1[0x13]);
  FUN_0214f208(param_1[0x14],param_2);
  for (iVar1 = 0; iVar1 < (int)(uint)(byte)(&DAT_02170dcc)[*(char *)((int)param_1 + 0x99) * 0x20];
      iVar1 = iVar1 + 1) {
    FUN_0214f208(param_1[iVar1 + 7],param_2);
    FUN_0214f208(param_1[iVar1 + 0xd],param_2);
  }
  FUN_0214f208(param_1[0x15],param_2);
  FUN_0214f208(param_1[0x16],param_2);
  FUN_0214f208(param_1[0x17],param_2);
  FUN_0214f208(param_1[6],param_2);
  FUN_0214f208(param_1[4],param_2);
  FUN_0214f208(param_1[5],param_2);
  if (param_2 == 0) {
    FUN_0214f0dc((int *)*param_1,0);
    return;
  }
  FUN_02028330(*(undefined4 *)(*(int *)*param_1 + 4));
  return;
}

