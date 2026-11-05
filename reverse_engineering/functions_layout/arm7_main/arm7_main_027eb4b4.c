
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027eb4b4(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  
  if (*(short *)(_DAT_0380fff4 + 0x5f8) == 5) {
    puVar10 = (undefined2 *)0x27f7f10;
  }
  else {
    puVar10 = &DAT_027f7f44;
  }
  for (uVar7 = 0; uVar7 < 0x69; uVar7 = uVar7 + 1) {
    iVar6 = FUN_027e9b60(uVar7,0xff);
    if (iVar6 == -1) {
      uVar7 = 1;
      goto LAB_027eb774;
    }
  }
  iVar6 = 0;
  uVar8 = 0;
  for (uVar5 = 0; uVar5 < 0x69; uVar5 = uVar5 + 1) {
    uVar7 = uVar8;
    if (uVar5 == (ushort)puVar10[iVar6]) {
      iVar6 = iVar6 + 1;
    }
    else {
      sVar1 = FUN_027e9ba0(uVar5);
      if ((sVar1 != 0xff) && (uVar7 = uVar8 + 1, 0x20 < uVar8)) goto LAB_027eb774;
    }
    uVar8 = uVar7;
  }
  uVar7 = 0;
  do {
    FUN_027e9b60(uVar7,0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x69);
  iVar6 = 0;
  for (uVar5 = 0; uVar5 < 0x69; uVar5 = uVar5 + 1) {
    uVar7 = uVar8;
    if (uVar5 == (ushort)puVar10[iVar6]) {
      iVar6 = iVar6 + 1;
    }
    else {
      sVar1 = FUN_027e9ba0(uVar5);
      if ((sVar1 != 0) && (uVar7 = uVar8 + 1, 0x20 < uVar8)) goto LAB_027eb774;
    }
    uVar8 = uVar7;
  }
  uVar2 = 0x55;
  uVar7 = 0;
  do {
    FUN_027e9b60(uVar7,uVar2);
    uVar7 = uVar7 + 1;
    uVar2 = ~uVar2;
  } while (uVar7 < 0x69);
  uVar2 = 0x55;
  iVar6 = 0;
  for (uVar5 = 0; uVar5 < 0x69; uVar5 = uVar5 + 1) {
    uVar7 = uVar8;
    if (uVar5 == (ushort)puVar10[iVar6]) {
      iVar6 = iVar6 + 1;
    }
    else {
      uVar4 = FUN_027e9ba0(uVar5);
      if ((uVar4 != uVar2) && (uVar7 = uVar8 + 1, 0x20 < uVar8)) goto LAB_027eb774;
    }
    uVar2 = ~uVar2 & 0xff;
    uVar8 = uVar7;
  }
  sVar1 = 0xff;
  uVar7 = 0;
  do {
    FUN_027e9b60(uVar7,sVar1);
    uVar7 = uVar7 + 1;
    sVar1 = sVar1 + -1;
  } while (uVar7 < 0x69);
  sVar1 = 0xff;
  iVar6 = 0;
  for (uVar5 = 0; uVar7 = uVar8, uVar5 < 0x69; uVar5 = uVar5 + 1) {
    if (uVar5 == (ushort)puVar10[iVar6]) {
      iVar6 = iVar6 + 1;
    }
    else {
      sVar3 = FUN_027e9ba0(uVar5);
      if ((sVar3 != sVar1) && (uVar7 = uVar8 + 1, 0x20 < uVar8)) goto LAB_027eb774;
    }
    sVar1 = sVar1 + -1;
    uVar8 = uVar7;
  }
  iVar6 = 0;
  for (uVar8 = 0; uVar8 < 0x69; uVar8 = uVar8 + 1) {
    uVar5 = uVar7;
    if (uVar8 == (ushort)puVar10[iVar6]) {
      iVar6 = iVar6 + 1;
    }
    else {
      uVar2 = 1;
      for (uVar9 = 0; uVar9 < 9; uVar9 = uVar9 + 1) {
        FUN_027e9b60(uVar8,uVar2);
        uVar4 = FUN_027e9ba0(uVar8);
        uVar7 = uVar5;
        if ((uVar4 != uVar2) && (uVar7 = uVar5 + 1, 0x20 < uVar5)) goto LAB_027eb774;
        uVar2 = (uVar2 & 0x7f) << 1;
        uVar5 = uVar7;
      }
    }
    uVar7 = uVar5;
  }
LAB_027eb774:
  if (uVar7 != 0) {
    *(ushort *)(_DAT_0380fff4 + 0x33e) = *(ushort *)(_DAT_0380fff4 + 0x33e) | 8;
  }
  return;
}

