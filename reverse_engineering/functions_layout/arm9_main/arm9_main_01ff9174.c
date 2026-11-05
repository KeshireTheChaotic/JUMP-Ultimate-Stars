
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff9174(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":7}
                       io=["027ffc2c","027ffe20","027ffe28","027ffe2c","027ffe30","027ffe38","027ffe3c"]
                        */
  uVar1 = _DAT_027ffc2c;
  if (0x7fff < _DAT_027ffc2c) {
    FUN_01ff9044(_DAT_027ffc2c,0x27ffe00,0x160);
  }
  uVar5 = _DAT_027ffe3c;
  uVar4 = _DAT_027ffe38;
  iVar3 = _DAT_027ffe30;
  iVar7 = _DAT_027ffe2c;
  iVar8 = _DAT_027ffe28;
  iVar2 = _DAT_027ffe20;
  uVar6 = OS_DisableInterrupts();
  FUN_02053f84();
  DC_InvalidateAll();
  OS_RestoreInterrupts(uVar6);
  IC_InvalidateAll();
  DC_WaitWriteBufferEmpty();
  uVar9 = iVar2 + uVar1;
  if (uVar9 < 0x8000) {
    iVar8 = iVar8 + (0x8000 - uVar9);
    iVar7 = iVar7 - (0x8000 - uVar9);
    uVar9 = 0x8000;
  }
  FUN_01ff9044(uVar9,iVar8,iVar7);
  FUN_01ff9044(iVar3 + uVar1,uVar4,uVar5);
  return;
}

