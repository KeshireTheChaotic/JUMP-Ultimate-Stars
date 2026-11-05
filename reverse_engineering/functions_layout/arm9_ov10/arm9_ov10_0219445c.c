
void FUN_0219445c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined1 *)(*DAT_021a84fc)(0x98);
  if (puVar1 == (undefined1 *)0x0) {
    *(undefined1 *)(iVar8 + 0x455) = 9;
    return;
  }
  puVar1[9] = 3;
  puVar1[10] = 0;
  uVar2 = FUN_02196204();
  *(char *)(iVar8 + 0x34) = (char)((uint)uVar2 >> 0x18);
  *(char *)(iVar8 + 0x35) = (char)((uint)uVar2 >> 0x10);
  *(char *)(iVar8 + 0x36) = (char)((uint)uVar2 >> 8);
  *(char *)(iVar8 + 0x37) = (char)uVar2;
  FUN_02194890(iVar8 + 0x38,0x1c);
  FUN_02051890(iVar8 + 0x34,puVar1 + 0xb,0x20);
  FUN_02196334(iVar8,*(undefined4 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x18));
  if (*(char *)(iVar8 + 0x30) == '\0') {
    puVar6 = puVar1 + 0x2c;
    puVar1[0x2b] = 0;
  }
  else {
    puVar1[0x2b] = 0x20;
    FUN_02051890(iVar8 + 0x74,puVar1 + 0x2c);
    puVar6 = puVar1 + 0x4c;
  }
  uVar5 = 0;
  *puVar6 = 0;
  puVar6[1] = 4;
  puVar4 = &DAT_021a6f14;
  puVar6 = puVar6 + 2;
  do {
    puVar3 = puVar6;
    *puVar3 = (char)((ushort)*puVar4 >> 8);
    puVar3[1] = (char)*puVar4;
    puVar4 = puVar4 + 1;
    uVar5 = uVar5 + 1;
    puVar6 = puVar3 + 2;
  } while (uVar5 < 2);
  puVar3[2] = 1;
  puVar3[3] = 0;
  puVar3 = puVar3 + (4 - (int)puVar1);
  puVar7 = puVar3 + -5;
  *puVar1 = 0x16;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = (char)((uint)puVar7 >> 8);
  puVar1[4] = (char)puVar7;
  puVar1[5] = 1;
  puVar6 = puVar3 + -9;
  puVar1[6] = (char)((uint)puVar6 >> 0x10);
  puVar1[7] = (char)((uint)puVar6 >> 8);
  puVar1[8] = (char)puVar6;
  FUN_0218eda0(puVar1,puVar3,0,0,param_1);
  FUN_02194c2c(iVar8,puVar1 + 5,puVar7);
  (*DAT_021a8528)(puVar1);
  return;
}

