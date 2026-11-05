
undefined * FUN_02190d70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_var;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar1 = OS_DisableInterrupts();
  puVar5 = (undefined *)0x0;
  if ((param_1 == 0x7f000001) || (param_1 == DAT_021a8538)) {
    puVar5 = &DAT_021a8548;
  }
  else {
    iVar2 = FUN_02191130(param_1);
    if ((iVar2 == 0) && (iVar2 = FUN_02191114(param_1), iVar2 == 0)) {
      uVar4 = 0;
      piVar3 = &DAT_021a85ac;
      do {
        if (param_1 == *piVar3) {
          FUN_02054b44();
          (&DAT_021a85b6)[uVar4 * 6] = extraout_var;
          puVar5 = &DAT_021a85b0 + uVar4 * 0xc;
          break;
        }
        piVar3 = piVar3 + 3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
    }
    else {
      puVar5 = (undefined *)0x21a6e9c;
    }
  }
  OS_RestoreInterrupts(uVar1);
  return puVar5;
}

