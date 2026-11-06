
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021675f8(void)

{
  GX_DisableBankForBG();
  GX_DisableBankForOBJ();
  GX_DisableBankForSubBG();
  GX_DisableBankForSubOBJ();
  FUN_0216757c();
  GX_SetBankForBG(DAT_0216e878);
  GX_SetBankForOBJ(DAT_0216e87c);
  GX_SetBankForBGExtPltt(DAT_0216e880);
  GX_SetBankForOBJExtPltt(DAT_0216e884);
  GX_SetBankForTex(DAT_0216e888);
  GX_SetBankForTexPltt(DAT_0216e88c);
  FUN_0206550c(DAT_0216e890);
  GX_SetBankForSubBG(DAT_0216e894);
  GX_SetBankForSubOBJ(DAT_0216e898);
  GX_SetBankForSubBGExtPltt(DAT_0216e89c);
  GX_SetBankForSubOBJExtPltt(DAT_0216e8a0);
  FUN_02065490(DAT_0216e8a8);
  _DAT_04000050 = 0;
  _DAT_04001050 = 0;
  _DAT_04000010 = 0;
  _DAT_04000014 = 0;
  _DAT_04000018 = 0;
  _DAT_0400001c = 0;
  _DAT_04001010 = 0;
  _DAT_04001014 = 0;
  _DAT_04001018 = 0;
  _DAT_0400101c = 0;
  FUN_02061600(1);
  return;
}

