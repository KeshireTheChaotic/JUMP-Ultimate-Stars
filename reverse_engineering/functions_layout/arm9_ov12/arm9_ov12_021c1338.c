
void FUN_021c1338(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  
  while( true ) {
    uVar1 = OS_DisableInterrupts();
    iVar2 = *(int *)(param_1 + 0xc0);
    while (iVar2 == 0) {
      FUN_02052f54(param_1,0);
      FUN_02053290(0);
      iVar2 = *(int *)(param_1 + 0xc0);
    }
    puVar5 = *(undefined4 **)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc0) = **(undefined4 **)(param_1 + 0xc0);
    FUN_02052f54(param_1,(uint)puVar5[1] >> 1);
    OS_RestoreInterrupts(uVar1);
    if ((code *)puVar5[2] != (code *)0x0) {
      (*(code *)puVar5[2])(puVar5);
    }
    uVar1 = OS_DisableInterrupts();
    pcVar6 = (code *)puVar5[3];
    uVar3 = FUN_02052f4c(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar4 = 0;
    }
    else if (uVar3 < *(uint *)(*(int *)(param_1 + 0xc0) + 4) >> 1) {
      uVar4 = *(uint *)(*(int *)(param_1 + 0xc0) + 4) >> 1;
    }
    else {
      uVar4 = uVar3;
    }
    if (uVar4 != uVar3) {
      FUN_02052f54(param_1);
    }
    *puVar5 = 0;
    puVar5[1] = puVar5[1] & 0xfffffffe;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(puVar5);
    }
    if (puVar5 == (undefined4 *)(param_1 + 0xc4)) break;
    OS_RestoreInterrupts(uVar1);
  }
  FUN_020534fc();
  return;
}

