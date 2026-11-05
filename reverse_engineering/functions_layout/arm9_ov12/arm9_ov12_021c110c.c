
void FUN_021c110c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = OS_DisableInterrupts();
  puVar2 = (undefined4 *)(param_1 + 0x30);
  while( true ) {
    if ((undefined4 *)(param_1 + 0x70U) <= puVar2) {
      FUN_02055684();
    }
    if (puVar2[3] == 0) break;
    puVar2 = puVar2 + 4;
  }
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2[3] = param_5;
  OS_RestoreInterrupts(uVar1);
  return;
}

