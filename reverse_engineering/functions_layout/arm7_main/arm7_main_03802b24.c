
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03802b24(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"SOUND":1} io=["04000508"] */
  uVar1 = OS_DisableInterrupts();
  iVar2 = 0;
  for (; (iVar2 < 0x10 && (param_1 != 0)); param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      *(byte *)(iVar2 * 0x10 + 0x4000403) = *(byte *)(iVar2 * 0x10 + 0x4000403) | 0x80;
    }
    iVar2 = iVar2 + 1;
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      _DAT_04000508 = _DAT_04000508 | 0x8000;
    }
  }
  else if ((param_2 & 2) == 0) {
    _DAT_04000508 = _DAT_04000508 | 0x80;
  }
  else {
    _DAT_04000508 = _DAT_04000508 | 0x8080;
  }
  iVar2 = 0;
  for (; (iVar2 < 8 && (param_3 != 0)); param_3 = param_3 >> 1) {
    if ((param_3 & 1) != 0) {
      FUN_038028a4(iVar2);
    }
    iVar2 = iVar2 + 1;
  }
  OS_RestoreInterrupts(uVar1);
  FUN_03802758();
  return;
}

