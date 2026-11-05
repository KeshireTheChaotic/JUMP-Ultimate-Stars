
void FUN_02089264(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0214be8c != (code *)0x0) {
    (*DAT_0214be8c)(s_WH_Finalize__state____d_020a04a0,DAT_0214bea4);
  }
  if (DAT_0214bea4 == 3) {
    DAT_0214bea4 = 4;
    FUN_02088eac(4,0x78);
  }
  if ((DAT_0214bea4 != 6) && (DAT_0214bea4 != 5)) {
    DAT_0214bea4 = 4;
    FUN_02089044();
    FUN_02088eac(4,0x78);
  }
  DAT_0214bea4 = 4;
  switch(DAT_0214be60) {
  case 0:
  case 2:
    iVar1 = FUN_020891fc();
    if (iVar1 == 0) {
      FUN_02089044();
    }
    break;
  case 1:
  case 3:
    iVar1 = FUN_02089104();
    if (iVar1 == 0) {
      FUN_02089044();
    }
  }
  FUN_02088eac(4,0xf0);
  if (param_1 != 0) {
    DAT_0214bea4 = 4;
    iVar1 = FUN_02059428(0x208924d);
    if (iVar1 != 2) {
      DAT_0214bea4 = 9;
      return;
    }
    FUN_02088eac(4,0x78);
    FUN_0201b268(DAT_0214be7c);
    DAT_0214be7c = 0;
    FUN_0201a2ec(DAT_0214be68);
    FUN_0201b268(DAT_0214be88);
    FUN_0201b268(DAT_0214be9c);
    puVar2 = (undefined4 *)FUN_0201a2fc();
    FUN_0201aeec(*puVar2,0);
  }
  return;
}

