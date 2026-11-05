
void FUN_0215b658(void)

{
  undefined4 local_10;
  int local_c [3];
  
  FUN_02154560();
  FUN_02167204(*(undefined4 *)(DAT_0216e778 + 4));
  FUN_021664f0(0);
  FUN_02154750(s_char_ybObjMain_ncl_l_0216b8dc,0x2066ed5);
  FUN_02166a84(1,1);
  FUN_02166a84(0,0x15);
  FUN_02157038(&local_10,local_c);
  if (local_c[0] == 0) {
    FUN_0215707c(2,1);
    FUN_02157054(0,local_10);
    FUN_02157088(0x215e0a9);
  }
  else if (*(char *)(DAT_0216e778 + 0x2a) == '\0') {
    FUN_0215707c(0,1);
    FUN_02157054(1,0);
    FUN_02157088(0x215b2cd);
  }
  else {
    FUN_0215707c(0,0);
    FUN_02157054(0,1);
    FUN_02157088(0x216080d);
  }
  FUN_02166b5c(&DAT_0216e778);
  return;
}

