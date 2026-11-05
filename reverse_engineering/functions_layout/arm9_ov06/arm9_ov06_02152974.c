
void FUN_02152974(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  undefined2 local_58;
  ushort local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  
  iVar13 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_28 = param_4;
  if (*(char *)(*(int *)(iVar13 + 0x94) + 0x5fb) == '\0') {
    iVar8 = FUN_02152d30(*(undefined4 *)(iVar13 + 0x68));
    if (iVar8 != 0) {
      piVar9 = *(int **)(*(int *)(iVar13 + 0x68) + 4);
      (**(code **)(*piVar9 + 0xd8))(piVar9,0);
      FUN_020796c8(*(undefined4 *)(iVar13 + 0x98),1);
      FUN_02079a0c(*(undefined4 *)(iVar13 + 0x98),1);
    }
    *(undefined1 *)(iVar13 + 0x27b) = 0;
    iVar8 = *(int *)(iVar13 + 0x94);
    cVar5 = *(char *)(iVar8 + 0x5f7);
    if (cVar5 == '\0') {
      *(undefined1 *)(iVar13 + 0x27e) = 1;
      FUN_02152fe8(iVar13);
    }
    else {
      bVar1 = *(byte *)(iVar8 + 0x5f9);
      bVar2 = *(byte *)(iVar8 + 0x5f8);
      if (cVar5 == '\x01') {
        FUN_02023894(*(undefined4 *)(*(int *)(iVar13 + 0x50) + 4),0x521000);
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar13 + 0x50) + 4) + 0x68) + 0x6c))();
      local_30 = (uint)bVar1 << 0xc;
      local_34 = (bVar2 + 8) * 0x1000;
      FUN_021519d0(*(undefined4 *)(iVar13 + 0x50),&local_34,&local_30);
      piVar9 = *(int **)(*(int *)(iVar13 + 0x50) + 4);
      (**(code **)(*piVar9 + 0xd8))(piVar9,1);
      FUN_02028330(*(undefined4 *)(*(int *)(iVar13 + 0x50) + 4));
      if ((cVar5 == '\x01') && (*(char *)(iVar13 + 0x27e) != '\0')) {
        *(undefined1 *)(iVar13 + 0x27e) = 0;
        FUN_0207342c(0x78,2);
      }
    }
    iVar8 = iVar13 + 0x9c;
    for (iVar14 = *(int *)(iVar13 + 0x25c); iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*(code **)(iVar8 + 0xc) != (code *)0x0) {
        (**(code **)(iVar8 + 0xc))(iVar13,iVar8);
      }
      iVar8 = iVar8 + 0x1c;
    }
    bVar1 = *(byte *)(*(int *)(iVar13 + 0x94) + 0x5d0);
    puVar16 = (undefined4 *)(iVar13 + 0x9c);
    for (iVar8 = *(int *)(iVar13 + 0x25c); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (((int)(uint)*(byte *)(iVar13 + 0x280) >> 3 & 1U) == 0) {
        bVar6 = false;
      }
      else {
        iVar14 = puVar16[1];
        if ((*(uint *)(iVar14 + 0x3c) & 0x100) == 0) {
          if ((*(char *)(iVar14 + 0x40) == '\0') &&
             (((uint)bVar1 & 1 << (uint)*(byte *)(iVar14 + 0x42)) != 0)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
        }
        else {
          bVar6 = true;
        }
      }
      if (bVar6) {
        local_48 = 0x1000;
        local_4c = 0;
        local_50 = 0;
        local_54 = 0x1000;
        local_58 = FUN_0215262c(&local_54,&local_50,&local_4c,&local_48);
      }
      else {
        local_48 = 0x1000;
        local_3c = 0x1000;
        local_40 = 0x1000;
        local_44 = 0x1000;
        local_58 = FUN_0215262c(&local_44,&local_40,&local_3c,&local_48);
      }
      FUN_0215305c(auStack_38,*puVar16);
      iVar14 = FUN_02153018(auStack_38);
      FUN_02029c68(*(undefined4 *)(iVar14 + 4),&local_58,1,1);
      puVar16 = puVar16 + 7;
    }
    *(char *)(iVar13 + 0x280) = *(char *)(iVar13 + 0x280) + '\x01';
  }
  else {
    iVar8 = FUN_02152d30(*(undefined4 *)(iVar13 + 0x68));
    if (iVar8 == 0) {
      piVar9 = *(int **)(*(int *)(iVar13 + 0x68) + 4);
      (**(code **)(*piVar9 + 0xd8))(piVar9,1);
      FUN_020796c8(*(undefined4 *)(iVar13 + 0x98),0);
      FUN_02079a0c(*(undefined4 *)(iVar13 + 0x98),0);
    }
    *(char *)(iVar13 + 0x27b) = *(char *)(iVar13 + 0x27b) + '\x01';
    iVar8 = (int)*(char *)(iVar13 + 0x27b);
    pbVar17 = (byte *)(iVar13 + 0x272);
    if (iVar8 < 1) {
      iVar8 = -iVar8;
    }
    else {
      if (10 < iVar8) {
        *(undefined1 *)(iVar13 + 0x27b) = 0xf6;
      }
      iVar8 = (int)*(char *)(iVar13 + 0x27b);
    }
    puVar15 = (undefined2 *)(iVar13 + 0x26c);
    for (iVar14 = *(int *)(iVar13 + 0x268); iVar14 != 0; iVar14 = iVar14 + -1) {
      bVar1 = pbVar17[2];
      bVar2 = *pbVar17;
      bVar3 = pbVar17[1];
      pbVar17 = pbVar17 + 3;
      uVar10 = FUN_0200d12c((0x1f - (uint)bVar1) * iVar8,10);
      uVar11 = FUN_0200d12c((0x1f - (uint)bVar2) * iVar8,10);
      sVar7 = FUN_0200d12c((0x1f - (uint)bVar3) * iVar8,10);
      local_56 = (ushort)bVar2 + (short)uVar11 | ((ushort)bVar3 + sVar7) * 0x20 |
                 ((ushort)bVar1 + (short)uVar10) * 0x400;
      uVar4 = *puVar15;
      FUN_0215305c(auStack_2c,*(undefined4 *)(iVar13 + 0x68));
      iVar12 = FUN_02153018(auStack_2c);
      FUN_02029c68(*(undefined4 *)(iVar12 + 4),&local_56,uVar4,1,uVar10,uVar11);
      puVar15 = puVar15 + 1;
    }
  }
  *(char *)(iVar13 + 0x27d) = *(char *)(iVar13 + 0x27d) + '\x01';
  return;
}

