
void FUN_02194174(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while( true ) {
    FUN_0218f31c(param_1);
    *(undefined1 *)(iVar2 + 0x455) = 0;
    *(undefined4 *)(iVar2 + 0x1d4) = 0;
    *(undefined1 *)(iVar2 + 0x454) = 1;
    FUN_02196a88(iVar2 + 0x2ec);
    FUN_02196500(iVar2 + 0x3a4);
    iVar1 = FUN_021941e8(param_1);
    if (iVar1 == 0) break;
    FUN_0218f1b8(param_1);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 0x1a);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined1 *)(iVar2 + 0x455) = 8;
  return;
}

