
void FUN_021676d0(void)

{
  DAT_0216e878 = GX_DisableBankForBG();
  DAT_0216e87c = GX_DisableBankForOBJ();
  DAT_0216e880 = GX_DisableBankForBGExtPltt();
  DAT_0216e884 = GX_DisableBankForOBJExtPltt();
  DAT_0216e888 = GX_DisableBankForTex();
  DAT_0216e88c = GX_DisableBankForTexPltt();
  DAT_0216e890 = FUN_02065130();
  DAT_0216e894 = GX_DisableBankForSubBG();
  DAT_0216e898 = GX_DisableBankForSubOBJ();
  DAT_0216e89c = GX_DisableBankForSubBGExtPltt();
  DAT_0216e8a0 = GX_DisableBankForSubOBJExtPltt();
  DAT_0216e8a4 = GX_DisableBankForARM7();
  DAT_0216e8a8 = FUN_02065110();
  GX_SetBankForARM7(DAT_0216e8a4);
  FUN_0216757c();
  return;
}

