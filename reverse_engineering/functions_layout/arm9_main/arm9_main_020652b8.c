
/* JUS-SDK GX_ResetBankForTexPltt [behavioral] tail-calls resetBankForX_ with the manager field
   0x020afbaa, which GX_SetBankForTexPltt updates */

void GX_ResetBankForTexPltt(void)

{
  resetBankForX_(&DAT_020afbaa);
  return;
}

