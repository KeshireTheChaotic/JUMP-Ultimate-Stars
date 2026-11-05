
undefined1 FUN_02194684(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0xc);
  piVar1 = *(int **)(iVar7 + 0x820);
  if (piVar1 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar1;
  }
  uVar2 = FUN_02196204();
  *(char *)(iVar7 + 0x54) = (char)((uint)uVar2 >> 0x18);
  *(char *)(iVar7 + 0x55) = (char)((uint)uVar2 >> 0x10);
  *(char *)(iVar7 + 0x56) = (char)((uint)uVar2 >> 8);
  *(char *)(iVar7 + 0x57) = (char)uVar2;
  FUN_02194890(iVar7 + 0x58,0x1c);
  puVar3 = (undefined1 *)(*DAT_021a84fc)(iVar8 + 0x9d);
  if (puVar3 == (undefined1 *)0x0) {
    *(undefined1 *)(iVar7 + 0x455) = 9;
    return 1;
  }
  puVar3[5] = 2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0x46;
  puVar3[9] = 3;
  puVar3[10] = 0;
  FUN_02051890(iVar7 + 0x54,puVar3 + 0xb,0x20);
  puVar3[0x2b] = 0x20;
  if (*(char *)(iVar7 + 0x30) == '\0') {
    FUN_02194890(puVar3 + 0x2c,0x1c);
    iVar5 = DAT_021a9f0c;
    puVar3[0x48] = (char)((uint)DAT_021a9f0c >> 0x18);
    puVar3[0x49] = (char)((uint)iVar5 >> 0x10);
    puVar3[0x4a] = (char)((uint)iVar5 >> 8);
    puVar3[0x4b] = (char)iVar5;
    FUN_02051890(puVar3 + 0x2c,iVar7 + 0x74,0x20);
    DAT_021a9f0c = DAT_021a9f0c + 1;
    *(undefined1 *)(iVar7 + 0x31) = 0;
  }
  else {
    FUN_02051890(iVar7 + 0x74,puVar3 + 0x2c);
    *(undefined1 *)(iVar7 + 0x31) = 1;
  }
  puVar3[0x4c] = (char)((ushort)*(undefined2 *)(iVar7 + 0x32) >> 8);
  puVar3[0x4d] = (char)*(undefined2 *)(iVar7 + 0x32);
  puVar6 = puVar3 + 0x4f;
  puVar3[0x4e] = 0;
  if (*(char *)(iVar7 + 0x31) == '\0') {
    if (iVar8 != 0) {
      *puVar6 = 0xb;
      iVar5 = iVar8 + 6;
      puVar3[0x50] = (char)((uint)iVar5 >> 0x10);
      puVar3[0x51] = (char)((uint)iVar5 >> 8);
      puVar3[0x52] = (char)iVar5;
      iVar5 = iVar8 + 3;
      puVar3[0x53] = (char)((uint)iVar5 >> 0x10);
      puVar3[0x54] = (char)((uint)iVar5 >> 8);
      puVar3[0x55] = (char)iVar5;
      puVar3[0x56] = (char)((uint)iVar8 >> 0x10);
      puVar3[0x57] = (char)((uint)iVar8 >> 8);
      puVar3[0x58] = (char)iVar8;
      FUN_02051890(piVar1[1],puVar3 + 0x59,iVar8);
      puVar6 = puVar3 + 0x59 + iVar8;
    }
    *puVar6 = 0xe;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar4 = puVar6 + 3;
    puVar6 = puVar6 + 4;
    *puVar4 = 0;
  }
  iVar8 = ((int)puVar6 - (int)puVar3) + -5;
  *puVar3 = 0x16;
  puVar3[1] = 3;
  puVar3[2] = 0;
  puVar3[3] = (char)((uint)iVar8 >> 8);
  puVar3[4] = (char)iVar8;
  FUN_02194c2c(iVar7,puVar3 + 5,iVar8);
  FUN_0218eda0(puVar3,(int)puVar6 - (int)puVar3,0,0,param_1);
  (*DAT_021a8528)(puVar3);
  return *(undefined1 *)(iVar7 + 0x31);
}

