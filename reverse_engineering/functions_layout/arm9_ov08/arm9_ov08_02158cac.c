
void FUN_02158cac(int param_1)

{
  if (param_1 == 2) {
    FUN_02161bc8();
    DAT_0216e73c = 1;
    FUN_02162338();
    FUN_02162378(0x10);
  }
  else if (param_1 == 3) {
    DAT_0216e73c = 2;
    FUN_02162338();
    FUN_02162378(0x12);
  }
  else {
    DAT_0216e73c = 0;
    FUN_02162338();
    FUN_02162378(0x12);
  }
  FUN_02157700(0);
  FUN_02157750();
  FUN_02157088(0x2158d7d);
  return;
}

