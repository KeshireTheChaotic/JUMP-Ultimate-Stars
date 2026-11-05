
void FUN_02190030(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_02190080(*(undefined4 *)(param_1 + 0x1c));
  if ((iVar1 == 0) && (DAT_020aab78 == &DAT_021a8794)) {
    FUN_02191160(*(undefined4 *)(param_1 + 0x1c));
    FUN_02190ccc();
    return;
  }
  FUN_021905b0(0,0,param_1,param_2,param_3);
  return;
}

