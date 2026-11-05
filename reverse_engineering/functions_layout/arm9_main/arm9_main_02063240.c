
void FUN_02063240(void)

{
  int iVar1;
  
  if (DAT_020af518 == 0) {
    DAT_020af518 = 1;
    FUN_0206304c();
    DAT_020af51c = 0;
    thunk_FUN_02055910();
    do {
      iVar1 = FUN_0205587c(0xd,1);
    } while (iVar1 == 0);
    FUN_020558a4(0xd,0x20630dd);
    FUN_02063104();
    FUN_020558a4(0xd,0);
    FUN_020558a4(0xd,0x2063095);
    DAT_020af520 = 0;
    FUN_02063370(&DAT_020af600);
    FUN_020558a4(0x11,0x2063075);
    FUN_02062e1c(0);
  }
  return;
}

