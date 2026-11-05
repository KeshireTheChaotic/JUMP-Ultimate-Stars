
undefined4 * FUN_037fd480(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = OS_DisableInterrupts();
  piVar4 = *(int **)(&DAT_03808434 + param_1 * 4);
  if (piVar4 == (int *)0x0) {
    OS_RestoreInterrupts();
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (param_2 < 0) {
      param_2 = *piVar4;
    }
    iVar6 = param_2 * 0xc + piVar4[4];
    uVar7 = param_3 + 0x3fU & 0xffffffe0;
    for (puVar2 = *(undefined4 **)(iVar6 + 4);
        (puVar2 != (undefined4 *)0x0 && ((int)puVar2[2] < (int)uVar7));
        puVar2 = (undefined4 *)puVar2[1]) {
    }
    if (puVar2 == (undefined4 *)0x0) {
      OS_RestoreInterrupts(uVar1);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar5 = puVar2[2];
      if (iVar5 - uVar7 < 0x40) {
        uVar3 = FUN_037fd64c(*(undefined4 **)(iVar6 + 4),puVar2);
        *(undefined4 *)(iVar6 + 4) = uVar3;
      }
      else {
        puVar2[2] = uVar7;
        piVar4 = (int *)((int)puVar2 + uVar7);
        piVar4[2] = iVar5 - uVar7;
        *(undefined4 *)((int)puVar2 + uVar7) = *puVar2;
        piVar4[1] = puVar2[1];
        if ((undefined4 *)piVar4[1] != (undefined4 *)0x0) {
          *(undefined4 *)piVar4[1] = piVar4;
        }
        if (*piVar4 == 0) {
          *(int **)(iVar6 + 4) = piVar4;
        }
        else {
          *(int **)(*piVar4 + 4) = piVar4;
        }
      }
      uVar3 = FUN_037fd674(*(undefined4 *)(iVar6 + 8),puVar2);
      *(undefined4 *)(iVar6 + 8) = uVar3;
      OS_RestoreInterrupts(uVar1);
      puVar2 = puVar2 + 8;
    }
  }
  return puVar2;
}

