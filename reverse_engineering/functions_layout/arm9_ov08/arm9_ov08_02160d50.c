
void FUN_02160d50(uint param_1)

{
  if ((DAT_0216e7d8 == '\0') && (param_1 < 4)) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      DAT_0216e7d8 = 3;
      FUN_02162338();
      FUN_02162378(0x12);
      FUN_02163654(0x10,1,1,0xffffffff,0);
      FUN_02154424();
      FUN_02157088(0x2160d2d);
      return;
    case 1:
      DAT_0216e7d8 = 1;
      FUN_02162338();
      FUN_02157088(0x2160ef9);
      return;
    case 2:
      FUN_02162338();
      FUN_02162f14(0);
      FUN_02163654(0x11,0,1,0xffffffff,0);
      FUN_02154424();
      FUN_02157088(0x2160cd1);
      return;
    case 3:
      DAT_0216e7d8 = '\x02';
      FUN_02162338();
      FUN_02162378(9);
      FUN_02157088(0x2160ef9);
    }
  }
  return;
}

