
int FUN_02020784(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == DAT_020a0d50) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_0201cf24(param_1 + 0x6c);
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

