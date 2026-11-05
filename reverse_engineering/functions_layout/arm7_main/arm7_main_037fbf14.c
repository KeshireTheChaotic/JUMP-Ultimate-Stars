
int FUN_037fbf14(undefined4 param_1,int param_2,code *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == 0) {
    uVar1 = OS_DisableInterrupts();
  }
  else {
    uVar1 = OS_DisableInterrupts_IrqAndFiq();
  }
  iVar2 = FUN_037fe8b8(param_1,param_2);
  if (iVar2 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
    *(short *)(param_2 + 4) = (short)param_1;
  }
  if (param_4 == 0) {
    OS_RestoreInterrupts(uVar1);
  }
  else {
    OS_RestoreInterrupts_IrqAndFiq(uVar1);
  }
  return iVar2;
}

