
undefined4 FUN_0219936c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  iVar3 = *(int *)(DAT_021aa094 + 0x2260);
  if (iVar3 == 1) {
    FUN_02198b48(param_1,param_2);
    uVar2 = FUN_02058494(DAT_021aa094,*(uint *)(DAT_021aa094 + 0x226c) & 0xffff);
    if (uVar2 < 7) {
      uVar1 = (*(code *)((int)&switchD_021993ec::switchdataD_021993ee +
                        (int)(short)(&switchD_021993ec::switchdataD_021993ee)[uVar2]))();
      return uVar1;
    }
    FUN_021988cc(0xb);
    OS_RestoreInterrupts(uVar1);
    return 7;
  }
  if (iVar3 == 2) {
    OS_RestoreInterrupts();
    return 2;
  }
  if (iVar3 == 3) {
    OS_RestoreInterrupts();
    return 0;
  }
  OS_RestoreInterrupts();
  return 1;
}

