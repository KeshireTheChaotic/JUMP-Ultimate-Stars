
undefined4 FUN_02191c90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_0218f40c(iVar1);
  switch(*(undefined1 *)(iVar1 + 0x73)) {
  case 0:
  case 4:
    FUN_0218f34c(*(int *)(iVar1 + 0x68) + 0x20);
    FUN_0218f378();
    break;
  case 1:
    FUN_0218f378();
    FUN_0218f3e0();
    FUN_0218f308(0x21921bd);
    break;
  case 2:
    FUN_0218f3e0();
  }
  *(undefined2 *)(iVar1 + 0x70) = 1;
  return 0;
}

