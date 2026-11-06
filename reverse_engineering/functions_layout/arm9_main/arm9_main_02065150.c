
/* JUS-SDK GX_DisableBankForTex [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afba8, which GX_SetBankForTex updates */

void GX_DisableBankForTex(void)

{
  disableBankForX_(&DAT_020afba8);
  return;
}

