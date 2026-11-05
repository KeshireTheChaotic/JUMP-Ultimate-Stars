
void FUN_02194288(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  
  puVar12 = *(undefined1 **)(param_1 + 0xc);
  *puVar12 = 3;
  puVar12[1] = 0;
  FUN_02194890(puVar12 + 2,0x2e);
  uVar13 = *(uint *)(puVar12 + 0x594);
  iVar1 = FUN_0200d12c(uVar13 << 1,2);
  puVar2 = (undefined1 *)(*DAT_021a84fc)(uVar13);
  if (puVar2 == (undefined1 *)0x0) {
    puVar12[0x455] = 9;
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 2;
  FUN_02194890(puVar2 + 2,uVar13 - 0x33);
  puVar2[uVar13 - 0x31] = 0;
  FUN_02051890(puVar12,puVar2 + (uVar13 - 0x30),0x30);
  iVar3 = (*DAT_021a84fc)(iVar1 << 3);
  if (iVar3 == 0) {
    (*DAT_021a8528)(puVar2);
    puVar12[0x455] = 9;
    return;
  }
  iVar8 = iVar1 * 2;
  iVar4 = iVar3 + iVar8;
  iVar5 = iVar4 + iVar8;
  FUN_02197214(iVar4,puVar2,uVar13,iVar1);
  FUN_02197214(iVar5,puVar12 + 0x598,*(undefined4 *)(puVar12 + 0x5a0),iVar1);
  FUN_02197214(iVar5 + iVar8,puVar12 + 0x494,uVar13,iVar1);
  uVar6 = FUN_021961b8();
  FUN_02197544(iVar3,iVar4,iVar5,iVar1,iVar5 + iVar8);
  FUN_0219619c(uVar6);
  puVar7 = (undefined1 *)(*DAT_021a84fc)(uVar13 + 0x49);
  if (puVar7 == (undefined1 *)0x0) {
    (*DAT_021a8528)(puVar2);
    (*DAT_021a8528)(iVar3);
    puVar12[0x455] = 9;
    return;
  }
  *puVar7 = 0x16;
  puVar7[1] = 3;
  puVar7[2] = 0;
  puVar7[3] = (char)(uVar13 + 4 >> 8);
  puVar7[4] = (char)(uVar13 + 4);
  puVar7[5] = 0x10;
  puVar7[6] = (char)(uVar13 >> 0x10);
  puVar7[7] = (char)(uVar13 >> 8);
  puVar11 = puVar7 + 9;
  puVar7[8] = (char)uVar13;
  if ((uVar13 & 1) != 0) {
    iVar1 = FUN_0200d12c(uVar13,2);
    *puVar11 = (char)*(undefined2 *)(iVar3 + iVar1 * 2);
    puVar11 = puVar7 + 10;
  }
  iVar1 = FUN_0200d12c(uVar13,2);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    puVar10 = (undefined2 *)(iVar3 + iVar1 * 2);
    do {
      *puVar11 = (char)((ushort)*puVar10 >> 8);
      puVar9 = puVar11 + 1;
      puVar11 = puVar11 + 2;
      *puVar9 = (char)*puVar10;
      puVar10 = puVar10 + -1;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  FUN_0218eda0(puVar7,uVar13 + 9,0,0,param_1);
  FUN_02194c2c(puVar12,puVar7 + 5,uVar13 + 4);
  (*DAT_021a8528)(puVar7);
  (*DAT_021a8528)(iVar3);
  (*DAT_021a8528)(puVar2);
  return;
}

