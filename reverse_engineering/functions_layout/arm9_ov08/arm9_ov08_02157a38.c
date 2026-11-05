
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02157a38(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_021622f8();
  FUN_02157528();
  FUN_02154908();
  FUN_021549c8();
  FUN_02154614();
  iVar1 = FUN_0215702c();
  if ((iVar1 == 1) && (iVar1 = FUN_02157004(2), iVar1 != 0)) {
    DAT_0216e71c = FUN_021574dc(s_msg_usa_bmg_l_0216b5a0);
  }
  else {
    iVar1 = FUN_0215702c();
    DAT_0216e71c = FUN_021574dc((&PTR_s_msg_jap_bmg_l_0216b588)[iVar1]);
  }
  uVar2 = FUN_0215477c(s_char_jtMain_nce_l_0216b5b0);
  FUN_0216607c(1,uVar2);
  uVar2 = FUN_0215477c(s_char_jbMain_nce_l_0216b5c4);
  FUN_0216607c(0,uVar2);
  FUN_02154750(s_char_jtBgMain_ncg_l_0216b5d8,0x2066a3d);
  FUN_02154750(s_char_jtBgMain_ncl_l_0216b5ec,0x2066f1d);
  FUN_02154750(s_char_jtObjMain_ncg_l_0216b600,0x2066d6d);
  FUN_02154750(s_char_xtObjMain_ncl_l_0216b618,&LAB_02066e8c_1);
  FUN_02154750(s_char_jbBgStep1_ncg_l_0216b630,0x20669f9);
  FUN_02154750(s_char_jbBgStep1_ncl_l_0216b648,0x2066f65);
  FUN_02154750(s_char_jbObjMain_ncg_l_0216b660,0x2066db5);
  FUN_02154750(s_char_ybObjMain_ncl_l_0216b678,0x2066ed5);
  iVar1 = FUN_0215701c();
  if (iVar1 == 0) {
    FUN_02154750(s_char_jtTop_nsc_l_0216b690,0x2066c5d);
  }
  else if (iVar1 == 1) {
    FUN_02154750(s_char_jtStep1_nsc_l_0216b6a4,0x2066c5d);
  }
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 3;
  _DAT_0400000a = _DAT_0400000a & 0xfffc | 3;
  FUN_02166adc(1,2);
  FUN_02166adc(0,2);
  FUN_02157088(0x2157a0d);
  return;
}

