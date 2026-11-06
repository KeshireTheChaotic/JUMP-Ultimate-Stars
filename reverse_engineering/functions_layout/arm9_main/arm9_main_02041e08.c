
void FUN_02041e08(int param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x431);
  if (cVar1 != '\0') {
    param_2 = (uint)*(byte *)(param_1 + 0x432);
  }
  if (cVar1 != '\0' && param_2 != 0) {
    GX_SetBankForSubBGExtPltt(0);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ(0);
    GX_SetBankForTex(6);
    GX_SetBankForSubOBJ(8);
    *(undefined4 *)(DAT_020a104c + 4) = 0x20000;
    FUN_020459ec(DAT_020a0e64,0x40000);
    return;
  }
  if (cVar1 != '\0') {
    GX_SetBankForSubBGExtPltt(0);
    GX_SetBankForSubOBJ(0);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForTex(0xe);
    GX_SetBankForSubOBJ(0x100);
    *(undefined4 *)(DAT_020a104c + 4) = 0x4000;
    FUN_020459ec(DAT_020a0e64,0x60000);
    return;
  }
  if (*(char *)(param_1 + 0x432) == '\0') {
    GX_SetBankForSubBG(0);
    GX_SetBankForSubBGExtPltt(0x80);
    GX_SetBankForSubOBJ(0);
    GX_SetBankForTex(10);
    GX_SetBankForSubBG(4);
    GX_SetBankForSubOBJ(0x100);
    *(undefined4 *)(DAT_020a104c + 4) = 0x4000;
    FUN_020459ec(DAT_020a0e64,0x40000);
    return;
  }
  GX_SetBankForSubBG(0);
  GX_SetBankForSubBGExtPltt(0x80);
  GX_SetBankForSubOBJ(0);
  GX_SetBankForTex(2);
  GX_SetBankForSubBG(4);
  GX_SetBankForSubOBJ(8);
  *(undefined4 *)(DAT_020a104c + 4) = 0x20000;
  FUN_020459ec(DAT_020a0e64);
  return;
}

