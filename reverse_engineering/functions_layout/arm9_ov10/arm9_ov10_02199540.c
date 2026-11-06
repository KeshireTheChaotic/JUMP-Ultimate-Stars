
undefined4 FUN_02199540(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021aa094 != 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (param_1 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if ((param_1 & 0x1f) != 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (param_2 < 0x2300) {
    OS_RestoreInterrupts();
    return 6;
  }
  DAT_021aa094 = param_1;
  *(undefined4 *)(param_1 + 0x2260) = 1;
  *(undefined2 *)(DAT_021aa094 + 0x2280) = 0;
  *(undefined2 *)(DAT_021aa094 + 0x2268) = 0;
  *(undefined1 *)(DAT_021aa094 + 0x226a) = 0;
  *(undefined1 *)(DAT_021aa094 + 0x226b) = 0;
  *(undefined2 *)(DAT_021aa094 + 0x2282) = 0;
  *(undefined2 *)(DAT_021aa094 + 0x22f8) = 0;
  FUN_02198a00();
  FUN_02199cac();
  iVar2 = FUN_02054c7c();
  if (iVar2 == 0) {
    OS_InitTick();
  }
  iVar2 = FUN_020550b0();
  if (iVar2 == 0) {
    FUN_020550c0();
  }
  FUN_020550a0(DAT_021aa094 + 0x22cc);
  OS_RestoreInterrupts(uVar1);
  return 0;
}

