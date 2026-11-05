
undefined4 FUN_02062b60(undefined4 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_18;
  
  puVar1 = param_1 + 0x45;
  if ((*puVar1 & 2) == 0) {
    *puVar1 = *puVar1 | 2;
    iVar2 = FUN_0205587c(0xb,1);
    while (iVar2 == 0) {
      FUN_0205529c(100);
      iVar2 = FUN_0205587c(0xb,1);
    }
    FUN_02062b60(param_1,0,1);
  }
  DC_FlushRange(*param_1,0x60);
  DC_WaitWriteBufferEmpty();
  local_18 = param_3;
  do {
    param_1[1] = param_2;
    param_1[0x45] = param_1[0x45] | 0x20;
    do {
      iVar2 = FUN_020557c8(0xb,param_2,1);
    } while (iVar2 < 0);
    if (param_2 == 0) {
      uVar4 = *param_1;
      do {
        iVar2 = FUN_020557c8(0xb,uVar4,1);
      } while (iVar2 < 0);
    }
    uVar4 = OS_DisableInterrupts();
    uVar3 = param_1[0x45];
    while ((uVar3 & 0x20) != 0) {
      FUN_02053290(0);
      uVar3 = param_1[0x45];
    }
    OS_RestoreInterrupts(uVar4);
    DC_InvalidateRange(*param_1,0x60);
  } while ((*(int *)*param_1 == 4) && (local_18 = local_18 + -1, 0 < local_18));
  if (*(int *)*param_1 == 0) {
    return 1;
  }
  return 0;
}

