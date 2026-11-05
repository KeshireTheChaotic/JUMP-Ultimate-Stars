
undefined4 FUN_0219936c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
    switch(uVar2) {
    case 0:
      goto switchD_021993ec_caseD_0;
    default:
      FUN_021988cc(0xb);
      OS_RestoreInterrupts(uVar1);
      return 7;
    case 3:
      FUN_021988cc(0xb);
      OS_RestoreInterrupts(uVar1);
      return 7;
    case 4:
      OS_RestoreInterrupts(uVar1);
      return 5;
    }
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
switchD_021993ec_caseD_0:
  iVar3 = FUN_0205889c();
  if (iVar3 == 0) {
    iVar3 = FUN_0205822c();
    if (iVar3 == 0) {
      OS_RestoreInterrupts(uVar1);
      return 5;
    }
    FUN_021988cc(0xb);
    OS_RestoreInterrupts(uVar1);
    return 7;
  }
  iVar3 = FUN_02058c74(0x21987b5);
  if (iVar3 != 0) {
    FUN_021988cc(0xb);
    OS_RestoreInterrupts(uVar1);
    return 7;
  }
  iVar3 = FUN_020595f0(0x2198581);
  if (iVar3 == 2) {
    FUN_021988cc(2);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 1;
    OS_RestoreInterrupts(uVar1);
    return 3;
  }
  if ((iVar3 == 3) || (iVar3 != 8)) {
    FUN_021988cc(0xb);
    OS_RestoreInterrupts(uVar1);
    return 7;
  }
  FUN_021988cc(0xc);
  OS_RestoreInterrupts(uVar1);
  return 1;
}

