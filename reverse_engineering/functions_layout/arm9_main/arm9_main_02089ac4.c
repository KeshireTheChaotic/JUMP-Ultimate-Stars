
void FUN_02089ac4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)FUN_0201a2fc();
  FUN_0201aeec(*puVar1,1);
  if ((DAT_0214bea4 != 1) && (DAT_0214bea4 != 2)) {
    FUN_02089264(0);
  }
  DAT_0214bf0c = (undefined2)(param_2 << 0xe);
  DAT_0214be74 = param_1;
  DAT_0214bea0 = param_2;
  if (DAT_0214bea4 == 1) {
    DAT_0214bea4 = 4;
    FUN_02059560(FUN_02088958 + 1);
    FUN_02088eac(4,0x78);
  }
  DAT_0214bea4 = 3;
  DAT_0214bee4 = 0;
  DAT_0214be41 = 0;
  for (uVar3 = 0; uVar3 < 6; uVar3 = uVar3 + 1) {
    (&DAT_0214bee8)[uVar3] = 0xff;
  }
  iVar2 = FUN_020898c8();
  if (iVar2 == 0) {
    DAT_0214bea4 = 9;
  }
  return;
}

