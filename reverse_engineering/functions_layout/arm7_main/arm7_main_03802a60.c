
void FUN_03802a60(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = 0;
  for (; (iVar2 < 8 && (param_3 != 0)); param_3 = param_3 >> 1) {
    if ((param_3 & 1) != 0) {
      FUN_03802864(iVar2);
    }
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  for (; (iVar2 < 0x10 && (param_1 != 0)); param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      FUN_037ff104(iVar2,param_4);
    }
    iVar2 = iVar2 + 1;
  }
  if ((param_2 & 1) != 0) {
    DAT_04000508 = 0;
  }
  if ((param_2 & 2) != 0) {
    DAT_04000509 = 0;
  }
  OS_RestoreInterrupts(uVar1);
  FUN_03802758();
  return;
}

