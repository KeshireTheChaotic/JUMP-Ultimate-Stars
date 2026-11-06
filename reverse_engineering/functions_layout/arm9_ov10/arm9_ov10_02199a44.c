
undefined4 FUN_02199a44(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02198c00();
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0xffffffff;
  }
  FUN_02053ed0(&DAT_021aa0a4);
  iVar2 = FUN_02198c00();
  if (iVar2 == 0) {
    FUN_02053e60(&DAT_021aa0a4);
    OS_RestoreInterrupts(uVar1);
    return 0xffffffff;
  }
  if ((*(int *)(iVar2 + 0x2260) != 9) || (*(char *)(iVar2 + 0x226b) == '\x01')) {
    FUN_02053e60(&DAT_021aa0a4);
    OS_RestoreInterrupts(uVar1);
    return 0xfffffffc;
  }
  FUN_02051890(param_2,iVar2 + 0xf00,param_3);
  uVar3 = FUN_02059b80(0x2199a15,param_1,iVar2 + 0xf00,param_3 & 0xffff);
  if (uVar3 < 9) {
    uVar1 = (*(code *)((int)&switchD_02199aea::switchdataD_02199aec +
                      (int)(short)(&switchD_02199aea::switchdataD_02199aec)[uVar3]))();
    return uVar1;
  }
  FUN_02053e60(&DAT_021aa0a4);
  OS_RestoreInterrupts(uVar1);
  return 0xfffffffb;
}

