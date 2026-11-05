
undefined4 FUN_02052198(uint param_1,undefined4 *param_2,code *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_1 != *(ushort *)(param_2 + 1)) {
    return 0xfffffffe;
  }
  if (param_4 == 0) {
    uVar1 = OS_DisableInterrupts(param_1);
  }
  else {
    uVar1 = OS_DisableInterrupts_IrqAndFiq();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  *param_2 = 0;
  if (param_4 == 0) {
    OS_RestoreInterrupts(uVar1);
  }
  else {
    OS_RestoreInterrupts_IrqAndFiq(uVar1);
  }
  return 0;
}

