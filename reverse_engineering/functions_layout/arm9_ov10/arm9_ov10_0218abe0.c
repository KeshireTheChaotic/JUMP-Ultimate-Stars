
undefined4 FUN_0218abe0(int param_1)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  local_10 = DAT_021a66a8;
  local_f = DAT_021a66a9;
  local_e = 100;
  FUN_0218bd2c(&local_10,3,*(undefined2 *)(param_1 + 0x66));
  iVar1 = FUN_0218a6b8(param_1,&local_10,5);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 1;
}

