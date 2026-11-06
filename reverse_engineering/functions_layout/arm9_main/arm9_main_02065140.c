
/* JUS-SDK GX_DisableBankForTexPltt [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afbaa, which GX_SetBankForTexPltt updates */

void GX_DisableBankForTexPltt(void)

{
  disableBankForX_(&DAT_020afbaa);
  return;
}

