
undefined4 FUN_0218f260(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0218f41c();
  uVar3 = 0;
  while( true ) {
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined1 *)(param_1 + 8) = 2;
    uVar4 = FUN_02054b44();
    *(uint *)(param_1 + 0x10) = (uint)uVar4 >> 0x10 | (int)((ulonglong)uVar4 >> 0x20) << 0x10;
    FUN_02190030(param_1,2,0x18);
    uVar2 = OS_DisableInterrupts();
    if (DAT_021a8538 != 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      FUN_02053290(0);
    }
    OS_RestoreInterrupts(uVar2);
    if (*(char *)(param_1 + 8) == '\x04') break;
    if ((DAT_021a8538 == 0) || (uVar3 = uVar3 + 1, 2 < uVar3)) {
      return 1;
    }
  }
  return 0;
}

