
void FUN_020632c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code **ppcVar5;
  undefined4 *puVar6;
  code *local_38 [9];
  
  while( true ) {
    FUN_020517fc(local_38,0,0x24);
    uVar1 = OS_DisableInterrupts();
    iVar2 = *(int *)(param_1 + 0xc0);
    while (iVar2 == 0) {
      FUN_02053290(0);
      iVar2 = *(int *)(param_1 + 0xc0);
    }
    puVar6 = *(undefined4 **)(param_1 + 0xc0);
    iVar2 = 4;
    ppcVar5 = local_38;
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      puVar6 = puVar6 + 2;
      *ppcVar5 = (code *)uVar3;
      ppcVar5[1] = (code *)uVar4;
      ppcVar5 = ppcVar5 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *ppcVar5 = (code *)*puVar6;
    OS_RestoreInterrupts(uVar1);
    if (local_38[0] != (code *)0x0) {
      local_38[2] = (code *)(*local_38[0])(local_38);
    }
    uVar1 = OS_DisableInterrupts();
    DAT_020af70e = 0;
    if (local_38[1] != (code *)0x0) {
      (*local_38[1])(local_38);
    }
    if (DAT_020af6e8 == 0) break;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    OS_RestoreInterrupts(uVar1);
  }
  FUN_020534fc();
  return;
}

