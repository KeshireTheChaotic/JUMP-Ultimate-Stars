
void FUN_020649dc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_18;
  
  while( true ) {
    puVar8 = (undefined4 *)0x0;
    uVar3 = *(uint *)(param_1 + 4);
    uVar4 = uVar3 + *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    uVar5 = OS_DisableInterrupts();
    puVar9 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)0x0;
    local_18 = DAT_020a0c30;
    puVar7 = DAT_020a0c30;
    while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar2;
      uVar6 = puVar2[2];
      if ((((uVar6 == 0) && (uVar3 <= (uint)puVar2[1])) && ((uint)puVar2[1] < uVar4)) ||
         ((uVar3 <= uVar6 && (uVar6 < uVar4)))) {
        if (puVar9 == (undefined4 *)0x0) {
          puVar8 = puVar2;
        }
        else {
          *puVar9 = puVar2;
        }
        if (local_18 == puVar2) {
          DAT_020a0c30 = puVar7;
          local_18 = puVar7;
        }
        *puVar2 = 0;
        puVar9 = puVar2;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar7;
        }
      }
      else {
        puVar1 = puVar2;
      }
    }
    OS_RestoreInterrupts(uVar5);
    if (puVar8 == (undefined4 *)0x0) break;
    do {
      puVar9 = (undefined4 *)*puVar8;
      if ((code *)puVar8[1] != (code *)0x0) {
        (*(code *)puVar8[1])(puVar8[2]);
      }
      puVar8 = puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  return;
}

