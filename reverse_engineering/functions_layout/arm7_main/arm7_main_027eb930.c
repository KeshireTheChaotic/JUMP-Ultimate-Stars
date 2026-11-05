
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027eb930(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808000"] */
  uVar4 = 0;
  for (uVar3 = 0; uVar3 < 3; uVar3 = uVar3 + 1) {
    for (uVar7 = 0; uVar7 < 0x1b; uVar7 = uVar7 + 1) {
      uVar6 = (&DAT_027f7f7c)[uVar7 * 2];
      uVar1 = (&DAT_027f7f08)[uVar3];
      uVar2 = (&DAT_027f7f7e)[uVar7 * 2];
      *(ushort *)(&DAT_04808000 + uVar6) = uVar1 & uVar2;
      uVar5 = uVar4;
      if ((*(ushort *)(&DAT_04808000 + uVar6) != (uVar1 & uVar2)) &&
         (uVar5 = uVar4 + 1, 0x20 < uVar4)) goto LAB_027ebaa0;
      uVar4 = uVar5;
    }
  }
  uVar3 = 0;
  uVar6 = 0x1234;
  do {
    *(ushort *)(&DAT_04808000 + (ushort)(&DAT_027f7f7c)[uVar3 * 2]) =
         uVar6 & (&DAT_027f7f7e)[uVar3 * 2];
    uVar6 = uVar6 + 0x1234;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x1b);
  uVar6 = 0x1234;
  for (uVar3 = 0; uVar3 < 0x1b; uVar3 = uVar3 + 1) {
    uVar5 = uVar4;
    if ((*(ushort *)(&DAT_04808000 + (ushort)(&DAT_027f7f7c)[uVar3 * 2]) !=
         (uVar6 & (&DAT_027f7f7e)[uVar3 * 2])) && (uVar5 = uVar4 + 1, 0x20 < uVar4))
    goto LAB_027ebaa0;
    uVar6 = uVar6 + 0x1234;
    uVar4 = uVar5;
  }
  uVar3 = 0;
  while ((uVar5 = uVar4, uVar3 < 0x1b &&
         ((uVar6 = (&DAT_027f7f7c)[uVar3 * 2], *(short *)(&DAT_04808000 + uVar6) = 0,
          *(short *)(&DAT_04808000 + uVar6) == 0 || (uVar5 = uVar4 + 1, uVar4 < 0x21))))) {
    uVar3 = uVar3 + 1;
    uVar4 = uVar5;
  }
LAB_027ebaa0:
  if (uVar5 != 0) {
    *(ushort *)(_DAT_0380fff4 + 0x33e) = *(ushort *)(_DAT_0380fff4 + 0x33e) | 1;
  }
  return;
}

