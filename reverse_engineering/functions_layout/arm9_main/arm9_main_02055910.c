
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02055910(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
                    /* JUS-TAG hw={"IPC_PXI":2,"SYSTEM_SHARED":1}
                       io=["027fff88","04000180","04000184"] */
  uVar2 = OS_DisableInterrupts();
  if (DAT_020aaed8 == 0) {
    DAT_020aaed8 = 1;
    iVar3 = 0;
    _DAT_027fff88 = 0;
    do {
      (&DAT_020aaedc)[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    _DAT_04000184 = 0xc408;
    OS_ResetRequestIrqMask(0x40000);
    OS_SetIrqFunction(0x40000,FUN_020556a4);
    OS_EnableIrqMask(0x40000);
    iVar3 = 0;
    while( true ) {
      uVar1 = _DAT_04000180 & 0xf;
      uVar5 = _DAT_04000180 & 0xf;
      _DAT_04000180 = uVar5 << 8;
      if ((uVar1 == 0) && (4 < iVar3)) break;
      iVar4 = 1000;
      while (uVar5 == 0) {
        if (iVar4 < 1) {
          iVar3 = 0;
          break;
        }
        iVar4 = iVar4 + -1;
      }
      iVar3 = iVar3 + 1;
    }
  }
  OS_RestoreInterrupts(uVar2);
  return;
}

