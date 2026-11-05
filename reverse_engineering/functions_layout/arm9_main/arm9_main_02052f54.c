
undefined4 FUN_02052f54(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = OS_DisableInterrupts();
  puVar2 = (undefined *)0x0;
  for (puVar3 = DAT_020aab7c; (puVar3 != (undefined *)0x0 && (puVar3 != param_1));
      puVar3 = *(undefined **)(puVar3 + 0x68)) {
    puVar2 = puVar3;
  }
  if ((puVar3 == (undefined *)0x0) || (puVar3 == &DAT_020aab84)) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  if (*(int *)(puVar3 + 0x70) != param_2) {
    if (puVar2 == (undefined *)0x0) {
      DAT_020aab7c = *(undefined **)(param_1 + 0x68);
    }
    else {
      *(undefined4 *)(puVar2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 0x70) = param_2;
    FUN_020537d4(param_1);
    FUN_020530c4();
  }
  OS_RestoreInterrupts(uVar1);
  return 1;
}

