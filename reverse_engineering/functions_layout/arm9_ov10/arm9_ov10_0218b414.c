
undefined4 FUN_0218b414(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 1;
  }
  if (param_3 != 8) {
    return 1;
  }
  iVar1 = FUN_020024cc(param_2,&DAT_021a66ac,4);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = FUN_02001ed8();
  iVar1 = FUN_0218a188(param_1,iVar2 - iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

