
void FUN_0218dbe8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = DAT_021a6758;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar1 = FUN_02001ed8();
    if ((uint)(iVar1 - *(int *)(param_1 + 0xac)) < 10000) {
      *(undefined4 *)(param_1 + 0xb4) = 1;
      return;
    }
    FUN_0218ce54(param_1,1);
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}

