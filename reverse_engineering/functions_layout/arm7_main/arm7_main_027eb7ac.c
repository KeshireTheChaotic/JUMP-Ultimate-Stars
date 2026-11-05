
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027eb7ac(void)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  ushort *puVar7;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04804000"] */
  uVar5 = 0;
  psVar6 = (short *)&DAT_04804000;
  sVar2 = -1;
  do {
    *psVar6 = sVar2;
    uVar5 = uVar5 + 2;
    psVar6 = psVar6 + 1;
    sVar2 = sVar2 + -1;
  } while (uVar5 < 0x2000);
  psVar6 = (short *)&DAT_04804000;
  sVar2 = -1;
  uVar5 = 0;
  for (uVar4 = 0; uVar4 < 0x2000; uVar4 = uVar4 + 2) {
    uVar1 = uVar5;
    if ((*psVar6 != sVar2) && (uVar1 = uVar5 + 1, 0x20 < uVar5)) goto LAB_027eb8f8;
    psVar6 = psVar6 + 1;
    sVar2 = sVar2 + -1;
    uVar5 = uVar1;
  }
  uVar3 = 0x5a5a;
  uVar4 = 0;
  puVar7 = (ushort *)&DAT_04804000;
  do {
    *puVar7 = uVar3;
    uVar4 = uVar4 + 2;
    uVar3 = ~uVar3;
    puVar7 = puVar7 + 1;
  } while (uVar4 < 0x2000);
  puVar7 = (ushort *)&DAT_04804000;
  uVar3 = 0x5a5a;
  for (uVar4 = 0; uVar4 < 0x2000; uVar4 = uVar4 + 2) {
    uVar1 = uVar5;
    if ((*puVar7 != uVar3) && (uVar1 = uVar5 + 1, 0x20 < uVar5)) goto LAB_027eb8f8;
    puVar7 = puVar7 + 1;
    uVar3 = ~uVar3;
    uVar5 = uVar1;
  }
  uVar3 = 0xa5a5;
  uVar4 = 0;
  puVar7 = (ushort *)&DAT_04804000;
  do {
    *puVar7 = uVar3;
    uVar4 = uVar4 + 2;
    uVar3 = ~uVar3;
    puVar7 = puVar7 + 1;
  } while (uVar4 < 0x2000);
  puVar7 = (ushort *)&DAT_04804000;
  uVar3 = 0xa5a5;
  uVar4 = 0;
  while ((uVar1 = uVar5, uVar4 < 0x2000 && ((*puVar7 == uVar3 || (uVar1 = uVar5 + 1, uVar5 < 0x21)))
         )) {
    uVar4 = uVar4 + 2;
    puVar7 = puVar7 + 1;
    uVar3 = ~uVar3;
    uVar5 = uVar1;
  }
LAB_027eb8f8:
  if (uVar1 == 0) {
    return;
  }
  *(ushort *)(_DAT_0380fff4 + 0x33e) = *(ushort *)(_DAT_0380fff4 + 0x33e) | 2;
  return;
}

