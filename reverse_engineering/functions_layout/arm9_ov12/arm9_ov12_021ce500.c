
undefined4 FUN_021ce500(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  DAT_021d5780 = FUN_02054b34();
  DAT_021d50b8 = 1;
  DAT_021d57a0 = 0;
  DAT_021d5784 = 0;
  if (DAT_021d7bf0 == 1) {
    DAT_021d579c = 0;
  }
  else {
    DAT_021d579c = 4;
  }
  DAT_021d57a4 = 0x440;
  DAT_021d578c = (uint)(byte)(&DAT_021d0389)[DAT_021d579c * 2] +
                 (uint)(byte)(&DAT_021d0388)[DAT_021d579c * 2] * 0x44 + 0xc;
  DAT_021d6680 = 0;
  DAT_021d6684 = 0;
  DAT_021d668c = 0;
  DAT_021d6688 = 0;
  DAT_021d6690 = 0;
  DAT_021d6694 = 0;
  FUN_021cf96c();
  uVar2 = 0;
  puVar1 = &DAT_021d57ac;
  puVar3 = &DAT_021d57b8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    FUN_021ce9f4(uVar2);
    FUN_021cede4(puVar3,uVar2,0xffffffff);
    puVar3 = puVar3 + 0x94;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  FUN_021ce710();
  FUN_021cfcfc();
  return 1;
}

