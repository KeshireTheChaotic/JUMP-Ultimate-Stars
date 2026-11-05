
void FUN_0215f09c(void)

{
  int iVar1;
  int iVar2;
  int local_c [3];
  
  DAT_0216e7ac = DAT_0216e7ac + 1;
  if (299 < DAT_0216e7ac) {
    FUN_02162338();
    iVar1 = FUN_0216189c(local_c);
    if (iVar1 == 0) {
      DAT_0216e7a8 = 2;
      FUN_02163654(0xf,1,1,0xffffffff,0);
      FUN_02162378(0x12);
      FUN_02154424();
      FUN_02157088(0x215ef49);
      return;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (*(char *)(local_c[0] + 0x28) != '\x02') break;
        local_c[0] = local_c[0] + 0x2a;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    if (iVar2 == iVar1) {
      DAT_0216e7a8 = 3;
      FUN_02163654(0xe,1,1,0xffffffff,0);
      FUN_02162378(0x12);
      FUN_02154424();
      FUN_02157088(0x215ef49);
      return;
    }
    DAT_0216e7a8 = 1;
    FUN_02162378(0xf);
    FUN_02157088(0x215f03d);
  }
  return;
}

