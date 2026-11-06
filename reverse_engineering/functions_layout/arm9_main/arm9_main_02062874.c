
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02062874(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_24;
  
  uVar7 = DAT_020aecc4;
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffe60"] */
  uVar8 = DAT_020aecc0;
  local_24 = 0;
  bVar3 = false;
  bVar2 = false;
  bVar6 = false;
  uVar9 = DAT_020aecc0 & 0x1f;
  if ((uVar9 == 0) && (DAT_020aecc8 < 4)) {
    bVar6 = true;
  }
  if (bVar6) {
    uVar4 = OS_GetDTCMAddress();
    bVar1 = true;
    bVar6 = false;
    if ((0x1ff8000 < uVar8 + uVar7) && (uVar8 < 0x2000000)) {
      bVar6 = true;
    }
    if ((!bVar6) && ((uVar8 + uVar7 <= uVar4 || (uVar4 + 0x4000 <= uVar8)))) {
      bVar1 = false;
    }
    if (!bVar1) {
      bVar2 = true;
    }
  }
  if ((bVar2) && (((DAT_020aecbc | uVar7) & 0x1ff) == 0)) {
    bVar3 = true;
  }
  if ((bVar3) && (uVar7 != 0)) {
    local_24 = 1;
  }
  *(uint *)(param_1 + 4) = _DAT_027ffe60 & 0xf8ffffff | 0xa1000000;
  if (local_24 != 0) {
    uVar5 = OS_DisableInterrupts();
    IC_InvalidateRange(uVar8,uVar7);
    if (uVar9 != 0) {
      uVar8 = uVar8 - uVar9;
      DC_StoreRange(uVar8,0x20);
      DC_StoreRange(uVar8 + uVar7,0x20);
      uVar7 = uVar7 + 0x20;
    }
    DC_InvalidateRange(uVar8,uVar7);
    DC_WaitWriteBufferEmpty();
    OS_SetIrqFunction(0x80000,0x2062995);
    OS_ResetRequestIrqMask(0x80000);
    OS_EnableIrqMask(0x80000);
    OS_RestoreInterrupts(uVar5);
    CARDi_SetCardDma();
  }
  return local_24;
}

