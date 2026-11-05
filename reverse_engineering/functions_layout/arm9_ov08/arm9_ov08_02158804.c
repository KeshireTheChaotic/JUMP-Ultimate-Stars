
void FUN_02158804(void)

{
  int iVar1;
  
  iVar1 = FUN_02166314(1);
  if (((iVar1 == 0) && (iVar1 = FUN_02166314(0), iVar1 == 0)) &&
     (iVar1 = FUN_02154444(), iVar1 != 0)) {
    FUN_02167204(DAT_0216e738);
    FUN_021547b8();
    FUN_02154560();
    FUN_0216589c(DAT_0216e734);
    FUN_02166a84(1,1);
    FUN_02166a84(0,0x14);
    if (DAT_0216e730 == '\0') {
      FUN_0215707c(0,0);
      FUN_02157088(0x2157f41);
      return;
    }
    if (DAT_0216e72c == '\0') {
      FUN_0215707c(0,1);
      FUN_02157088(0x2158755);
      return;
    }
    if (DAT_0216e72c == '\x01') {
      FUN_0215707c(0,1);
      FUN_02157088(0x2158251);
      return;
    }
    if (DAT_0216e72c != '\x02') {
      return;
    }
    FUN_0215707c(0,1);
    FUN_02157088(0x2159431);
  }
  return;
}

