
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037feb24(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
                    /* JUS-TAG hw={"IPC_PXI":2,"SYSTEM_SHARED":1}
                       io=["027fff8c","04000180","04000184"] */
  uVar1 = OS_DisableInterrupts();
  if (DAT_03808494 == 0) {
    DAT_03808494 = 1;
    iVar2 = 0;
    _DAT_027fff8c = 0;
    do {
      (&DAT_03808498)[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
    _DAT_04000184 = 0xc408;
    OS_ResetRequestIrqMask(0x40000);
    OS_SetIrqFunction(0x40000,FUN_037fe8cc);
    OS_EnableIrqMask(0x40000);
    for (uVar3 = 8; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
      _DAT_04000180 = (ushort)(uVar3 << 8);
      FUN_037fe408(1000);
      if ((_DAT_04000180 & 0xf) != uVar3) {
        uVar3 = 8;
      }
    }
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

