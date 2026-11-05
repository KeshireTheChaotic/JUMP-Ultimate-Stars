
void FUN_02159af4(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = FUN_021596d4();
  if (iVar3 < 0) {
    return;
  }
  iVar4 = FUN_021596c0();
  puVar5 = (undefined1 *)(iVar3 * 0xdc + iVar4);
  puVar6 = (undefined1 *)(iVar3 * 0x1c + iVar7 + 0x38);
  for (iVar4 = iVar3; iVar4 < *(int *)(iVar7 + 8); iVar4 = iVar4 + 1) {
    *puVar6 = *puVar5;
    puVar6[2] = 1;
    FUN_02051890(puVar5 + 4,puVar6 + 4,0x14);
    puVar6[0x18] = 0;
    puVar6[0x19] = puVar5[0x1a];
    pcVar1 = puVar5 + 0x19;
    pcVar2 = puVar5 + 0x1a;
    puVar5 = puVar5 + 0xdc;
    puVar6[0x1b] = *pcVar1 - *pcVar2;
    puVar6 = puVar6 + 0x1c;
  }
  *(int *)(iVar7 + 0x10) = iVar3;
  FUN_021596e8();
  return;
}

