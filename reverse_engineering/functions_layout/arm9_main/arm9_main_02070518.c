
undefined4 FUN_02070518(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined1 auStack_68 [92];
  undefined4 uStack_c;
  
  if ((DAT_020b0b90 & 2) == 0) {
    uStack_c = in_r3;
    FUN_0207120c(2,1);
    FUN_02071360(0x1c2);
    FUN_02071360(0x1c3);
    FUN_02071360(0x1f1);
    FUN_02071360(500);
    FUN_02071360(0x334);
    FUN_02071360(0x337);
    FUN_02071360(0x5f);
    FUN_02071360(0x2e2);
    FUN_02071240(0x17);
    FUN_02071240(0x18);
    FUN_02071240(0x29);
    FUN_02071240(6);
    FUN_02071240(0x24);
    iVar1 = FUN_02071f54();
    if (iVar1 == 0) {
      uVar2 = FUN_02071f20();
      FUN_02070a28(auStack_68,1,0);
      FUN_02071f60(uVar2,auStack_68);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

