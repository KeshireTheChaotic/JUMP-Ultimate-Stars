
undefined4 FUN_021bfeb0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar1 = OS_DisableInterrupts();
  if (*(short *)(DAT_021d5258 + 0x526) == 0) {
    uVar3 = 0;
    *(undefined4 *)(DAT_021d5258 + 0x5e4) = 0;
    *(undefined2 *)(DAT_021d5258 + 0x526) = 1;
    iVar2 = FUN_021c12c4();
    if (iVar2 == 0) {
      uVar3 = FUN_021bff14();
    }
    else {
      FUN_021c1160(0x21bff0d);
    }
  }
  OS_RestoreInterrupts(uVar1);
  return uVar3;
}

